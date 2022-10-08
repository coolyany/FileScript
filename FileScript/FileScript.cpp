#include "FileScript.h"
#include <QIcon>

FileScript::FileScript(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

	this->setWindowTitle(QStringLiteral("周鹏飞的脚本器"));
	this->setWindowIcon(QIcon(":/new/prefix1/resource/title.png"));

	suffCfg = new SuffixConfig(this);
	m_suffix = '.txt';//默认

	ui.lineEdit->setEnabled(false);
	ui.lineEdit->setFocusPolicy(Qt::NoFocus);

	connect(ui.pushButton, &QPushButton::clicked, this, &FileScript::OnClickedOk);
	connect(ui.pushButton_2, &QPushButton::clicked, this, &FileScript::OnClickedOpenFile);
	connect(ui.action_config, &QAction::triggered, this, &FileScript::OnClickedConfig);
	connect(suffCfg, &SuffixConfig::OnOk, this, &FileScript::OnClickedConfigOk);
	connect(suffCfg, &SuffixConfig::OnCancel, this, &FileScript::OnClickedConfigCancel);

}



void FileScript::OnClickedOk()
{
	QString path = ui.lineEdit->text();
	if (!path.isEmpty())
	{
		TraversalDir(path);
		QMessageBox::information(this, "successful", "修改完成", QMessageBox::Yes);
	}
	else
	{
		QMessageBox::information(this, "error", "请先选择文件目录", QMessageBox::Yes);
	}
	//QString filePath = "D:\\TEST\\FileScript\\test";
	//ModifyFileName(filePath);
	//getFileBaseName(filePath);
	//TraversalDir(filePath);
}

void FileScript::OnClickedOpenFile()
{
	//选择目录
	QString dir = QFileDialog::getExistingDirectory(this, tr("Open Directory"), "/", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
	if (!dir.isEmpty())
	{
		ui.lineEdit->setText(dir);
	}
}

void FileScript::OnClickedConfig()
{
	/*if (!suffCfg)
	{
		suffCfg = new SuffixConfig(this);
		qDebug() << "connect";

		conStateOk = connect(suffCfg, &SuffixConfig::OnOk, this, &FileScript::OnClickedConfigOk);
		conStateCancel = connect(suffCfg, &SuffixConfig::OnCancel, this, &FileScript::OnClickedConfigCancel);
		qDebug() << "conStateOk :: " << conStateOk;
		qDebug() << "conStateCancel :: " << conStateCancel;

	}*/
	suffCfg->show();
}

void FileScript::OnClickedConfigOk(QString data)
{
	qDebug() << "reciv :: " << data;
	/*if (conStateOk || conStateCancel)
	{
		disconnect(suffCfg, &SuffixConfig::OnOk, this, &FileScript::OnClickedConfigOk);
		disconnect(suffCfg, &SuffixConfig::OnCancel, this, &FileScript::OnClickedConfigCancel);
		conStateOk = false;
		conStateCancel = false;
	}*/
	m_suffix = data;
}

void FileScript::OnClickedConfigCancel()
{
	/*if (suffCfg)
	{
		qDebug() << "disconnect";
		if (conStateOk || conStateCancel)
		{
			disconnect(suffCfg, &SuffixConfig::OnOk, this, &FileScript::OnClickedConfigOk);
			disconnect(suffCfg, &SuffixConfig::OnCancel, this, &FileScript::OnClickedConfigCancel);
			conStateOk = false;
			conStateCancel = false;
		}
		delete suffCfg;
		suffCfg = NULL;
	}*/
}

QString FileScript::getFileBaseName(QString filePath)
{
	int index = filePath.lastIndexOf('\\');
	if (index < 0)
	{
		index = filePath.lastIndexOf('/');
	}
	qDebug() << "********** :: " << index;
	QString name = filePath.mid(index + 1);
	qDebug() << "base name :: " << name;
	return name;
}

/* 遍历目录,递归遍历 */
void FileScript::TraversalDir(QString path)
{
	QDir dir(path);
	if (!dir.exists())
	{
		QMessageBox::information(this, "error", "this dir is not exists", QMessageBox::Yes);
		return;
	}

	dir.setFilter(QDir::Dirs | QDir::Files);//除了目录或文件，其他的过滤掉
	dir.setSorting(QDir::DirsFirst);//优先显示目录
	QFileInfoList list = dir.entryInfoList();//获取文件信息列表
	int i = 0;
	int name_index = 1;
	do {
		QFileInfo fileInfo = list.at(i);
		/* 排除'.'目录和'..'目录 */
		if (fileInfo.fileName() == "." | fileInfo.fileName() == "..")
		{
			i++;
			continue;
		}
		//为目录时
		if (fileInfo.isDir())
		{
			TraversalDir(fileInfo.filePath());
		}
		//不为目录时
		else {
			qDebug() << "name :: " << fileInfo.filePath();
			QString name = getFileBaseName(path);
			QString newName = path + "/" + name + "_%1" + m_suffix;
			QFile::rename(fileInfo.filePath(), newName.arg(name_index));
		}
		i++;
		name_index++;
	} while (list.size() > i);
}

bool FileScript::ModifyFileName(QString path)
{
	QDir dir(path);
	if (!dir.exists())
	{
		QMessageBox::information(this, "error", "this dir is not exists", QMessageBox::Yes);
		return false;
	}

	QStringList filter;
	filter << "*.txt";
	dir.setNameFilters(filter);


	QFileInfoList infoList = dir.entryInfoList(filter, QDir::AllEntries, QDir::Time);

	if (infoList.size() < 0)
	{
		//qDebug() << "file size is null";
		QMessageBox::information(this, "error", "this dir is null", QMessageBox::Yes);
		return false;
	}
	qDebug() << "info list is :: " << infoList.size();
	for (auto item : infoList) {
		qDebug() << item.filePath();
		getFileBaseName(item.filePath());

	}

	return false;
}

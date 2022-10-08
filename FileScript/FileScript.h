#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_FileScript.h"

#include <QDir>
#include <QDebug>
#include <QFileInfo>
#include <QFile>
#include <QMessageBox>
#include <QFileDialog>
#include "SuffixConfig.h"

class FileScript : public QMainWindow
{
    Q_OBJECT

public:
    FileScript(QWidget *parent = Q_NULLPTR);
/*槽函数*/
public:
	void OnClickedOk();
	void OnClickedOpenFile();
	void OnClickedConfig();
	void OnClickedConfigOk(QString data);
	void OnClickedConfigCancel();

/*方法函数*/
public:
	QString getFileBaseName(QString filePath);
	void TraversalDir(QString path);
	bool ModifyFileName(QString path);
private:
    Ui::FileScriptClass ui;

	SuffixConfig *suffCfg = nullptr;
	QString m_suffix;
	bool conStateOk = false;
	bool conStateCancel = false;

};

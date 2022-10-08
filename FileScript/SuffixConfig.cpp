#include "SuffixConfig.h"

SuffixConfig::SuffixConfig(QWidget *parent)
	: QDialog(parent)
{
	ui.setupUi(this);

	this->setWindowTitle(tr("设置需要修改的文件后缀名"));

	connect(ui.okButton, &QPushButton::clicked, this, &SuffixConfig::OnClickedOk);
	connect(ui.cancelButton, &QPushButton::clicked, this, &SuffixConfig::OnClickedCancel);

}

void SuffixConfig::OnClickedOk()
{
	//ui.radioButton->isChecked();
	if (ui.radioButton->isChecked())
	{
		emit OnOk(ui.radioButton->text());
	}
	else if (ui.radioButton_2->isChecked())
	{
		emit OnOk(ui.radioButton_2->text());

	}
	else if (ui.radioButton_3->isChecked())
	{
		emit OnOk(ui.radioButton_3->text());

	}
	else if (ui.radioButton_4->isChecked())
	{
		emit OnOk(ui.radioButton_4->text());

	}
	
}

void SuffixConfig::OnClickedCancel()
{
	emit OnCancel();
}

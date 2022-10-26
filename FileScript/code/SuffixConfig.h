#pragma once
#include "ui_SuffixConfig.h"
#include <QDialog>

class SuffixConfig : public QDialog
{
	Q_OBJECT
public:
	SuffixConfig(QWidget *parent = Q_NULLPTR);
/* 槽函数 */
public:
	void OnClickedOk();
	void OnClickedCancel();
signals:
	void OnOk(QString);
	void OnCancel();
private:
	Ui::SuffixConfigClass ui;
};
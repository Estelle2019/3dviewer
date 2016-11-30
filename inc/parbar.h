﻿#ifndef PARBAR_H
#define PARBAR_H

#ifndef OS_LINUX
#pragma execution_character_set("utf-8")
#endif
#include <QMainWindow>
#include <QTableWidgetItem>
#include "qtgl.h"

namespace Ui {
class ParBar;
}

class ParBar : public QMainWindow
{
    Q_OBJECT

public:
    Ui::ParBar *ui;
    explicit ParBar(QWidget *parent = 0);
    ~ParBar();
public:
	void SetGL(QtGL*);
private:
	void UpdatePar();
	void UpdateFixPar();
	glm::mat4 GetChangeMat(int kind);
private:
	QtGL *gl;
	QLineEdit *matEdit[4][4];

private slots:
	void SelectModel(int);
	void SelectViewMode(int);
	void SelectFixMode(int);
	void AddShape();
	void IChange();
	void Change();
	void FixApply();
};

#endif

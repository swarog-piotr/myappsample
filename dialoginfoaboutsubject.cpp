#include "dialoginfoaboutsubject.h"
#include "ui_dialoginfoaboutsubject.h"

DialogInfoAboutSubject::DialogInfoAboutSubject(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogInfoAboutSubject)
{
    ui->setupUi(this);
}

DialogInfoAboutSubject::~DialogInfoAboutSubject()
{
    delete ui;
}

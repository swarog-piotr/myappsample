#ifndef DIALOGINFOABOUTSUBJECT_H
#define DIALOGINFOABOUTSUBJECT_H

#include <QDialog>

namespace Ui {
class DialogInfoAboutSubject;
}

class DialogInfoAboutSubject : public QDialog
{
    Q_OBJECT

public:
    explicit DialogInfoAboutSubject(QWidget *parent = nullptr);
    ~DialogInfoAboutSubject();

private:
    Ui::DialogInfoAboutSubject *ui;
};

#endif // DIALOGINFOABOUTSUBJECT_H

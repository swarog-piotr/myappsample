#ifndef SUBJECT_H
#define SUBJECT_H

#include <QString>
#include <QDateTime>
#include <QVector>
#include <QMetaType>
class Subject
{
public:
    Subject();

    QString name;
    QVector<QDateTime> beginTimes;
    QVector<QDateTime> endTimes;



};

Q_DECLARE_METATYPE(Subject);



#endif // SUBJECT_H

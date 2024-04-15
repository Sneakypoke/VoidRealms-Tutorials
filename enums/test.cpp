#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{}

void Test::DoTest(QString Command)
{
    QMetaObject MetaObject = this->staticMetaObject;
    QMetaEnum MetaEnum = MetaObject.enumerator(MetaObject.indexOfEnumerator("Tests"));

    switch(MetaEnum.keysToValue(Command.toLatin1()))
    {
        case TEST1:
            qDebug() << "Do something for Test 1!";
            break;
        case TEST2:
            qDebug() << "Do something for Test 2!";
            break;
        case TEST3:
            qDebug() << "Do something for Test 3!";
            break;
        default:
            qDebug() << "Unknown Command!!!";
            break;
    }
}

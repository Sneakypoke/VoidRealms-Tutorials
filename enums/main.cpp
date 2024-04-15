#include <QCoreApplication>
#include "test.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Test cTest;
    cTest.DoTest(QString("TEST1"));

    return a.exec();
}

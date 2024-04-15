#include "test.h"

Test::Test(QObject *parent)
    : QObject{parent}
{}

void Test::dostuff()
{
    qInfo() << "Doing Stuff!";
    emit close();
}

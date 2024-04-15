/*
 * Qt memory Management
 * Parent Child Relationship
 */

#include <QCoreApplication>
#include <QTimer>

#include "test.h"

//Setting in the constructor
Test* getTest(QObject* parent)
{
    return new Test(parent);
}

//Setting up after the constructor
Test* getTest()
{
    return new Test(); //No parent
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QTimer timer;
    timer.singleShot(3000,&a,&QCoreApplication::quit);

    //Setting in the constructor
    Test* dog = getTest(&a);
    dog->setObjectName("Spot");

    //Setting up after the constructor
    Test* cat = getTest();
    cat->setObjectName("Garfield");
    cat->setParent(dog);

    return a.exec();
}

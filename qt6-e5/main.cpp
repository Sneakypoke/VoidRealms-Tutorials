#include <QCoreApplication>

#include "cat.h"
#include <QDebug>

void test1(Cat &cat)
{
    qInfo() << "Addr: " << &cat;
}

void test2(Cat *cat)
{
    qInfo() << "Ptr: " << cat;
}

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Cat kitty;
    kitty.setObjectName("Kitty");
    Cat death;
    death.setObjectName("Grimm");

    test1(kitty);
    test2(&kitty);

    test1(death);
    test2(&death);

    return a.exec();
}

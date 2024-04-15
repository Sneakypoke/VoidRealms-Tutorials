#ifndef TEST_H
#define TEST_H

#include <QObject>
#include <QMetaEnum>
#include <QDebug>

class test : public QObject
{
    Q_OBJECT
    Q_ENUMS(Tests)
public:
    explicit test(QObject *parent = nullptr);

    enum Tests
    {
        TEST1,
        TEST2,
        TEST3
    };

signals:

public slots:

    void DoTest(QString Command);
};

#endif // TEST_H

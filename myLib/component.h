#pragma once

#include <QObject>

class MySingleton : public QObject {
    Q_OBJECT
public:
    static void create() { self = new MySingleton(); }
    static MySingleton& get() { return *self; }

    Q_INVOKABLE int getI() { return ++i; }

private:
    MySingleton() = default;
    int i = 0;

    static MySingleton *self;

};

#pragma once

#include <QObject>
#include <QQmlEngine>
#include <QTimer>

class MyQmlComponent : public QObject {
    Q_OBJECT
    QML_ELEMENT
public:

    Q_PROPERTY(int x READ getX WRITE setX NOTIFY xChanged)

    MyQmlComponent() {
        timer = new QTimer();
        timer->setInterval(100);
        timer->setSingleShot(false);
        connect(timer, &QTimer::timeout, this, [&]() {
            ++x;
            emit xChanged();
        });
        timer->start();
    }

    int getX() const;
    void setX(int val);

signals:
    void xChanged();

private:
    int x = 1000;
    QTimer *timer = nullptr;
};

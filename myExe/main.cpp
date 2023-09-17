#include <QApplication>
#include <QQmlApplicationEngine>

#include "component.h"

int main(int argc, char** argv) {

    MySingleton::create();

    QApplication app(argc, argv);

    QQmlApplicationEngine engine;
    engine.load(QUrl(QStringLiteral("qrc:/qml/main.qml")));

    return app.exec();
}

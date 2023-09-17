#include "mylib_plugin.h"
#include "component.h"
#include <QQmlEngine>

void MyPlugin::registerTypes(const char *uri) {
    qmlRegisterSingletonInstance(uri, 1, 0, "MySingleton", &MySingleton::get());
}

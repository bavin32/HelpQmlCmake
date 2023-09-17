

qt_add_library(
    MyLib
    SHARED

    component.h
    component.cpp
    qml_component.h
    qml_component.cpp
    mylib_plugin.h
    mylib_plugin.cpp
)

qt_add_qml_module(
    MyLib
    URI "MyLib"
)

target_include_directories(
    MyLib
    PUBLIC

    "."
)
target_link_libraries(
    MyLib
    PUBLIC

    Qt6::Qml
    Qt6::Quick
    Qt6::Core
)

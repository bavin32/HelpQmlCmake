
qt_add_executable(
    MyMain
    main.cpp
    myExe.qrc
)

target_link_libraries(
    MyMain
    PUBLIC

    MyLib
    Qt6::Qml
    Qt6::Quick
    Qt6::Core
    Qt6::Widgets
)

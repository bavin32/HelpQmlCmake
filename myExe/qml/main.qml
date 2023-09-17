import QtQuick
import QtQuick.Controls
import MyLib

ApplicationWindow {
    visible: true
    width: 640
    height: 480
    title: qsTr("Minimal Qml")

    MyQmlComponent {
        id: myQmlComp
    }

    Text {
        anchors.centerIn: parent
        text: "myQml: " + myQmlComp.x + " mySingleton: " + MySingleton.getI()
    }
}

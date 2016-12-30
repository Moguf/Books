#include <iostream>
#include <QtWidgets>

int main(int argc, char **argv){
    QApplication app(argc, argv);
    QWidget w;
    w.resize(320, 320);
    w.setWindowTitle(QApplication::translate("childwidget", "Child widget"));
    w.show();

    QPushButton *b =
        new QPushButton(QApplication::translate("childewidget", "Press me"), &w);
    b->move(100, 100);
    b->show();

    QPushButton *b2 =
        new QPushButton(QApplication::translate("childewidget", "Press me"), &w);
    b2->move(200, 100);
    b2->show();

    
    return app.exec();
}

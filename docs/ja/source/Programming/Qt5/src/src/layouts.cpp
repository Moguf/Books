#include <iostream>
#include <QtWidgets>

int main(int argc, char **argv){
    QApplication app(argc, argv);
    QWidget w;
    QLabel *l = new QLabel(QApplication::translate("windowlayout","Name:"));
    QLineEdit *le = new QLineEdit();

    QHBoxLayout *lyt = new QHBoxLayout();
    lyt->addWidget(l);
    lyt->addWidget(le);
    w.setLayout(lyt);
    w.setWindowTitle(QApplication::translate("windowlayout","Window layout:"));
    w.show();
    
    return app.exec();
}

#include <iostream>
#include <QtWidgets>

int main(int argc, char **argv){
    QApplication app(argc, argv);
    QWidget w;
    QLabel *ql = new QLabel(QApplication::translate("nestedlayouts","Query:"));
    QLineEdit *qe = new QLineEdit();
    QTableView *resultView = new QTableView();

    QHBoxLayout *queryLyt = new QHBoxLayout();
    queryLyt->addWidget(ql);
    queryLyt->addWidget(qe);    
    
    QVBoxLayout *mainLyt = new QVBoxLayout();
    mainLyt->addLayout(queryLyt);
    mainLyt->addWidget(resultView);
    w.setLayout(mainLyt);
    w.setWindowTitle(QApplication::translate("nestedlayouts","Nested layout:"));
    w.show();


    return app.exec();
}

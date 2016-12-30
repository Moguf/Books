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
    

    // -*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-
    QStandardItemModel m;
    m.setHorizontalHeaderLabels(QStringList()
                                << QApplication::translate("nestedlayouts","Name")
                                << QApplication::translate("nestedlayouts","Office"));
    
    QList<QStringList> rows = QList<QStringList>()
        << (QStringList() << "Verne Nilsen" << "123")
        << (QStringList() << "Carlos Tang" << "77")
        << (QStringList() << "Bronwyn Hawcroft" << "119")
        << (QStringList() << "Alessandro Hanssen" << "32")
        << (QStringList() << "Andrew John Bakken" << "54")
        << (QStringList() << "Vansessa Weatherley" << "85")
        << (QStringList() << "Revecca Dickens" << "17")
        << (QStringList() << "David Bradley" << "42")
        << (QStringList() << "Knut Walters" << "25")
        << (QStringList() << "Andrea Jones" << "34");

    foreach(QStringList row, rows){
        QList<QStandardItem *> items;
        foreach (QString text, row)
            items.append(new QStandardItem(text));
        m.appendRow(items);
    }
    resultView->setModel(&m);

    resultView->verticalHeader()->hide();
    resultView->horizontalHeader()->setStretchLastSection(true);
    // -*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-

    QVBoxLayout *mainLyt = new QVBoxLayout();
    mainLyt->addLayout(queryLyt);
    mainLyt->addWidget(resultView);
    w.setLayout(mainLyt);
    w.setWindowTitle(QApplication::translate("nestedlayouts","Nested layout:"));
    w.show();


    return app.exec();
}

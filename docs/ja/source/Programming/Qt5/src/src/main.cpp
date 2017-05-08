#include <iostream>
#include <string>

#include <QtWidgets>


class ImgViewer : public QWidget{
private:
    QImage img;
    QLabel *imgLabel;
    QScrollArea *sArea;
    void setImg(const QImage &newImg);
public:
    ImgViewer(const QString &filename);
};

ImgViewer::ImgViewer(const QString &filename): imgLabel(new QLabel), sArea(new QScrollArea){
    
    imgLabel->setBackgroundRole(QPalette::Base);
    imgLabel->setSizePolicy(QSizePolicy::Ignored, QSizePolicy::Ignored);
    imgLabel->setScaledContents(true);
    
    sArea->setWidget(imgLabel);
    sArea->setVisible(true);
    
    //setCentralWidget(sArea);
    QImageReader reader(filename);
    const QImage newImg = reader.read();
    if(newImg.isNull()){
        std::cout << "Error in input file." << std::endl;
        return ;
    }
    setImg(newImg);
    //lyt->addWidget(my_button);
    //lyt->addWidget(sArea);
    //setLayout(lyt);
}

void ImgViewer::setImg(const QImage &newImg){
    imgLabel->setPixmap(QPixmap::fromImage(newImg));
    sArea->setVisible(true);
    imgLabel->adjustSize();
}


int main(int argc, char **argv){
    QApplication app(argc, argv);
    QWidget w;
    ImgViewer *i = new ImgViewer(argv[1]);
    QPushButton *b = new QPushButton("Quit", &w);
    QHBoxLayout *lyt = new QHBoxLayout();
    lyt->addWidget(b);
    lyt->addWidget(i);
    w.setLayout(lyt);
    w.show();

    
    w.show();
    return app.exec();
}

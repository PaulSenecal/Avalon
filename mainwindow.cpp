#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    myView = new QGraphicsView;
    mainScene = new QGraphicsScene;
    myView->setScene(mainScene);
    setCentralWidget(myView);
    //mainScene->addLine(0, 0, 100, 100);
    for (int ligne = 0 ; ligne < mapSize[0]; ligne++) {
        // Et pour chaque ligne, parcourir toutes les colonnes ?
        for (int colonne = 0; colonne < mapSize[1]; colonne++) {
            // Dessiner le rectangle à cette position
            mainScene->addRect(colonne * cellSize, ligne * cellSize ,cellSize, cellSize);
        }
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

#include "mainwindow.h"
#include "ui_mainwindow.h"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    // Créer la map et placer des objets
    myMap = new Map(mapSize[0], mapSize[1]);
    myMap->setObject(5, 5, TREE);
    myMap->setObject(10, 10, WALL);
    myMap->setObject(3, 7, CRATE);

    // Créer la vue graphique
    myView = new QGraphicsView;
    mainScene = new QGraphicsScene;
    myView->setScene(mainScene);
    setCentralWidget(myView);

    // Dessiner la grille
    for (int ligne = 0; ligne < mapSize[0]; ligne++) {
        for (int colonne = 0; colonne < mapSize[1]; colonne++) {

            // TODO 1: Récupérer le type de la tuile
            ObjectType type = myMap->getTile(ligne, colonne).getType();

            // TODO 2: Choisir la couleur selon le type
            QColor couleur;
            if (type == EMPTY) {
                couleur = QColor(255, 255, 255);  // Blanc
            } else if (type == TREE) {
                couleur = QColor(34, 139, 34);    // Vert
            } else if (type == WALL) {
                couleur = QColor(80, 80, 80);     // Gris
            } else if (type == CRATE) {
                couleur = QColor(205, 133, 63);   // Marron
            }

            // TODO 3: Créer le rectangle avec la couleur
            QBrush pinceau(couleur);
            mainScene->addRect(colonne * cellSize, ligne * cellSize,
                               cellSize, cellSize,
                               QPen(Qt::black), pinceau);
        }
    }
}
MainWindow::~MainWindow()
{
    delete myMap;  // ← Ajouter ceci pour libérer la mémoire
    delete ui;
}

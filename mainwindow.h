#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QGraphicsItem>
#include <QGraphicsView>
#include <QGraphicsScene>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    int mapSize [2] = {20,20};
    int cellSize = 75;
    Ui::MainWindow *ui;

    QGraphicsView *myView;
    QGraphicsScene *mainScene;
    QGraphicsItem *tree;

};
#endif // MAINWINDOW_H

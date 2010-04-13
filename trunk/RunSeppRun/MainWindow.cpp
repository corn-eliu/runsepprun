#include "MainWindow.h"

MainWindow::MainWindow()
{

	//set general parameters of the class
    setWindowTitle("Run Sepp Run");

    setWindowIcon(QIcon(":/Icon/ico.gif"));

    setGeometry(200, 200, 0, 0);
    setMinimumSize(800, 600);
    setMaximumSize(1680, 1050);

    createActions();
    createMenus();

    GraphicsView *view = new GraphicsView();

    view->setFocus();

    setCentralWidget(view);
}

void MainWindow::about()
{
    QMessageBox::about(this, "About Run Sepp Run",
                       "<b>Run Sepp Run preAlpha 0.01</b>"
                       "<p>Developers:<ul>"
                       "<li>Corneliu Ilisescu</li>"
                       "<li>Manuel Piubelli</li>"
                       "<li>Marco Seravalli</li>"
                       "<li>Patrick Clara</li></ul>"
                       "</p>");
}

void MainWindow::aboutQt()
{
    QMessageBox::aboutQt(this, "About Qt");
}

void MainWindow::createActions()
{

    aboutAct = new QAction("&About", this);
    connect(aboutAct, SIGNAL(triggered()), this, SLOT(about()));

    aboutQtAct = new QAction("AboutQt", this);
    connect(aboutQtAct, SIGNAL(triggered()), this, SLOT(aboutQt()));

    exitAct = new QAction("E&xit", this);
    exitAct->setShortcuts(QKeySequence::Close);
    connect(exitAct, SIGNAL(triggered()), this, SLOT(close()));
}

void MainWindow::createMenus()
{
    // Game Menu
    gameMenu = new QMenu("&Game");
    gameMenu->addAction(aboutAct);
    gameMenu->addAction(aboutQtAct);
    gameMenu->addAction(exitAct);

    // Menu Bar
    menuBar = new QMenuBar();
    setMenuBar(menuBar);
    menuBar->addMenu(gameMenu);
}

void MainWindow::closeEvent(QCloseEvent* event)
{
    QMessageBox::StandardButton choice = QMessageBox::question(this,
                                                               "Exit", "Do you really want to exit?",
                                                               QMessageBox::Ok | QMessageBox::Cancel,
                                                               QMessageBox::Cancel);

    if(choice == QMessageBox::Cancel)
        event->ignore();
}

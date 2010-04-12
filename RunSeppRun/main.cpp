#include <QApplication>
#include "MainWindow.h"

int main(int argc, char **argv)
{
    QApplication app(argc, argv);

    // MainWindow
    MainWindow *window = new MainWindow();
    (*window).show();

    return app.exec();
}

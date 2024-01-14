#include <QApplication>
// #include <QPushButton>
// #include "win_test.h"

#include <QProgressBar>
#include <QSlider>

int main(int argc, char **argv){
    QApplication app(argc, argv);

    // https://wiki.qt.io/Qt_for_Beginners
    // QPushButton button("Hello World!");

    // QIcon icon ("C:/Users/dell/OneDrive/Documents/Git/QT/FirstWindow/img/mytest.jpg");
    // QPushButton button;
    // QPushButton button1("test");
    // QPushButton button2("other", &button1);
    // QFont font("Courier");
    // button.setIcon(icon);
    // button.setFont(font);
    // button.setText("My Test");
    // button.setToolTip("A tooltip");
    // // button.show();
    // button1.show();

    // QWidget window;
    // window.setFixedSize(100, 50);

    // QPushButton *button = new QPushButton("Hello World", &window);
    // button->setGeometry(10,10,80,30);
    // window.show();
    // win_test window; // --  #include "win_test.h" --
    // window.show();

    ///
    /// --------- Example -----
    /// #include <QProgressBar>
    /// #include <QSlider>
    ///

    // Create a container window
    QWidget window;
    window.setFixedSize(200, 80);

    // Create a progress bar
    // with the range between 0 and 100, and a starting value of 0
    QProgressBar *progressBar = new QProgressBar(&window);
    progressBar->setRange(0, 100);
    progressBar->setValue(0);
    progressBar->setGeometry(10,10,180,30);

    // Create a horizontal slider
    // with the range between 0 and 100, anda starting value of 0
    QSlider *slider = new QSlider(&window);
    slider->setOrientation(Qt::Horizontal);
    slider->setRange(0, 100);
    slider->setValue(0);
    slider->setGeometry(0, 40, 180, 30);

    window.show();

    // Connection
    // This connection set the value of the progressbar
    // while the slider's value changes.

    QObject::connect(slider, SIGNAL(valueChanged(int)), progressBar, SLOT(setValue(int)));

    return app.exec();
}

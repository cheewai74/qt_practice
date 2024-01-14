#include "win_test.h"
#include <QPushButton>

win_test::win_test(QWidget *parent)
    : QWidget{parent}
{
    // Set size of the window
    setFixedSize(100, 50);

    // Create and position the button
    m_button = new QPushButton("Hello World", this);
    m_button->setGeometry(10, 10, 80, 30);

}

#include "window_test.h"
#include <QPushButton>

windpw::windpw(QWidget *parent)
    : QWidget{parent}
{

//     A signal is a message that an object can send, usually to report a status change.
//     A slot is a function that accepts and responds to a signal.
//
    setFixedSize(100, 50);
    m_button = new QPushButton("Hello World!", this);
    m_button->setGeometry(10,10,80,30);
}

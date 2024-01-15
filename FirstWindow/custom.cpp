#include "custom.h"
#include <QPushButton>
#include <QApplication>

custom::custom(QWidget *parent): QWidget(parent) {


    // Set size of the window
    setFixedSize(100, 50);

    // Create amd position the button
    m_button = new QPushButton("Hello World", this);
    m_button->setGeometry(10, 10,80, 30);
    m_button->setCheckable(true);

    m_counter = 0;

    connect(m_button, SIGNAL(clicked(bool)), this, SLOT(slotButtonClicked(bool)));
    connect(this, SIGNAL(counterReached()), QApplication::instance(), SLOT(quit()));
}

void custom::slotButtonClicked(bool checked){
    if(checked){
        m_button->setText("Checked");
    }
    else{
        m_button->setText("Hello World");
    }

    m_counter ++;
    if(m_counter==10){
        emit counterReached();
    }
}

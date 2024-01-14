#ifndef WINDOW_TEST_H
#define WINDOW_TEST_H

#include <QWidget>

class QPushButton;
class windpw : public QWidget
{
    Q_OBJECT
public:
    explicit windpw(QWidget *parent = nullptr);
private:
    QPushButton *m_button;
signals:
};

#endif // WINDOW_TEST_H

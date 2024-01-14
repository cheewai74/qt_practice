#ifndef WIN_TEST_H
#define WIN_TEST_H

#include <QWidget>

class QPushButton;
class win_test : public QWidget
{
    // Q_OBJECT
public:
    explicit win_test(QWidget *parent = nullptr);
private:
    QPushButton *m_button;
};

#endif // WIN_TEST_H

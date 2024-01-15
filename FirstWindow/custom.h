#ifndef CUSTOM_H
#define CUSTOM_H

#include <QWidget>

class QPushButton;
class custom : public QWidget
{
    Q_OBJECT
public:
    explicit custom(QWidget *parent = 0);
signals:
    void counterReached();
private slots:
    void slotButtonClicked(bool checked);
private:
    int m_counter;
    QPushButton *m_button;
};

#endif // CUSTOM_H

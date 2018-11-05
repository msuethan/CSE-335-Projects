#ifndef TEST_H
#define TEST_H
#include <QPushButton>

class Test: public QPushButton{
    Q_OBJECT

public:
    Test(QWidget* qw):QPushButton(qw){};
    Test(QString qs):QPushButton(qs){};

signals:
    void iChanged(QObject*);

public slots:
    void settable();
};

#endif // ETHANRADIOBUTTON_H

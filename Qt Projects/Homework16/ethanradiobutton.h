#ifndef ETHANRADIOBUTTON_H
#define ETHANRADIOBUTTON_H
#include <QRadioButton>

class EthanRadioButton: public QRadioButton{
    Q_OBJECT

public:
    EthanRadioButton(QWidget* qw):QRadioButton(qw){};
    EthanRadioButton(QString qs):QRadioButton(qs){};

signals:
    void iChanged(QObject*);

public slots:
    void myStateChanged();
};

#endif // ETHANRADIOBUTTON_H

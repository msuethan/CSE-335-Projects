#ifndef ETHANSLIDER_H
#define ETHANSLIDER_H
#include<QSlider>

class EthanSlider: public QSlider{
    Q_OBJECT

public:
    EthanSlider(QWidget* qw):QSlider(qw){};

signals:
    void iChanged(QObject*);

public slots:
    void slideChanged(int);
};

#endif // ETHANSLIDER_H

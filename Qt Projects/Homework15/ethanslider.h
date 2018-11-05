#ifndef ETHANSLIDER_H
#define ETHANSLIDER_H
#include <QSlider>

class EthanSlider: public QSlider{
    Q_OBJECT

public:
    EthanSlider(QWidget* qw):QSlider(qw){};

public slots:
    void sliderChange(QString);
};
#endif // ETHANSLIDER_H

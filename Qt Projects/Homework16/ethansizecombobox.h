#ifndef ETHANSIZECOMBOBOX_H
#define ETHANSIZECOMBOBOX_H
#include <QComboBox>

class EthanSizeComboBox: public QComboBox{
    Q_OBJECT

public:
    EthanSizeComboBox(QWidget* qw):QComboBox(qw){};

signals:
    void iChanged(QObject*);

public slots:
    void myCurrentSizeChanged(const QString&);
};

#endif // ETHANSIZECOMBOBOX_H

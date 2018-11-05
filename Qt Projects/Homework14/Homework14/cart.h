#ifndef CART_H
#define CART_H
#include <QTableWidget>

class Cart: public QTableWidget{
    Q_OBJECT

public:
    Cart(QWidget* qw):QTableWidget(qw){};
    //Cart(QString qs):QTableWidget(qs){};

signals:
    void iChanged(QObject*);

public slots:
    void settable(QList<QTableWidgetItem *>);
    void settable2();
};

#endif // ETHANRADIOBUTTON_H

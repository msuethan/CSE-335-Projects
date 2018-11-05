#ifndef ETHANLABEL_H
#define ETHANLABEL_H
#include <QObject>
#include <QLabel>
#include <QFont>
#include <QMessageBox>

class EthanLabel: public QLabel{
    Q_OBJECT

public:
    EthanLabel(QWidget* qw):QLabel(qw){};

public slots:
    void setSize(int);

    void modifyFontByRBcomicsans();
    void modifyFontByRBtnr();
    void modifyFontByRBarial();

    void modifyFontBySize(QString);
};
#endif // ETHANLABEL_H

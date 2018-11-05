#ifndef ETHANLINEEDIT_H
#define ETHANLINEEDIT_H
#include <QLineEdit>

class EthanLineEdit: public QLineEdit{
    Q_OBJECT

public:
    EthanLineEdit(const QString& qstring):QLineEdit(qstring){};
    EthanLineEdit(QWidget* qw):QLineEdit(qw){};

public slots:
    void lineEditChange(QString);
};

#endif // LINEEDIT_H

#ifndef ETHANLINEEDIT_H
#define ETHANLINEEDIT_H
#include <QLineEdit>

class EthanLineEdit: public QLineEdit{
    Q_OBJECT

public:
    EthanLineEdit(const QString& qstring):QLineEdit(qstring){};
    EthanLineEdit(QWidget* qw):QLineEdit(qw){};

signals:
    void iChanged(QObject*);

public slots:
    void myEditingFinished();
};

#endif // LINEEDIT_H

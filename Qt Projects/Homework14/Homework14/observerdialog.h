#ifndef OBSERVERDIALOG_H
#define OBSERVERDIALOG_H
#include <QDialog>

namespace Ui {
class ObserverDialog;
}

class ObserverDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ObserverDialog(QWidget *parent = 0);
    ~ObserverDialog();

    Ui::ObserverDialog* getUi() const {return ui;}
public slots:
private:
    Ui::ObserverDialog *ui;
};

#endif // OBSERVERDIALOG_H

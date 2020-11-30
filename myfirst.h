#ifndef MYFIRST_H
#define MYFIRST_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class myfirst; }
QT_END_NAMESPACE

class myfirst : public QMainWindow
{
    Q_OBJECT

public:
    myfirst(QWidget *parent = nullptr);
    ~myfirst();

private slots:
    void on_checkBox_clicked();

private:
    Ui::myfirst *ui;
};
#endif // MYFIRST_H

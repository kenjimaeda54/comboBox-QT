#ifndef COMBOBOX_H
#define COMBOBOX_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class ComboBox; }
QT_END_NAMESPACE

class ComboBox : public QMainWindow
{
    Q_OBJECT

public:
    ComboBox(QWidget *parent = nullptr);
    ~ComboBox();

private slots:
    void on_btn_response_clicked();

private:
    Ui::ComboBox *ui;
};
#endif // COMBOBOX_H

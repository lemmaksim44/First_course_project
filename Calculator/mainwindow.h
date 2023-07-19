#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_C_clicked();

    void on_pushButton_AC_clicked();

    void on_pushButton_OFF_clicked();

    void on_pushButton_Plus_or_Minus_clicked();

    void on_pushButton_Dot_clicked();

    void on_pushButton_Sum_clicked();

    void on_pushButton_Result_clicked();

    void on_pushButton_Difference_clicked();

    void on_pushButton_Multiplication_clicked();

    void on_pushButton_Division_clicked();

    void on_pushButton_Sin_clicked();

    void on_pushButton_Cos_clicked();

    void on_pushButton_Tg_clicked();

    void on_pushButton_Ctg_clicked();

    void on_pushButton_Square_clicked();

    void on_pushButton_Sqrt_clicked();

    void computation();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "error.h"
#include <math.h>

#define pi 3.14159265358  //3.14159265358979323846264338327950288419716939937510

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


int FN=0,       //First Number, определение первой цифры нового числа
    FS = 0,     //First Second, определяет в какое число будет записываться
    MO = 0,     //Math Operations, определяет какую операцию нужно проделать с числами
    MO_2 = 0,   //Math Operations 2, для потокового вывода
    TG = 0,     //Trigonometry, для обработки sin, cos, tg, ctg, sqrt
    DT = 0;     //Dot, для ввода вещественных чисел
double First, Second, Result = 0;

void MainWindow::on_pushButton_clicked()
{
    if (TG == 1) TG = First = 0;

    switch (DT)
        {
            case 0:
                if (FN == 0)
                    {
                        First = 1;
                        FN ++;
                        ui->lcdNumber->display(First);
                    }
                else if (First >= 0)
                    {
                        First = First * 10 + 1;
                        ui->lcdNumber->display(First);
                    }
                else
                    {
                        First = First * 10 - 1;
                        ui->lcdNumber->display(First);
                    }

            break;


            default:
                if (First >= 0)
                    {
                        First = First + 1 * pow(10,-DT);
                        DT ++;
                        ui->lcdNumber->display(First);
                    }
                else
                    {
                        First = First - 1 * pow(10,-DT);
                        DT ++;
                        ui->lcdNumber->display(First);
                    }

        }

    if (FS == 0) Second = First;
}


void MainWindow::on_pushButton_2_clicked()
{
    if (TG == 1) TG = First = 0;

    switch (DT)
        {
            case 0:
                if (FN == 0)
                    {
                        First = 2;
                        FN ++;
                        ui->lcdNumber->display(First);
                    }
                else if (First >= 0)
                    {
                        First = First * 10 + 2;
                        ui->lcdNumber->display(First);
                    }
                else
                    {
                        First = First * 10 - 2;
                        ui->lcdNumber->display(First);
                    }

            break;


            default:
                if (First >= 0)
                    {
                        First = First + 2 * pow(10,-DT);
                        DT ++;
                        ui->lcdNumber->display(First);
                    }
                else
                    {
                        First = First - 2 * pow(10,-DT);
                        DT ++;
                        ui->lcdNumber->display(First);
                    }

        }

    if (FS == 0) Second = First;
}


void MainWindow::on_pushButton_3_clicked()
{
    if (TG == 1) TG = First = 0;

    switch (DT)
        {
            case 0:
                if (FN == 0)
                    {
                        First = 3;
                        FN ++;
                        ui->lcdNumber->display(First);
                    }
                else if (First >= 0)
                    {
                        First = First * 10 + 3;
                        ui->lcdNumber->display(First);
                    }
                else
                    {
                        First = First * 10 - 3;
                        ui->lcdNumber->display(First);
                    }

            break;


            default:
                if (First >= 0)
                    {
                        First = First + 3 * pow(10,-DT);
                        DT ++;
                        ui->lcdNumber->display(First);
                    }
                else
                    {
                        First = First - 3 * pow(10,-DT);
                        DT ++;
                        ui->lcdNumber->display(First);
                    }

        }

    if (FS == 0) Second = First;
}


void MainWindow::on_pushButton_4_clicked()
{
    if (TG == 1) TG = First = 0;

    switch (DT)
        {
            case 0:
                if (FN == 0)
                    {
                        First = 4;
                        FN ++;
                        ui->lcdNumber->display(First);
                    }
                else if (First >= 0)
                    {
                        First = First * 10 + 4;
                        ui->lcdNumber->display(First);
                    }
                else
                    {
                        First = First * 10 - 4;
                        ui->lcdNumber->display(First);
                    }

            break;


            default:
                if (First >= 0)
                    {
                        First = First + 4 * pow(10,-DT);
                        DT ++;
                        ui->lcdNumber->display(First);
                    }
                else
                    {
                        First = First - 4 * pow(10,-DT);
                        DT ++;
                        ui->lcdNumber->display(First);
                    }

        }

    if (FS == 0) Second = First;
}


void MainWindow::on_pushButton_5_clicked()
{
    if (TG == 1) TG = First = 0;

    switch (DT)
        {
            case 0:
                if (FN == 0)
                    {
                        First = 5;
                        FN ++;
                        ui->lcdNumber->display(First);
                    }
                else if (First >= 0)
                    {
                        First = First * 10 + 5;
                        ui->lcdNumber->display(First);
                    }
                else
                    {
                        First = First * 10 - 5;
                        ui->lcdNumber->display(First);
                    }

            break;


            default:
                if (First >= 0)
                    {
                        First = First + 5 * pow(10,-DT);
                        DT ++;
                        ui->lcdNumber->display(First);
                    }
                else
                    {
                        First = First - 5 * pow(10,-DT);
                        DT ++;
                        ui->lcdNumber->display(First);
                    }

        }

    if (FS == 0) Second = First;
}


void MainWindow::on_pushButton_6_clicked()
{
    if (TG == 1) TG = First = 0;

    switch (DT)
        {
            case 0:
                if (FN == 0)
                    {
                        First = 6;
                        FN ++;
                        ui->lcdNumber->display(First);
                    }
                else if (First >= 0)
                    {
                        First = First * 10 + 6;
                        ui->lcdNumber->display(First);
                    }
                else
                    {
                        First = First * 10 - 6;
                        ui->lcdNumber->display(First);
                    }

            break;


            default:
                if (First >= 0)
                    {
                        First = First + 6 * pow(10,-DT);
                        DT ++;
                        ui->lcdNumber->display(First);
                    }
                else
                    {
                        First = First - 6 * pow(10,-DT);
                        DT ++;
                        ui->lcdNumber->display(First);
                    }

        }

    if (FS == 0) Second = First;
}


void MainWindow::on_pushButton_7_clicked()
{
    if (TG == 1) TG = First = 0;

    switch (DT)
        {
            case 0:
                if (FN == 0)
                    {
                        First = 7;
                        FN ++;
                        ui->lcdNumber->display(First);
                    }
                else if (First >= 0)
                    {
                        First = First * 10 + 7;
                        ui->lcdNumber->display(First);
                    }
                else
                    {
                        First = First * 10 - 7;
                        ui->lcdNumber->display(First);
                    }

            break;


            default:
                if (First >= 0)
                    {
                        First = First + 7 * pow(10,-DT);
                        DT ++;
                        ui->lcdNumber->display(First);
                    }
                else
                    {
                        First = First - 7 * pow(10,-DT);
                        DT ++;
                        ui->lcdNumber->display(First);
                    }

        }

    if (FS == 0) Second = First;
}


void MainWindow::on_pushButton_8_clicked()
{
    if (TG == 1) TG = First = 0;

    switch (DT)
        {
            case 0:
                if (FN == 0)
                    {
                        First = 8;
                        FN ++;
                        ui->lcdNumber->display(First);
                    }
                else if (First >= 0)
                    {
                        First = First * 10 + 8;
                        ui->lcdNumber->display(First);
                    }
                else
                    {
                        First = First * 10 - 8;
                        ui->lcdNumber->display(First);
                    }

            break;


            default:
                if (First >= 0)
                    {
                        First = First + 8 * pow(10,-DT);
                        DT ++;
                        ui->lcdNumber->display(First);
                    }
                else
                    {
                        First = First - 8 * pow(10,-DT);
                        DT ++;
                        ui->lcdNumber->display(First);
                    }

        }

    if (FS == 0) Second = First;
}


void MainWindow::on_pushButton_9_clicked()
{
    if (TG == 1) TG = First = 0;

    switch (DT)
        {
            case 0:
                if (FN == 0)
                    {
                        First = 9;
                        FN ++;
                        ui->lcdNumber->display(First);
                    }
                else if (First >= 0)
                    {
                        First = First * 10 + 9;
                        ui->lcdNumber->display(First);
                    }
                else
                    {
                        First = First * 10 - 9;
                        ui->lcdNumber->display(First);
                    }

            break;


            default:
                if (First >= 0)
                    {
                        First = First + 9 * pow(10,-DT);
                        DT ++;
                        ui->lcdNumber->display(First);
                    }
                else
                    {
                        First = First - 9 * pow(10,-DT);
                        DT ++;
                        ui->lcdNumber->display(First);
                    }

        }

    if (FS == 0) Second = First;
}


void MainWindow::on_pushButton_10_clicked()
{
    if (TG == 1) TG = First = 0;

    switch(DT)
        {
            case 0:
                if (FN == 0)
                    {
                        First = 0;
                        ui->lcdNumber->display(First);
                    }
                else
                    {
                        First = First * 10;
                        ui->lcdNumber->display(First);
                    }
            break;

            default:
                DT ++;
                ui->lcdNumber->display(First);
        }

    if (FS == 0) Second = First;
}


void MainWindow::on_pushButton_C_clicked()
{
    FN = 0;
    TG = 0;
    DT = 0;
    First = 0;
    ui->lcdNumber->display(First);
}


void MainWindow::on_pushButton_AC_clicked()
{
    FN = 0;
    FS = 0;
    MO = 0;
    MO_2 =0;
    TG = 0;
    DT = 0;
    First = 0;
    Second = 0;
    Result = 0;
    ui->lcdNumber->display(First);
}


void MainWindow::on_pushButton_OFF_clicked()
{
    MainWindow::close();
}


void MainWindow::on_pushButton_Plus_or_Minus_clicked()
{
    First = First * (-1);
    ui->lcdNumber->display(First);
    if (FS == 0) Second = First;
}


void MainWindow::on_pushButton_Dot_clicked()
{
    if (DT == 0 ) DT = 1;
}


void MainWindow::on_pushButton_Sum_clicked()
{
    if (MO_2 > 0)
        {
            MO_2 = 0;
            computation();
        }
    else if (FS == 0)
        {
            Result += Second;
        }
    else
        {
            Result += First;
        }

    First = 0;
    ui->lcdNumber->display(First);
    FS = 1;
    DT = 0;
    MO = MO_2 = 1;
}


void MainWindow::on_pushButton_Difference_clicked()
{
    if (MO_2 > 0)
        {
            MO_2 = 0;
            computation();
        }
    else if (FS == 0)
        {
            Result += Second;
        }
    else
        {
            Result -= First;
        }

    First = 0;
    ui->lcdNumber->display(First);
    FS = 1;
    DT = 0;
    MO = MO_2 = 2;
}


void MainWindow::on_pushButton_Multiplication_clicked()
{
    if (MO_2 > 0)
        {
            MO_2 = 0;
            computation();
        }
    else if (FS == 0)
        {
            Result += Second;
        }
    else
        {
            Result *= First;
        }

    First = 0;
    ui->lcdNumber->display(First);
    FS = 1;
    DT = 0;
    MO = MO_2 = 3;
}


void MainWindow::on_pushButton_Division_clicked()
{
    if (MO_2 > 0)
        {
            MO_2 = 0;
            computation();
            First = 0;
            ui->lcdNumber->display(First);
            FS = 1;
            DT = 0;
            MO = MO_2 = 4;
        }
    else if (FS == 0)
        {
            Result += Second;
            First = 0;
            ui->lcdNumber->display(First);
            FS = 1;
            DT = 0;
            MO = MO_2 = 4;
        }
    else if (First != 0)
        {
            Result /= First;
            First = 0;
            ui->lcdNumber->display(First);
            FS = 1;
            DT = 0;
            MO = MO_2 = 4;
        }
    else
        {
            Error window;
            window.setModal(true);
            window.exec();

            FN = 0;
            FS = 0;
            MO = 0;
            MO_2 =0;
            TG = 0;
            DT = 0;
            First = 0;
            Second = 0;
            Result = 0;
        }

}


void MainWindow::on_pushButton_Square_clicked()
{
    if (FS == 0)
        {
            Result += Second;
        }
    else
        {
            Result = pow(Result,First);
        }

    First = 0;
    ui->lcdNumber->display(First);
    FS = 1;
    DT = 0;
    MO = 5;
}


void MainWindow::on_pushButton_Sqrt_clicked()
{
    if (First >= 0)
        {
            First = sqrt(First);
            ui->lcdNumber->display(First);
            if (FS == 0) Second = First;
            TG = 1;
        }
    else
        {
            Error window;
            window.setModal(true);
            window.exec();

            FN = 0;
            FS = 0;
            MO = 0;
            MO_2 =0;
            TG = 0;
            DT = 0;
            First = 0;
            Second = 0;
            Result = 0;
        }
}


void MainWindow::on_pushButton_Sin_clicked()
{
    if (First > 360)
        {
            while (First > 360)
                {
                    First -= 360;
                }
        }

    if (First == 0 || First == 180 || First == 360)
        {
            First = 0;
        }
    else
        {
            First = sin(First * pi / 180);
        }

    ui->lcdNumber->display(First);
    if (FS == 0) Second = First;
    TG = 1;
}


void MainWindow::on_pushButton_Cos_clicked()
{
    if (First > 360)
        {
            while (First > 360)
                {
                    First -= 360;
                }
        }

    if (First == 90 || First == 270)                                //1.55334 89     1.5708 90   1.58825 91
        {                                                          //4.69494 269    4.71239 270     4.72984 271
            First = 0;
        }
    else
        {
            First = cos(First * pi / 180);
        }

    ui->lcdNumber->display(First);
    if (FS == 0) Second = First;
    TG = 1;
}


void MainWindow::on_pushButton_Tg_clicked()
{
    if (First > 360)
        {
            while (First > 360)
                {
                    First -= 360;
                }
        }

    if (First == 90 || First == 270)
        {
            Error window;
            window.setModal(true);
            window.exec();

            FN = 0;
            FS = 0;
            MO = 0;
            MO_2 =0;
            TG = 0;
            DT = 0;
            First = 0;
            Second = 0;
            Result = 0;
        }
    else if (First == 0 || First == 180 || First == 360)
        {
            First = 0;
        }
    else
        {
            First = tan(First * pi / 180);
        }

    ui->lcdNumber->display(First);
    if (FS == 0) Second = First;
    TG = 1;
}


void MainWindow::on_pushButton_Ctg_clicked()
{
    if (First > 360)
        {
            while (First > 360)
                {
                    First -= 360;
                }
        }

    if (First == 0 || First == 180 || First == 360)
        {
            Error window;
            window.setModal(true);
            window.exec();

            FN = 0;
            FS = 0;
            MO = 0;
            MO_2 =0;
            TG = 0;
            DT = 0;
            First = 0;
            Second = 0;
            Result = 0;
        }
    else if (First == 90 || First == 270)
        {
            First = 0;
        }
    else
        {
            First = 1 / tan(First * pi / 180);
        }

    ui->lcdNumber->display(First);
    if (FS == 0) Second = First;
    TG = 1;
}


void MainWindow::on_pushButton_Result_clicked()
{
    MO_2 = 0;
    computation();
    ui->lcdNumber->display(Result);
    MO = 0;
}


void MainWindow::computation()
{
    switch(MO)
        {
            case 1: on_pushButton_Sum_clicked(); break;

            case 2: on_pushButton_Difference_clicked(); break;

            case 3: on_pushButton_Multiplication_clicked(); break;

            case 4: on_pushButton_Division_clicked(); break;

            case 5: on_pushButton_Square_clicked(); break;
        }
}

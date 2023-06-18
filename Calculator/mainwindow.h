
#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#define SUMA 0
#define RESTA 1
#define DIVISION 2
#define MULTIPLICACION 3



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
    void on_num1_clicked();
    void on_num2_clicked();
    void on_cero_clicked();

    void on_num3_clicked();

    void on_suma_clicked();

    void on_num4_clicked();

    void on_punto_clicked();

    void on_num5_clicked();

    void on_num6_clicked();

    void on_num7_clicked();

    void on_num8_clicked();

    void on_num9_clicked();

    void on_resta_clicked();

    void on_multi_clicked();

    void on_division_clicked();

    void on_igual_clicked();

    void on_borrar_clicked();

private:

    bool esperandoOperando2;
    float operando1;
    float operando2;
    int operacion;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H

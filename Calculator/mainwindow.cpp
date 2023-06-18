
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    esperandoOperando2 = false;

}

MainWindow::~MainWindow()
{

    delete ui;
}


//NUMEROS////////////////////////////////////

void MainWindow::on_cero_clicked()
{
    QString num0;
    ui->display->moveCursor(QTextCursor::End);
    num0= ui->cero->text();
    if(esperandoOperando2 == true) {

        ui->display->clear();

        esperandoOperando2 = false;

    }
    ui->display->insertPlainText(num0);
}



void MainWindow::on_num1_clicked()
{
    QString numero;
    ui->display->moveCursor(QTextCursor::End);
    numero = ui->num1->text();
    if(esperandoOperando2 == true) {

        ui->display->clear();

        esperandoOperando2 = false;

    }

    ui->display->insertPlainText(numero);
}



void MainWindow::on_num2_clicked()
{
    QString num2;
    ui->display->moveCursor(QTextCursor::End);
    num2 = ui->num2->text();
    if(esperandoOperando2 == true) {

        ui->display->clear();

        esperandoOperando2 = false;
    }
    ui->display->insertPlainText(num2);

}

void MainWindow::on_num3_clicked()
{
    QString num3;
    ui->display->moveCursor(QTextCursor::End);
    num3 = ui->num3->text();
    if(esperandoOperando2 == true) {

        ui->display->clear();

        esperandoOperando2 = false;
    }

    ui->display->insertPlainText(num3);
}

void MainWindow::on_num4_clicked()
{
    QString num4;
    ui->display->moveCursor(QTextCursor::End);
    num4 = ui->num4->text();
    if(esperandoOperando2 == true) {

        ui->display->clear();

        esperandoOperando2 = false;
    }

    ui->display->insertPlainText(num4);
}


void MainWindow::on_num5_clicked()
{
    QString num5;
    ui->display->moveCursor(QTextCursor::End);
    num5 = ui->num5->text();
    if(esperandoOperando2 == true) {

        ui->display->clear();

        esperandoOperando2 = false;
    }

    ui->display->insertPlainText(num5);
}


void MainWindow::on_num6_clicked()
{
    QString num6;
    ui->display->moveCursor(QTextCursor::End);
    num6 = ui->num6->text();
    if(esperandoOperando2 == true) {

        ui->display->clear();

        esperandoOperando2 = false;
    }

    ui->display->insertPlainText(num6);
}


void MainWindow::on_num7_clicked()
{
    QString num7;
    ui->display->moveCursor(QTextCursor::End);
    num7 = ui->num7->text();
    if(esperandoOperando2 == true) {

        ui->display->clear();

        esperandoOperando2 = false;
    }

    ui->display->insertPlainText(num7);
}


void MainWindow::on_num8_clicked()
{
    QString num8;
    ui->display->moveCursor(QTextCursor::End);
    num8 = ui->num8->text();
    if(esperandoOperando2 == true) {

        ui->display->clear();

        esperandoOperando2 = false;
    }

    ui->display->insertPlainText(num8);
}


void MainWindow::on_num9_clicked()
{
    QString num9;
    ui->display->moveCursor(QTextCursor::End);
    num9 = ui->num9->text();
    if(esperandoOperando2 == true) {

        ui->display->clear();

        esperandoOperando2 = false;
    }

    ui->display->insertPlainText(num9);
}

void MainWindow::on_punto_clicked()
{
    QString punto;
    ui->display->moveCursor(QTextCursor::End);
    punto = ui->punto->text();
    ui->display->insertPlainText(punto);
}

//OPERACIONES////////////////////////////////

void MainWindow::on_suma_clicked()
{
    QString simboloSuma;
    QString suma;
    suma = ui->display->toPlainText();
    operando1 = suma.toFloat();
    simboloSuma = ui->suma->text();
    ui->label->setText(suma + simboloSuma);
    esperandoOperando2 = true;

    operacion = SUMA;

}


void MainWindow::on_resta_clicked()
{
    QString simboloResta;
    QString resta;

    resta = ui->display->toPlainText();
    operando1 = resta.toFloat();
    simboloResta = ui->resta->text();
    ui->label->setText(resta + simboloResta);
    esperandoOperando2 = true;


    operacion = RESTA;

}


void MainWindow::on_multi_clicked()
{
    QString simboloMulti;
    QString multi;
    multi = ui->display->toPlainText();
    operando1 = multi.toFloat();
    simboloMulti = ui->multi->text();
    ui->label->setText(multi + simboloMulti);
    esperandoOperando2 = true;

    operacion = MULTIPLICACION;



}


void MainWindow::on_division_clicked()
{
    QString simboloDiv;
    QString div;
    div = ui->display->toPlainText();
    operando1 = div.toFloat();
    simboloDiv = ui->division->text();
    ui->label->setText(div + simboloDiv);
    esperandoOperando2 = true;


    operacion = DIVISION;

}

//RESULTADOS////////////////////////////////////////////////////////////////


void MainWindow::on_igual_clicked()
{



//BORRAR TEXTO DEL LABEL////////////////////////////////////////////////////
    ui->label->clear();
///////////////////////////////////////////////////////////////////////////


    QString resultado;
    bool divisionEntreCero = false;

    operando2 = ui->display->toPlainText().toFloat();

    qDebug() << operando1;
    qDebug() << operando2;
    switch (operacion) {
    case SUMA:

        resultado = QString::number(operando1+operando2);
        break;
    case RESTA:
        resultado = QString::number(operando1-operando2);
        break;
    case DIVISION:
        resultado = QString::number(operando1/operando2);
        if(operando2 == 0) {
            divisionEntreCero = true;
        }
        break;
    case MULTIPLICACION:
        resultado = QString::number(operando1*operando2);
        break;
    default:
        break;
    }
    if(divisionEntreCero == true){
         ui->display->setText("No se puede dividir entre cero");
    }else{
         ui->display->setText(resultado);
    }


}

///BOTON BORRAR/////////////////////////////////////////////////////


void MainWindow::on_borrar_clicked()
{
    QString borrar;
    borrar = ui->borrar->text();
    ui->display->setText("");
    ui->label->clear();

}


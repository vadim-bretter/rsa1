#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "BigIntegerLibrary.hh"
#include "BigIntegerUtils.hh"
#include <string>
#include <fstream>
#include <QTime>
#include <QFile>
#include <QFileDialog>
#include <QDebug>
#include <QLine>

using namespace std;

void MainWindow::openfil1()
{
    QString str = QFileDialog::getOpenFileName( this, QString::fromLocal8Bit( "Выбрать исходный файл" ) );
   // if ( !str.isEmpty() )
    {
        ui->lineopen->setText(str);

   }
        QFile FN(str);
        FN.open(QIODevice::ReadOnly);
    qint64 L;
    L = FN.size();
    QByteArray m;
    m = FN.readAll();
    ui->indan->setText(m);
}

void MainWindow::openfil2()
{
    QString str = QFileDialog::getSaveFileName( this, QString::fromLocal8Bit( "Выбрать результирующий файл" ) );
   // if ( !str.isEmpty() )
    {
        ui->linesave->setText(str);
    }
}

void MainWindow::openkey2()
{
    QString str = QFileDialog::getOpenFileName( this, QString::fromLocal8Bit( "Выбрать исходный файл" ) );
   // if ( !str.isEmpty() )
    {
        ui->zakkey->setText(str);

   }
    QFile FN(str);
    FN.open(QIODevice::ReadOnly);
qint64 L;
L = FN.size();
QByteArray d;
d = FN.readAll();
ui->lineEdit_2->setText(d);
}
void MainWindow::saven()
{
    QString str = QFileDialog::getOpenFileName( this, QString::fromLocal8Bit( "Выбрать исходный файл" ) );
    //if ( !str.isEmpty() )
    {
        ui->linen->setText(str);
   }
    QFile FN(str);
    FN.open(QIODevice::ReadOnly);
qint64 L;
L = FN.size();
QByteArray B;
B = FN.readAll();
ui->lineEdit->setText(B);
}

void MainWindow::display()
{
    ui->openbut->setVisible( true );
    ui->lineopen->setVisible( true );
}
void MainWindow::Start()
{



    string str;

    // используемые переменные
    BigInteger   nB, meA, dB, mB, n;


    // **************************************************************************




    // публикуем n и e


    //  выбираем сообщение m
    meA = stringToBigInteger( ui->indan->toPlainText().toStdString()  );
    dB = stringToBigInteger(ui->lineEdit_2->text().toStdString()  );
    nB = stringToBigInteger( ui->lineEdit->text().toStdString()  );
    // расшифровывем сообщение
    n = nB.getMagnitude();
    mB = modexp( meA, dB.getMagnitude(), n.getMagnitude() );
    qDebug() << QString::fromStdString(bigIntegerToString(meA));
    qDebug() << QString::fromStdString(bigIntegerToString(dB));
    qDebug() << QString::fromStdString(bigIntegerToString(n));
    qDebug() << QString::fromStdString(bigIntegerToString(mB));
    QFile FN(ui->linesave->text());
    FN.open(QIODevice::WriteOnly);
QByteArray M = bigIntegerToString(mB).c_str();
FN.write(M);
    // **************************************************************************

    // вывод результата на экран


    ui->lineEdit_meAlisa->setText(bigIntegerToString(mB).c_str() );
}



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    display();
    connect(ui->pushn, SIGNAL( clicked() ), SLOT( saven() ));

    connect(ui->key2, SIGNAL( clicked() ), SLOT( openkey2() ));
    connect(ui->openbut, SIGNAL( clicked() ), SLOT( openfil1() ));
    connect(ui->savebut, SIGNAL( clicked() ), SLOT( openfil2() ));
    connect(ui->pushButton_Start, SIGNAL( clicked() ), SLOT( Start() ));


}

MainWindow::~MainWindow()
{
    delete ui;
}

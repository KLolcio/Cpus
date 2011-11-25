#include "app.h"
#include "ui_app.h"

App::App(QWidget *parent):
    QMainWindow(parent), LuaData(), ui( new Ui::App )
{
    ui->setupUi(this); //wczytanie formularza
    CreateToolBar(); //Stworzenie toolbara

    m_printer =  new Renderer();
    ui-> gridMain ->addWidget( m_printer );

    ui->tableWidget->setColumnCount(3);


    int row = ui->tableWidget->rowCount();
    ui->tableWidget->insertRow(row);

    QTableWidgetItem *item0 = new QTableWidgetItem("asasas1");
    item0->setFlags( Qt::ItemIsSelectable|Qt::ItemIsEnabled );
    ui->tableWidget->setItem(row, 0, item0);
    ui->tableWidget->setItem(row, 1, item0);


     AdditionalAppSettings();

  //  ui->tableWidget->setColumnWidth(0, ui->tableWidget->width() );
  //ui->tableWidget->setRootIndex();

 /*
      QString tmp2;
      int slowo=0;

      tmp2=("lolcio");
      QTableWidgetItem *newItem = new QTableWidgetItem( tmp2 );
      newItem->setFlags(Qt::ItemIsSelectable|Qt::ItemIsEnabled);
      ui->tableWidget->setItem(2, 1, newItem);
*/

   ui->tableWidget->setShowGrid(true);

   //QTableWidgetItem *newItem = new QTableWidgetItem("asas");
   //ui-> tableWidget->setItem(row, column, newItem);

}
void App::Load(){
    LoadGlobal();

}

void App::AdditionalAppSettings(){

    //Szerokosci kolumn przchowujacych argumenty
    ui->tableWidget->setColumnWidth(2,50);
    ui->tableWidget->setColumnWidth(1,50);

    //szerokosc kolumny z nazwami komend
    ui->tableWidget->setColumnWidth(0,100);


}

App::~App()
{
    delete ui;
}

#include "app.h"
#include "ui_app.h"

App::App(QWidget *parent):
   QMainWindow(parent), ui( new Ui::App )
{
    ui->setupUi(this); //wczytanie formularza
    CreateToolBar(); //Stworzenie toolbara


    m_printer =  new PrintSurf();
    ui-> gridMain ->addWidget( m_printer );

}

App::~App()
{
    delete ui;
}

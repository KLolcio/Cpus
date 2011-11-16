#include "app.h"
#include "ui_app.h"

void App::CreateToolBar(){

    /** Metoda tworzy toolbar aplikacji,
        wskazniki QAction ktore przechowuja utworzone zdarzenia
        sa odziedziczone po klasie ToolBar
        */



    //Ikona zamykajaca aplikacje
    m_quit = new QAction( QIcon(":/data/pic/exit.png"),"otwrz", this );
    ui->mainToolBar->addAction(m_quit);





    //           --== GNIAZDA ==--
    connect( m_quit,SIGNAL( triggered() ),this,SLOT( close()) );



}

#include "app.h"
#include "ui_app.h"

void App::CreateToolBar(){

    /** Metoda tworzy toolbar aplikacji,
        wskazniki QAction ktore przechowuja utworzone zdarzenia
        sa odziedziczone po klasie ToolBar
        */


    // Przycisk uruchamiajacy kod programu
    m_start = new QAction( QIcon(":/data/pic/run.png"),"Run", this );
    ui->mainToolBar->addAction(m_start);

    //Wstrzymanie pracy programu
    m_pause = new QAction( QIcon(":/data/pic/pause.png"),"Pause", this );
    ui->mainToolBar->addAction( m_pause );

    //Zatrzymanie wykonywania programu
    m_stop = new QAction( QIcon(":/data/pic/stop.png"),"Stop", this );
    ui->mainToolBar->addAction( m_stop );

    ui->mainToolBar->addSeparator();

    //Pole na wybranie polecenia
    m_command =  new QComboBox();
    m_command->setMinimumWidth(200);

    m_commands.push_back("add");

    foreach(const QString& str, m_commands ){
        m_command->addItem( str );
    }


    /// Inicjacja ze skryptu lua !!!



    ui->mainToolBar->addWidget(m_command);

    //Pole na wpisanie parametru 1 polecenia
    m_param_1 =  new QLineEdit();
    m_param_1->setMaximumWidth(100);
    ui->mainToolBar->addWidget( m_param_1 );

    //Pole na drugi argument
    m_param_2 =  new QLineEdit();
    m_param_2->setMaximumWidth(100);
    ui->mainToolBar->addWidget( m_param_2 );

    //Dodanie nowego polecenia
    m_add = new QAction( QIcon(":/data/pic/add.png"),"Add", this );
    ui->mainToolBar->addAction( m_add );

    //Usuniecie jednej lini program
    m_remove = new QAction( QIcon(":/data/pic/remove.png"),"Remove current", this );
    ui->mainToolBar->addAction( m_remove );

    ui->mainToolBar->addSeparator();

    //Informacje na temat projektu
    m_about = new QAction( QIcon(":/data/pic/about.png"),"About", this );
    ui->mainToolBar->addAction( m_about );

    //Pomoc do programu
    m_help = new QAction( QIcon(":/data/pic/help.png"),"Help", this );
    ui->mainToolBar->addAction( m_help );

    //Ikona zamykajaca aplikacje
    m_quit = new QAction( QIcon(":/data/pic/quit.png"),"Exit", this );
    ui->mainToolBar->addAction(m_quit);




    //           --== GNIAZDA ==--
    connect( m_quit,SIGNAL( triggered() ),this,SLOT( close()) );

}

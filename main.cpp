/**         ---=== Cpus- symulator procesora ===---
*
*
*/

#include "include/Heders.h"
#include <QtGui/QApplication>
#include "app.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    /** Splash screen
      * Utworzenie obiektu QSplashScreen, ktory bedzie wyswietlony podczas ladowania
      * aplikacji. Po zaladowaniu wszystkich informacji z plikow zewnetrznych zostaje zwolniona pamiec i pokazane
      * glowne okno aplikacji.
      */
    QPixmap map= (QPixmap)":/data/pic/splash.jpg";
    QSplashScreen* splash = new QSplashScreen( map );
    splash->show();

    App* application = new App();
    application->Load(); //Wczytanie danych z plikow zewnetrznych

    sleep( 0 ); //opoznienie programu aby mozna bylo zobaczyc splash
    splash->hide();

    application->show();

    delete splash;
    return a.exec();

}

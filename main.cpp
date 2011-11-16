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
    QSplashScreen* splash = new QSplashScreen( (QPixmap)":/data/pic/splash.jpg" );

    App* application = new App();

    splash->show();
    sleep(1); //opoznienie programu aby mozna bylo zobaczyc splash
    splash->hide();
    delete splash;

    application->show();

    return a.exec();
}

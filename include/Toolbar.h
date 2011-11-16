/** @author Lolcio
  * Klasa bedaca klasa baza dla App. Jej zadaniem jest przechowywac akcje toolbara,
  * tak zeby potem w klasie pochodnej nie trzeba bylo dodawac duzej ilosci wskaznikow,
  * mogacych pogorszyc czytelnosc kodu.
  */

#ifndef TOOLBAR_H
#define TOOLBAR_H
#include "Heders.h"

class ToolBar{
protected:

        // Wskazniki akcji toolbara
        QAction* m_quit;
        QAction* m_start;
        QAction* m_pause;
        QAction* m_stop;

        /* Metoda zostaje zaimplementowana  w klasie pochodnej App
           Tworzy akcje dla wskaznikow QAction, i dodaje je do toolbara */
        virtual void CreateToolBar(void)=0;

};

#endif // TOOLBAR_H

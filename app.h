/** @author Lolcio
  * Klasa glowna aplikacji.
  */

#ifndef APP_H
#define APP_H

#include <QMainWindow>
#include "include/Toolbar.h"
#include "include/PrintSurf.h"

namespace Ui {
    class App;  
}

class App : public QMainWindow , private ToolBar
{
    Q_OBJECT

public:
    explicit App(QWidget *parent = 0);
    ~App();
private:
    void CreateToolBar(void);

private:
    Ui::App *ui;
    PrintSurf* m_printer;
};

#endif // APP_H

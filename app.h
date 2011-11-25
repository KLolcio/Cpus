/** @author Lolcio
  * Klasa glowna aplikacji.
  */

#ifndef APP_H
#define APP_H

#include <QMainWindow>
#include "include/Toolbar.h"
#include "include/Renderer.h"
#include "include/LuaData.h"

namespace Ui {
    class App;
}

class App : public QMainWindow , private ToolBar,public LuaData
{
    Q_OBJECT

public:
    explicit App(QWidget *parent = 0);
    void Load();

    ~App();
private:
    void CreateToolBar(void);
    void AdditionalAppSettings();

private:
    Ui::App *ui;
    Renderer* m_printer; // Widget rysujacy
    QVector<QString> m_commands;

};

#endif // APP_H

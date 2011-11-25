/** @author Lolcio
  * Plik naglowkowy dolaczajacy wszystkie biblioteki zewnetrzne potrzebne w projekcie.
  * Pozwala np. nie pisac w kazdej klasie: #include <string>.
  * Plik NIE powinien dolaczac plikow naglowkowych klas projektu!
  */

#ifndef HEDERS_H
#define HEDERS_H

#include <QSplashScreen>
#include <QGLWidget>
#include <QLineEdit>
#include <QComboBox>
#include <QVector>


//Naglowki dla maszyny wirtualnej LUA
#include <luabind/lua_include.hpp>
#include <luabind/luabind.hpp>

extern "C" {
  #include <lua5.1/lualib.h>
}




#endif // HEDERS_H

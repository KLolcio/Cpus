#include "include/LuaData.h"

LuaData::LuaData(){


}

void LuaData::LoadGlobal() throw( QString ){

    /** Metoda wczytuje zmienne globalne z pliku config.lua, tak aby potem w klasie pochodniej
      * app mozna bylo korzystac z zmiennych ustawianych w pliku. Umozliwia to szybsza poprawe bledow ( bez kompilacji)
      * oraz pozwala uniknac zmiennych globalnych
      * @throw W razie bledu ladowania pliku wyrzuca informacje tekstowo o bledzie
      */

    //Włączmy maszynę lua
      lua_State* lua = luaL_newstate();
      luaL_openlibs( lua );
      luabind::open( lua ) ;

    // Wykonujemy plik config_1.lua. Od razu sprawdzamy czy się to
    // udało. Jeżeli nie to wypisujemy błąd
        if (luaL_dofile(lua, "config.lua") != 0) {
            std::cout << lua_tostring(lua, -1) << "\n";
            lua_pop(lua, 1);

            lua_close(lua); //proba zamkniecia pliku

            throw( (QString)"[Critical] Blad podczas ladowania pliku config.lua" );
        }

 // std::string  m1_appVersion = (qobject_cast)luabind::globals(lua)[ "APPLICATION_VERSION" ];


    // Odczytujemy zmienną z konfiguracji i wyświetlamy ją na ekranie
    std::cout<< luabind::globals(lua)["APPLICATION_NAME"] <<"\n"<< m_appVersion.toStdString() <<"\n";


        // std::string str = luabind::object_cast<std::string>( luabind::globals(lua)["COMMAND_LIST.1"] );

        //std::cout<<"Commands:"<< ( luabind::object_cast<QString> ( luabind::globals(lua)["COMMAND_LIST[1]"] ) ).toStdString();
           /*
           // Odczytujemy zmienną z konfiguracji
           // i zapamiętujemy ją w zmiennej w C++
           int lucky_number = luabind::object_cast<int>(
                              luabind::globals(lua)["APPLICATION_VERSION"]);
    */
           // Wyłączamy maszynę Lua



    lua_close(lua);
}

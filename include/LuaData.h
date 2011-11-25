#ifndef LUADATA_H
#define LUADATA_H
#include "Heders.h"

class LuaData{
protected:
    QString m_appVersion;
    QString m_helloInfo;
    QVector<QString> m_commands;

    LuaData();
    void LoadGlobal() throw( QString );

};

#endif // LUADATA_H

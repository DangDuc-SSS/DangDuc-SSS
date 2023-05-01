#pragma
#include "BaseSingleton.h"
#include <string>
#include <cstdio>
#include <iostream>
#include <cstring>

class Logger:public BaseSingleton<Logger>{
    friend class BaseSingleton;
    Logger();
    Logger(const Logger &log)=delete;
    Logger &operator = (const Logger &log)=delete;
    FILE *m_file;
    std::string m_tag;
    public:
    void writeLog(std::string msg);
    void setTag(std::string tag);
    ~Logger();
};
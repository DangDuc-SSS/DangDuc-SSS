#include "Logger.h"
Logger::Logger(){
    m_file = fopen("data.txt","w");
    if(m_file){
        std::cout << "Open success!" << std::endl;
    }
    else{
        std::cout << "Open fail!" << std::endl;
    }
}
void Logger::setTag(std::string tag){
    m_tag = tag;
}
void Logger::writeLog(std::string msg){
    fprintf(m_file, "[%s] %s\n", m_tag.c_str(), msg.c_str());
    fflush(m_file);
}
Logger::~Logger(){
    ~fclose(m_file);
    std::cout << "file closed." << std::endl;
}
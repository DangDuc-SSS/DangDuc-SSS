#include <iostream>
#include "Logger.h"
#include  <thread>
using namespace std;

int main(){
    thread t1([](){
        cout << "t1 start " << endl;
        Logger &lg= Logger::getInstance();
        lg.setTag("pId:0");
        lg.writeLog("a a a a a a");
    });
    thread t2([](){
        cout << "t2 start " << endl;
        Logger &lg= Logger::getInstance();
        lg.setTag("pId:1");
        lg.writeLog("b b b b b b");
    });
    t1.join();
    t2.join();
    return 0;
}
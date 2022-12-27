#include <stdio.h>
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <windows.h>
#include <mutex>
using namespace std;

int global = 0;

mutex mute;

void update(int time){
    mute.lock();
    Sleep(time);
    global++;
    mute.unlock();

}

int main(){
    thread first(update, 500);
    thread second(update, 1000);

    first.join();
    second.join();

    cout << global;

    return 0;
}



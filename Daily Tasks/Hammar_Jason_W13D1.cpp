#include <stdio.h>
#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <windows.h>
using namespace std;

void print(int n, string message, int time){
    while(n != 0){
        cout << message << endl;
        //chrono::sleep_for(chrono::milliseconds(0));
        Sleep(time);
        n--;
    }
}

int main(){
    thread first (print, 2, "Hello", 300);
    thread second (print, 5, "FOO", 500);



    first.join();

    second.join();
    return 0;
}



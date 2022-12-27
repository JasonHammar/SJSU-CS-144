#include <stdio.h>
#include <iostream>

using namespace std;

void divide(int a, int b){
    if(b == 0){
        throw "Divide by 0 Exception!";
    }
}

int main(){
    try{
        divide(2, 0);
    }catch(const char* msg){
        cerr << msg << endl;
    }

    return 0;
}

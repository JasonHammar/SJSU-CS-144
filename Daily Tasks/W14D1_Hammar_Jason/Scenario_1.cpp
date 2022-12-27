#include <stdio.h>
#include <iostream>

using namespace std;

int divide(int a, int b){
    if(b == 0){
        throw "Divide by 0 Exception!";
    }else{
        return a / b;
    }
}

int main(){

    divide(2, 0);// This is scenario 1.
    /*
    When throw is called, what ends up happening is the program stops execution and returns an error with exit code 3.
    */
    return 0;
}

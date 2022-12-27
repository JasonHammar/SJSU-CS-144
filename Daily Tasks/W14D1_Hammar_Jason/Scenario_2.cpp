#include <stdio.h>
#include <iostream>

using namespace std;

void except(){
    throw "Exception";
}

int main(){
    try{
        except();
    }catch(const char* msg){
        cerr << msg << endl;
    }

    return 0;
}

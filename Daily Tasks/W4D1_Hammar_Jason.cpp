#include<stdio.h>
#include<iostream>

using namespace std;

class MyClass{
    int level, count;
    public:
    MyClass(int a, int b){
        level = a;
        count = b;
    }
    MyClass(){
        level = 5;
        count = 1;
    }
    public: void printMemberVars(){
        cout << "Level var: " << level << endl;
        cout << "Count var: " << count << endl;
    };
};

void show_this(MyClass myClass){
    myClass.printMemberVars();
}

int main(){
    MyClass myClass(45, 7);
    show_this(myClass);
    return 0;
}

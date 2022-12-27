#include <iostream>
#include <string>

using namespace std;

class Box{
private:
    double length;
    double width;
    string name;
public:
    double getLength(){
        return length;
    }
    void setLength(double l){
        length = l;
    }
    double getWidth(){
        return width;
    }
    void setWidth(double w){
        width = w;
    }
    string showName(){
        return name;
    }



    Box(){
        name = "Box";
    }
};

class Square: public Box{
private:
    string name;
public:
    Square(){
        name = "Square";
    }

    void printName(){
        cout << name << endl;
    }
};

class Rectangle: public Box{
private:
    string name;
public:
    Rectangle(){
        name = "Rectangle";
    }

    void printName(){
        cout << name << endl;
    }
};

int main(){

    Box b;
    b.setLength(23.3);
    b.setWidth(25.5);
    cout << b.showName() << ", " << b.getLength() << ", " << b.getWidth() << endl;

    Box* box;
    Square s;
    Rectangle r;
    s.setLength(4);
    s.setWidth(4);
    r.setWidth(7);
    r.setLength(10);
    cout << s.showName() << endl;
    cout << r.showName() << endl;
    box = &s;
    cout << box->showName() << endl;
    box = &r;
    cout << box->showName() << endl;
    box->printName();
    return 0;
}

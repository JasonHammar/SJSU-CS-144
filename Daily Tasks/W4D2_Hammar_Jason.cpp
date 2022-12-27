#include<iostream>
#include <string>

using namespace std;


class Quiz{
public:
    virtual string set_alarm(int* a, int* b, string ampm) = 0;
    virtual string add_an_hour(string time) = 0;
    Quiz(){

    }
};

class Quiz1: public Quiz{
private:
    int a;
    int b;

public:
    Quiz1(){


    }


    string set_alarm(int* a, int* b, string ampm){
        string str = std::to_string(*a) + ":" + std::to_string(*b) + ampm;
        return str;
    }
    string add_an_hour(string time){
        int a = time[0] - '0';
        a++;
        time.replace(0, 1, to_string(a));

        return time;

    }

};

int main(){
    int i;
    int j;
    int& k = i;
    int& l = j;

    i = 9;
    j = 30;

    Quiz1 qz1;
    Quiz* qz;
    qz = &qz1;
    string str = qz->set_alarm(&k, &l, "am");
    cout << "Alarm set at: " << str << endl;
    str = qz->add_an_hour(str);
    cout << "Adding one hour: " << str << endl;


    return 0;
}

/*class ICircle
{
  public:
    virtual double get_radius() = 0;
    virtual double get_circumference() = 0;
};

class Circle : public ICircle
{
private:
    double r;
    double c;
  public:
    double get_radius()
    {
       return r;
    }
    double get_circumference()
    {
       return c;
    }
    Circle(){
        r = 3.14;
        c = 6.2;
    }
};


int main()
{
    Circle c;
    ICircle* cir;
    cir = &c;
    cout << "Radius: " << cir->get_radius() << endl;
    cout << "Circumference: " << cir->get_circumference() << endl;
    return 0;
}*/



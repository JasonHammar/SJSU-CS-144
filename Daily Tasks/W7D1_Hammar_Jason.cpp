#include <stdio.h>
#include <iostream>

using namespace std;

class Position{
private:
    double position;
    double time;
public:
    double getPosition(){
        return position;
    }
    double getTime(){
        return time;
    }
    Position(double t){

        time = t;
        position = 64 - 16 * ((time - 1) * (time - 1));
    }
    Position operator - (Position const &obj){
        Position pos(0);
        pos.position = position - obj.position;
        pos.time = time - obj.time;
        return pos;
    }
};



int main(){
    Position obj1(4);
    Position obj2(10);
    Position obj3 = obj2 - obj1;
    double avg =  obj3.getPosition() / obj3.getTime();
    cout << "Average: " <<  avg << "m/s" << endl;
    return 0;
}

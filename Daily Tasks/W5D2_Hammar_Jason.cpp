#include <iostream>

using namespace std;

class IStereo{
    public:
        virtual void play(char* song_name) = 0;
        virtual void record(char* song_name) = 0;
        virtual void stop() = 0;
        virtual void pause() = 0;
};

class MyStereo: public IStereo{
    public:
        MyStereo(){

        }
        void play(char* song_name){
            cout << "The stereo is playing the following song: " << song_name << endl;
        }
        void record(char* song_name){
            cout << "The stereo is recording the following song: " << song_name << endl;
        }
        void stop(){
            cout << "The stereo is stopping." << endl;
        }
        void pause(){
            cout << "The stereo is pausing." << endl;
        }

};


int main(){
    cout << "Line 5 Output: " << endl << endl;
    MyStereo* mySter = new MyStereo();
    mySter->play("Singin in the Rain");
    mySter->record("Bad Romance");
    mySter->stop();
    mySter->pause();

    // The line 7 output is printed out twice to show that it works in two different cases.
    IStereo* iSter = mySter;
    cout << endl << "Line 7 Output 1: " << endl << endl;
    iSter->play("Dynamite");
    iSter->record("Moves Like Jagger");
    iSter->stop();
    iSter->pause();

    MyStereo mys;
    IStereo* is = &mys;
    cout << endl << "Line 7 Output 2: " << endl << endl;
    is->play("Boombayah");
    is->record("Party Rock");
    is->stop();
    is->pause();

    return 0;
}

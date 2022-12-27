#include<fstream>
#include <iostream>

using namespace std;
ofstream myfile;
unsigned int globvar;
void set_debug_environment(unsigned int debug_levels, bool file_logging){
    globvar = debug_levels;

    if(file_logging == true){

        myfile.open ("test.log");

         // close should be called later on when the program is done.

    }
}
void debug(std::string message, unsigned int debug_level){

    if(debug_level == PRINT_L0){
        return;
    }else if(globvar & debug_level){
        cout << message << endl;
        if(myfile.is_open()){
            myfile << message << endl;
        }
    }

}
void debug_close(){
    myfile.close();
}

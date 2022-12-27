#include "vowel_stats.h"
#include <iostream>

#include <chrono>

#include <ctime>

#include <thread>

// global variables
int arrA = 0;
int arrE = 0;
int arrI = 0;
int arrO = 0;
int arrU = 0;


// global variables
int vecA = 0;
int vecE = 0;
int vecI = 0;
int vecO = 0;
int vecU = 0;



/*
This method will set all the global variables to 0 in order to accurately count the vowels in the string.
Then, it will check if the vector contains a vowel and
then add 1 to the global variable corresponding to that vowel in the vector.
*/
void VowelStats::get_vector_stats(){
    vecA = 0;
    vecE = 0;
    vecI = 0;
    vecO = 0;
    vecU = 0;

    for(int i = 0; i < vect.size(); i++){
        if(vect.at(i) == 'a'){
            vecA++;
        }else if(vect.at(i) == 'e'){
            vecE++;
        }else if(vect.at(i) == 'i'){
            vecI++;
        }else if(vect.at(i) == 'o'){
            vecO++;
        }else if(vect.at(i) == 'u'){
            vecU++;
        }
    }

}
/*
This method will set all the global variables to 0 in order to accurately count the vowels in the string.
Then, it will check if the array contains a vowel and
then add 1 to the global variable corresponding to that vowel in the array.
*/
void VowelStats::get_array_stats(){
    arrA = 0;
    arrE = 0;
    arrI = 0;
    arrO = 0;
    arrU = 0;

    for(int i = 0; i < length; i++){

        if(arrMem[i] == 'a'){
            arrA++;
        }else if(arrMem[i] == 'e'){
            arrE++;
        }else if(arrMem[i] == 'i'){
            arrI++;
        }else if(arrMem[i] == 'o'){
            arrO++;
        }else if(arrMem[i] == 'u'){
            arrU++;
        }
    }
}
// Displays all of the global variables for each value.
void VowelStats::display_stats(){
    cout << "[Vowel Stats for array]" << endl;
    cout << "a: " << arrA << endl;
    cout << "e: " << arrE << endl;
    cout << "i: " << arrI << endl;
    cout << "o: " << arrO << endl;
    cout << "u: " << arrU << endl;

    cout << "[Vowel Stats for vector]" << endl;
    cout << "a: " << vecA << endl;
    cout << "e: " << vecE << endl;
    cout << "i: " << vecI << endl;
    cout << "o: " << vecO << endl;
    cout << "u: " << vecU << endl;


}



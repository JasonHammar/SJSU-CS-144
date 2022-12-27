#ifndef VOWEL_STATS_H_INCLUDED
#define VOWEL_STATS_H_INCLUDED

#include <vector>
#include <iostream>

#include <chrono>

#include <ctime>

#include <thread>
#include <cstring>

using namespace std;
class VowelStats{
vector<char> vect;// vector for the string.
char* arrMem; // Char pointer for the string, or the array for the characters.
int length = 0;// string length
public:// Declares the methods that are later defined in the vowel_stats source file.
    void get_vector_stats();
    void get_array_stats();
    void display_stats();
    VowelStats(){// Default constructor, sets array and vector to default string
        string def = "aabbccddeeffxxyyzzabcdefghijklmnopqrstuvwxyz";
        length = def.length();
        arrMem = "aabbccddeeffxxyyzzabcdefghijklmnopqrstuvwxyz";
        for(int i = 0; i < def.length(); i++){
            vect.push_back(def[i]);


        }


    }
    VowelStats(string arr){// This constructor sets the vector and array to the string given by the parameter.
        length = arr.length();
        string str_obj(arr);
        arrMem = new char[length];
        for(int i = 0; i < arr.length(); i++){
            vect.push_back(arr[i]);
            arrMem[i] = arr[i];



        }



    }
};


#endif // VOWEL_STATS_H_INCLUDED

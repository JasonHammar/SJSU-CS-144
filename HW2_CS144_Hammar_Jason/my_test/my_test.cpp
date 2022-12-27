#include "vowel_stats.h"
//#include "vowel_stats.cpp"
#include <iostream>

#include <chrono>

#include <ctime>

#include <thread>


int main(){
    // This block will calculate the number of vowels in the vector, and it will calculate the time it takes.
    VowelStats vowel;
    std::chrono::time_point<std::chrono::system_clock> start_time = std::chrono::system_clock::now();
    vowel.get_vector_stats();
    std::chrono::time_point<std::chrono::system_clock> end_time = std::chrono::system_clock::now();
    double vecMilliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count();
    double vecSeconds = vecMilliseconds / 1000.0;

    // This block will calculate the number of vowels in the array, and it will calculate the time it takes.
    start_time = std::chrono::system_clock::now();
    vowel.get_array_stats();
    end_time = std::chrono::system_clock::now();
    double arrMilliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count();
    double arrSeconds = vecMilliseconds / 1000.0;


    vowel.display_stats();// Displays the stats of the array and vector.

    // Block below displays the time.

    cout << "Vector milliseconds: " << vecMilliseconds << endl;

    cout << "Vector seconds: " << vecSeconds << endl;

    cout << "Array milliseconds: " << vecMilliseconds << endl;

    cout << "Array seconds: " << vecSeconds << endl;


    VowelStats vowel2("Today will be a great day and many more to come!");// New VowelStats object with the string inside.

    // This block will calculate the number of vowels in the vector, and it will calculate the time it takes.
    start_time = std::chrono::system_clock::now();
    vowel2.get_vector_stats();
    end_time = std::chrono::system_clock::now();
    vecMilliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count();
    vecSeconds = vecMilliseconds / 1000.0;
    // This block will calculate the number of vowels in the array, and it will calculate the time it takes.
    start_time = std::chrono::system_clock::now();
    vowel2.get_array_stats();
    end_time = std::chrono::system_clock::now();
    arrMilliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count();
    arrSeconds = arrMilliseconds / 1000.0;


    vowel2.display_stats();// Displays the stats.


    // Displays the time for both objects.
    cout << "Vector milliseconds: " << vecMilliseconds << endl;

    cout << "Vector seconds: " << vecSeconds << endl;

    cout << "Array milliseconds: " << vecMilliseconds << endl;

    cout << "Array seconds: " << vecSeconds << endl;

    VowelStats vowel3("Let's get ready to rumbleeeee!!!");// New VowelStats object with the string inside.

    // This block will calculate the number of vowels in the vector, and it will calculate the time it takes.
   start_time = std::chrono::system_clock::now();
    vowel3.get_vector_stats();
    end_time = std::chrono::system_clock::now();
    vecMilliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count();
    vecSeconds = vecMilliseconds / 1000.0;
    // This block will calculate the number of vowels in the array, and it will calculate the time it takes.
    start_time = std::chrono::system_clock::now();
    vowel3.get_array_stats();
    end_time = std::chrono::system_clock::now();
    arrMilliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time).count();
    arrSeconds = vecMilliseconds / 1000.0;

    vowel3.display_stats();// Displays the stats.


    // Displays the time.
    cout << "Vector milliseconds: " << vecMilliseconds << endl;

    cout << "Vector seconds: " << vecSeconds << endl;

    cout << "Array milliseconds: " << vecMilliseconds << endl;

    cout << "Array seconds: " << vecSeconds << endl;

    return 0;
}

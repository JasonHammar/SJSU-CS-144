#include <iostream>
#include <fstream>
#include <vector>
#include "NoodleReview.h"
#include "IORunner.h"

int main(){
    IORunner ir;

    vector <NoodleReview> nr;
    nr = ir.read_from_file("ramen-ratings.csv");
    ir.write_to_file("ramen_ratings.txt", nr);
    //display_noodle_reviews(nr);
    return 0;
}

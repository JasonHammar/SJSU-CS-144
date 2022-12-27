#include <iostream>
#include <fstream>
#include <vector>
#include <stdio.h>
#include <algorithm>
#include "NoodleReview.h"
#include "IORunner.h"
#include "ReviewStats.h"

int main(){
    IORunner ir;

    vector <NoodleReview> nr;
    nr = ir.read_from_file("ramen-ratings.csv");
    ir.write_to_file("ramen_ratings.txt", nr);
    display_noodle_reviews(nr);
    ReviewStats rs;
    vector<string> str;
    vector<string> str2;
    str = rs.get_top_ten_countries(nr);
    str2 = rs.get_top_reviews_over_five(nr);
    ofstream myfile;
    sort( str.begin(), str.end() );
    str.erase( unique( str.begin(), str.end() ), str.end() );
    myfile.open("stats_top_ten.txt");
    for(int i = 0; i < 10; i++){
        myfile << str.at(i) << endl;
    }
    myfile.close();

    myfile.open("stats_high_ratings.txt");
    myfile << "Highest rated brands." << endl;
    myfile << "Expected number: " << str2.size() << endl;
    for(int i = 0; i < str2.size(); i++){
        myfile << str2.at(i) << endl;
    }
    myfile.close();

    return 0;
}

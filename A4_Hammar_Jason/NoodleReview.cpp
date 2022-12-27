#include <iostream>
#include <string>
#include<vector>
#include "NoodleReview.h"
using namespace std;

   int NoodleReview:: get_review_number(){
        return reviewNumber;
    }
    string NoodleReview:: get_brand(){
        return brand;
    }
    string NoodleReview:: get_variety(){
        return variety;
    }
    string NoodleReview:: get_style(){
        return style;
    }
    string NoodleReview:: get_country(){
        return country;
    }
    double NoodleReview:: get_stars(){
        return stars;
    }
    string NoodleReview:: get_top_ten(){
        return topTen;
    }


void display_noodle_reviews(std::vector<NoodleReview> vec_nr){
    for(int i = 0; i < vec_nr.size(); i++){
            cout << vec_nr.at(i).get_review_number() << ", ";
            cout << vec_nr.at(i).get_brand() << ", ";
            cout << vec_nr.at(i).get_variety() << ", ";
            cout << vec_nr.at(i).get_style() << ", ";
            cout << vec_nr.at(i).get_country() << ", ";
            cout << vec_nr.at(i).get_stars() << ", ";
            cout << vec_nr.at(i).get_top_ten() << endl;
        }

}


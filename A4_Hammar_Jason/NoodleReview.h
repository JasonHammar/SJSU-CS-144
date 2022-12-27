#ifndef NOODLEREVIEW_H_INCLUDED
#define NOODLEREVIEW_H_INCLUDED
#include <iostream>
#include <string>
using namespace std;

class NoodleReview{
private:
    int reviewNumber;
    string brand, variety, style, country, topTen;
    double stars;

public:
    int get_review_number();
    string get_brand();
    string get_variety();
    string get_style();
    string get_country();
    double get_stars();
    string get_top_ten();
    NoodleReview(int reviewNumber, string brand, string variety, string style, string country, string topTen, double stars){
        this->reviewNumber = reviewNumber;
        this->brand = brand;
        this->variety = variety;
        this->style = style;
        this->country = country;
        this->stars = stars;
        this->topTen = topTen;
    }

};
void display_noodle_reviews(std::vector<NoodleReview> vec_nr);

#endif // NOODLEREVIEW_H_INCLUDED

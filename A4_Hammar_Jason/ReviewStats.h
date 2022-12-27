#ifndef REVIEWSTATS_H_INCLUDED
#define REVIEWSTATS_H_INCLUDED
#include "NoodleReview.h"

class ReviewStats

{

    public:
        vector<string> get_top_ten_countries(vector<NoodleReview> nr){

            vector<string> str;
            // ofstream myfile;
            // myfile.open("stats_top_ten.txt");
            for(int i = 0; i < nr.size(); i++){
                if(nr.at(i).get_top_ten().size() > 1){
                    str.push_back(nr.at(i).get_country());
                }
            }
            return str;

        } // returns a vector with the top_10 countries based on ratings (repeating country names are okay)

    public:
        vector<string> get_top_reviews_over_five(vector<NoodleReview> nr){

            vector<string> str;
            for(int i = 0; i < nr.size(); i++){
                if(nr.at(i).get_stars() > 5){
                    str.push_back(nr.at(i).get_brand());
                }
            }
            return str;

        } // returns a vector with the noodle brands that have a rating of 4 or more
        ReviewStats(){

        }

};

#endif // REVIEWSTATS_H_INCLUDED

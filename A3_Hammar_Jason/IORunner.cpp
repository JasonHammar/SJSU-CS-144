#include <iostream>
#include <fstream>
#include <vector>
#include "NoodleReview.h"
#include "IORunner.h"

IORunner::IORunner(){
    cout << "FileIO object class has started." << endl;
}

vector<NoodleReview> IORunner::read_from_file(string file_name){
        std::ifstream myfile;
        myfile.open(file_name);
        std::string mystring(",");
        string comma_token(",");
        vector<string> r;
        vector<NoodleReview> rs;

        int count = 0;
        int counter = 0;
        int revId = 0;
        string brand, variety, style, country, topTen;
        double star = 0.0;

        while(getline(myfile, mystring)){
            //mystring.split(",");

            if(count != 0){
                std::string delimiter_char = ",";
                size_t pos = 0;
                std::string token;
                while ((pos = mystring.find(delimiter_char)) != std::string::npos) {
                    token = mystring.substr(0, pos);
                    //std::cout << token << std::endl;
                    mystring.erase(0, pos + delimiter_char.length());
                    if(counter == 0){
                        revId = stoi(token);
                    }else if(counter == 1){
                        brand = token;
                    }else if(counter == 2){
                        variety = token;
                    }else if(counter == 3){
                        style = token;
                    }else if(counter == 4){
                        country = token;

                    }else if(counter == 5){

                        if(token == "Japan" || token == "Mexico"){
                            country = country + " " + token;
                            counter --;
                        }else if(token != "Unrated"){
                            star = stod(token);
                        }




                    }
                    counter++;
                    if(counter == 6){

                        topTen = mystring;
                    }
                }


                rs.push_back(NoodleReview(revId, brand, variety, style, country, topTen, star));
                counter = 0;



            }
            count++;
        }

        return rs;

}

int IORunner::write_to_file(string file_name, vector<NoodleReview> input_data){
       ofstream myfile;
       myfile.open(file_name);
       for(int i = 0; i < input_data.size(); i++){
           myfile << input_data.at(i).get_review_number() << ", ";
           myfile << input_data.at(i).get_brand() << ", ";
           myfile << input_data.at(i).get_variety() << ", ";
           myfile << input_data.at(i).get_style() << ", ";
           myfile << input_data.at(i).get_country() << ", ";
           myfile << input_data.at(i).get_stars() << ", ";
           myfile << input_data.at(i).get_top_ten() << endl;
       }
       myfile.close();
       return 0;
}


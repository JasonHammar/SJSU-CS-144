#include <iostream>
#include <vector>
#include <string>
#include "ReviewStats.h"
#include "NoodleReview.h"

using namespace std;

vector<string> ReviewStats::get_top_ten_countries(vector<NoodleReview> nr);

vector<string> ReviewStats::get_top_reviews_over_five(vector<NoodleReview> nr);

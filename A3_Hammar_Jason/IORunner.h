#ifndef IORUNNER_H_INCLUDED
#define IORUNNER_H_INCLUDED
#include <cstring>
#include <sstream>
#include <iostream>

/*#include <iostream>
int main()
{
    std::string s = "7,8,9,5";
    std::string delimiter_char = ",";
    size_t pos = 0;
    std::string token;
    while ((pos = s.find(delimiter_char)) != std::string::npos) {
        token = s.substr(0, pos);
        std::cout << token << std::endl;
        s.erase(0, pos + delimiter_char.length());
    }
std::cout << s << std::endl;
}
*/

class FileIO {

    virtual std::vector<NoodleReview> read_from_file(std::string file_name) = 0;

    // As described by the method name, you will open a file and read data, and then return a vector of NoodleReview objects



    virtual int write_to_file(std::string file_name, std::vector<NoodleReview> input_data) = 0;

    // return of 0 means success, and return 1 or greater means some failure.

    // For now, return 0 (we'll assume that any write is okay)

};
class IORunner: public FileIO{

public:
    IORunner();
    vector<NoodleReview> read_from_file(string file_name);
    int write_to_file(string file_name, vector<NoodleReview> input_data);

};
#endif // IORUNNER_H_INCLUDED

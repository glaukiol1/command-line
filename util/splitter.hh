#include <string>
#include <iostream>
#include <sstream>

class splitter {
    public:
        std::string _arr[285];
        splitter(std::string line){
            int i = 0;
            std::stringstream ssin(line);
            while (ssin.good()){
                ssin >> _arr[i];
                ++i;
            };
        };
};

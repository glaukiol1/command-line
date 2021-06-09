#include <iostream>
#include <string>
#include"../util/splitter.hh"

namespace echo {
    class cmd_echo {
        public:
            std::string callLn;
            cmd_echo(std::string ln) {
                callLn = ln;
            };
            void run() {
                splitter splt(callLn);
                int i = 0;
                for(std::string x : splt._arr) {
                    if (i >= 1) {
                        std::cout << x;
                    };
                    ++i;
                };
            };
    };
}
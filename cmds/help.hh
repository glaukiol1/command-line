#include <iostream>
#include <string>

namespace help {
    class cmd_help {
        public:
            std::string help = "cmdline HELP: \n \t echo <message> | print a message to the console. \n\t ------------------------- \n\t @glaukiol1";
            void run() {
                std::cout << help;
            };
    };
}
#include <iostream>
#include <string>

namespace help {
    class cmd_help {
        public:
            std::string help = "cmdline HELP: \n \t echo <message> | print a message to the console. \n \t ls | get the files and subdirectories of the current working directory. \n \t clear | Clear the shell. \n\t ------------------------- \n\t @glaukiol1";
            void run() {
                std::cout << help;
            };
    };
}
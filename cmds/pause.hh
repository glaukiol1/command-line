#include <iostream>
#include <string>

namespace pause {
    class cmd_pause {
        public:
            void run() {
                std::cout << "\n Press any key to resume...";
                std::cin.ignore();
            };
    };
}
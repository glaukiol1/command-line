#include <iostream>
#include <string>
#include"../util/_fs.hh"

using namespace std;
using namespace _fs;
namespace ls {
    class cmd_ls {
        public:
            char* _path;
            cmd_ls(char* path) {
                _path = path;
            };
            void run() {
                int i = 0;
                bool first_time = true;
                directory_contents dircontents(_path);
                for (string l : dircontents.dir_contents) {
                    if (l.length()>=1) {
                        if (i==8 || i==-1 || ( i==0 && first_time )) {
                            if(first_time) {
                                cout << "\t";
                            } else {
                                cout << "\n\t";
                            };
                            i=-1;
                            first_time = false;
                        };
                        cout <<  l <<  "  |  ";
                    };
                    i++;
                };
            }
    };
}
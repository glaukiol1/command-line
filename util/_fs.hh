#include <iostream>
#include <dirent.h>
using namespace std;

namespace _fs
{
    class directory_contents {
        public:
            string dir_contents[1000];
            directory_contents(char *directory_path){
                DIR *dh;
                struct dirent *contents;

                dh = opendir(directory_path);

                if (!dh)
                {
                    cout << "The given directory is not found";
                    return;
                }
                int i = 0;
                while ((contents = readdir(dh)) != NULL)
                {
                    string name = contents->d_name;
                    dir_contents[i] = name;
                    i+=1;
                }
                closedir(dh);
            }
    };
}
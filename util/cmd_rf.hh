#include <string>
#include <iostream>
#include "../cmds/echo.hh"
#include "../cmds/help.hh"
#include "../cmds/ls.hh"
#include "../cmds/clear.hh"

/** */
/** */

using namespace std;
using namespace echo;
using namespace help;
using namespace ls;
using namespace clear;

#include <sstream>
/**
 * copy a secondary _splitter function for use in cmd_rf.hh. 
 */
class _splitter {
    public:
        std::string _arr[285];
        _splitter(std::string line){
            int i = 0;
            std::stringstream ssin(line);
            while (ssin.good()){
                ssin >> _arr[i];
                ++i;
            };
        };
};

void cmd_rf(string ln)
{
    if (!ln.find("echo"))
    {
        cmd_echo _echo(ln);
        _echo.run();
        std::cout << "\n";
    }
    else if (!ln.find(".help"))
    {
        cmd_help _help;
        _help.run();
        std::cout << "\n";
    }
    else if (!ln.find("ls"))
    {
        char cwd[256];
        if (getcwd(cwd, sizeof(cwd)) == NULL)
        {
            perror("\t getcwd() error");
        }
        else
        {
            cmd_ls _ls(cwd);
            _ls.run();
            std::cout << "\n";
        }
    }
    else if (!ln.find("clear"))
    {
        cmd_clear _clear;
        _clear.run();
    }
    else
    {
        _splitter split(ln);
        cout << "\t \"" << split._arr[0]  << "\" " << "is not recognized as a command, executable, script file, or function. Check the spelling, or if a path was included. \n";
    };
}
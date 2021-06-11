#include <string>
#include <iostream>
#include "../cmds/echo.hh"
#include "../cmds/help.hh"
#include "../cmds/ls.hh"

/** */
/** */

using namespace std;
using namespace echo;
using namespace help;
using namespace ls;

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
            exit(1);
        }
        else
        {
            cmd_ls _ls(cwd);
            _ls.run();
            std::cout << "\n";
        }
    };
}
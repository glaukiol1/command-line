#include <string>
#include <iostream>
#include"../cmds/echo.hh"

using namespace std;
using namespace echo;

void cmd_rf(string ln) {
    if (!ln.find("echo")) {
        cmd_echo _echo(ln);
        _echo.run();
        std::cout << "\n";
    };
}
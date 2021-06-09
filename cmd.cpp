
#include <iostream>
#include <string>
#include"./util/find_cmd.hh"
#include"./util/print.hh"

using namespace std;

int main() {
    print("Command Line");
    while (1==1) {
        cout << "cmd>   ";
        string ln;
        getline(cin,ln);
        cmd_rf(ln);
    };
    return 0;
}


#include <iostream>
#include <string>
#include <filesystem>
#include <vector>
#include "./util/cmd_rf.hh"
#include "./util/print.hh"

// using namespace std;
// using std::filesystem::directory_iterator;

#define _POSIX_SOURCE
#include <unistd.h>
#undef _POSIX_SOURCE
#include <stdio.h>

int main()
{
	print("\tCommand Line | @glaukiol1");
	print("\tRun \".help\" for command line help.");
	char cwd[256];
	if (getcwd(cwd, sizeof(cwd)) == NULL) {
		perror("\tERROR FATAL: getcwd() error");
		exit(1);
	} else {
		printf("\tWorking in: %s\n", cwd);
	}
	print("\0");
	
	while (1 == 1)
	{
		cout << "cmd>   ";
		string ln;
		getline(cin, ln);
		cmd_rf(ln);
	};
	return 0;
}
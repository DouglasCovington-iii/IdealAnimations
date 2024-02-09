#include <cstdlib>
#include <unistd.h>
#include <signal.h>
#include <iostream>
#include <string>


int main() {
	int i = 0;
	std::string stem = "timeout --preserve-status --foreground  -k10 5 ";
	std::string listOfCmds[] = {"./donut", "cmatrix", "asciiquarium", "sl"};
	

	while(true) {
		for (std::string cmd : listOfCmds) {
			if (system((stem + cmd).c_str()) != 0) {
				std::cerr << "";
			}
			system("clear");
			sleep(1);
		}
	}

}


#include<iostream>
#include<unistd.h>

std::string garbage;

void clear_term() {
    int os;
    int isunix = system("clear");
	if (isunix != 0) {
		int windows = system("cls");
		if (windows != 0) {
			std::cerr << "Error clearing terminal, please switch to a system that supports the clear or the cls function." << std::endl;
		}
		else {
			os = 1;
		}
	}
	else {
		os = 0;
	}
}

void initialize() {
    clear_term();

}

int main() {
    initialize();
    std::cout << "Welcome to the ATM simulator, press any key + enter to begin" << std::endl;
    std::cin >> garbage;
    clear_term();
    std::cout << "Loading..." << std::endl;
    sleep(2);
}
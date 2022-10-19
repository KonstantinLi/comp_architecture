#include <iostream>
#include <ctime>
#include "functions.h"

using namespace std;

void date() {
	time_t now = time(0);
	char* dt = ctime(&now);

	cout << "The local date and time is: " << dt << endl;
}

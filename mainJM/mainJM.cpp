#include <iostream>
#include <string>
using namespace std;

#include "manusia.h"
#include "jantung.h"

int main() {
	manusia* varManusia = new manusia("jono");
	delete varManusia;
	return 0;
}
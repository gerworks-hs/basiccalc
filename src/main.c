#include <stdio.h>
#include "operators.h"

void printWelcome() {
	printf(
		"Welcome to the basic calculator\n"
		"Available operators -> (+ - / *)\n"		
	);
}

int main() {
	printWelcome();	
	return 0;
}

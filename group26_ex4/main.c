#include <stdio.h>

#include "server.h"

int main(int argc, char *argv[]) {
	if (argc != 3) {
		printf("Not the right amount of input arguments.\nNeed to give two.\nExiting...\n"); // first is path, other two are inputs
		return ERROR_CODE;
	}

	return SUCCESS_CODE;
}
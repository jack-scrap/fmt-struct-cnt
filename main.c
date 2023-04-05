#include <stdio.h>
#include <stdlib.h>

const char hash = '#';

void err(char* msg) {
	printf("Error: %s\n", msg);
}

int main(int argc, char* argv[]) {
	if (argc == 1) {
		err("No arguments");

		return 1;
	}

	if (argc != 1 + 1) {
		err("Wrong number of arguments");

		return 1;
	}

	int no = atoi(argv[1]);

	printf("%c%d\n", hash, no);

	return 0;
}

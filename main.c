#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

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

	char* str = argv[1];
	for (int i = 0; i < strlen(str); i++) {
		if (!isdigit(str[i])) {
			err("Character not an integer");

			return 1;
		}
	}

	int no = atoi(argv[1]);

	if (!no) {
		err("Value null");

		return 1;
	}

	if (no < 0) {
		err("Value negative");

		return 1;
	}

	printf("%c%d\n", hash, no);

	return 0;
}

#include <stdio.h>
#include <string.h>

int treatString(char *str, int size) {
	int diamond = 0;
	for (int i = 0; i < size; i++) {
		if(str[i] == '<') {
			for(int j = i; j < size; j++) {
				if(str[j] == '>') {
					diamond++;
					str[i] = ' ';
					str[j] = ' ';
					break;
				}
			}
		}
	}

	return diamond;
}

void main() {
	int testCases, sizeOfString, i = 0;
	char str[1001];

	scanf("%d",&testCases);

	int diamonds[testCases - 1];

	for (int i = 0; i < testCases; i++) {
		scanf("%s",&str);

		sizeOfString = strlen(str);

		diamonds[i] = treatString(str, sizeOfString);
	}

	for (int i = 0; i < testCases; i++)
		printf("%d\n",diamonds[i]);
}

#include <stdio.h>
#include <stdlib.h>
void staircase(int n) {
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++)
			if(n-j-1>i) {
				printf(" ");
			}
			else {
				printf("#");
			}
		printf("\n");
	}
}

int main(int argc, char* argv[])
{
	int n = atoi(argv[1]);
	staircase(n);
}

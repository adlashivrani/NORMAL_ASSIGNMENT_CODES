#include<stdio.h>
int main() {
	int row;
	int col;
	for ( row = 1; row <= 5; row++) {
		for ( col =1; col <= 5; col++) {
			printf(" %d ",col);
		}
		printf("\n");
	}
}

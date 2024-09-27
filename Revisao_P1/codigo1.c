#include <stdio.h>

int main(void) {
	
	int A, B, C;
	int x, y, z;

	scanf("%d %d %d", &A, &B, &C);
	
    x = A; y = B; z = C;

	if (A > B){	x = B; y = A;}
	if (A > C){	x = C; z = A;}
	if (B > C){	y = C; z = B;}

	printf("\n%d %d %d\n", x, y, z);
	printf("\n%d %d %d\n", A, B, C);

	return 0;
}
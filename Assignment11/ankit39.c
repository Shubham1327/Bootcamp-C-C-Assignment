//1. Write a function to calculate LCM of two numbers. (TSRS)
#include<stdio.h>
int findLCM(int x, int y, int res);

int main() {
	int x, y, res;
	printf ("Enter two positive integers: ");
	scanf ("%d %d", &x, &y);

	res = (x > y) ? x : y;
	int Lcm = findLCM(x, y, res);
	printf ("\nThe LCM obtained from %d and %d is %d. ", x, y, res);

	return 0;
}

int findLCM ( int x, int y, int res) {

	while (1) {
		if (res % x == 0 && res % y == 0) {
			return res;
			break;
		} else {
			++res;
			printf("\n");
        }
    }
}
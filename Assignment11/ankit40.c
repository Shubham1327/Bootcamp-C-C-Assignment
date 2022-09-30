//2. Write a function to calculate HCF of two numbers. (TSRS)
#include<stdio.h>
int findHCM(int x, int y, int res);

int main() {
	int x, y, res;
	printf ("Enter two positive integers: ");
	scanf ("%d %d", &x, &y);

	res = (x <y) ? x : y;
	int Hcm = findHCM(x, y, res);
	printf ("\nThe HCM obtained from %d and %d is %d. ", x, y, res);

	return 0;
}

int findHCM ( int x, int y, int res) {

	while (1) {
		if (res % x == 0 && res % y == 0) {
			return res;
			break;
		} else {
			++res;
		
        }
    }
}
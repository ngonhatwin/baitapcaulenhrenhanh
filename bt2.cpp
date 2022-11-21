#include "stdio.h"
int main () {
	int a;
	printf ("\n hay nhap so nguyen a bat ki ");
	scanf ("%d", &a);
	
	if (a%2==0) {
		printf("\n a la so chan ", a);
	}else {
		printf ("\n a la so le ", a);
	}

}
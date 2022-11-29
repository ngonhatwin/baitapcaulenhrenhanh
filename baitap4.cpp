#include "stdio.h"
int main () {
	float a, b, tong, hieu;
	char kytu;
	printf ("\n hay nhap so a= ");
	scanf ("\n %f", &a);
	printf ("\n hay nhap so b=");
	scanf ("\n %f", &b);
	printf ("\n hay nhap ky tu + hoac -");
	scanf ("\n %c", &kytu);
	

	

	
	switch ( kytu ) {
		case 43 : 
				tong= a+b;
				printf ("\n tong a va b la = %.2f", tong);
				break;
				
		case 45 :
				hieu= a-b;
				printf ("\n hieu a va b la = %.2f", hieu );
				break;
		default :
				printf ("\n vui long nhap + hoac - : ");
			
	}
}

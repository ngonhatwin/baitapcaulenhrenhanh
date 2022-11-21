#include "stdio.h"
int main () {
	int a;
	printf ("\n hay nhap diem la so nguyen tu 0 - 10 ");
	scanf ("%d", &a);
if (0<=a && a<5) {
	printf ("\n yeu ", a);
	
}

if (5<=a && a<6) {
	printf ("\n trung binh ", a);
}
if (6<=a && a<7) {
	printf ("\n trung binh kha", a);
}
if (7<=a && a<8) {
	printf ("\n kha", a);
}
if (8<=a && a<9) {
	printf ("\n gioi ", a);
	
}
if (9<=a && a<10) {
	printf ("\n xuat sac", a);
}

}
#include "stdio.h"
int main () {
	// nhap diem 
	float a;
	printf ("\n hay nhap diem  tu 0 - 10 ");
	scanf ("%f", &a);
	
	// neu diem lon hon hoac bang 0 va diem be hon 5
if (0<=a && a<5) {
	printf ("\n yeu ", a);
	
}
	// neu diem lon hon hoac bang 5 va diem be hon 6
if (5<=a && a<6) {
	printf ("\n trung binh ", a);
}
	// neu diem lon hon hoac bang 6 va diem be hon 7
if (6<=a && a<7) {
	printf ("\n trung binh kha", a);
}
	// neu diem lon hon hoac bang 7 va diem be hon 8
if (7<=a && a<8) {
	printf ("\n kha", a);
}
	// neu diem lon hon hoac bang 8 va diem be hon 9
if (8<=a && a<9) {
	printf ("\n gioi ", a);
	
}
	// neu diem lon hon hoac bang 9 va diem be hon 10
if (9<=a && a<10) {
	printf ("\n xuat sac", a);
}

}

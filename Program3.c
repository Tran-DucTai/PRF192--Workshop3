#include <stdio.h>
#include <math.h>

int getRelPos(double x, double y, double r){
	double d2= x*x + y*y; // d2 = x^2 + y^2
	double r2= r*r; // r2=r^2
	if(d2<r2) 
	return 1; // d2^<r^2 --> the point is in the circle: diem nam trong duong tron
	else if(d2==r2) 
	return 0; // d^2=r^2 --> the point is on the circle: diem nam tren duong tron
	return -1; // d^2>r^2 --> the point is out of the circle: diem nam ngoai duong tron
}

int main(){
	double x, y, r;
	int result;
	printf("Accept x, y= ");
	scanf("%lf %lf", &x, &y);
	do{
		printf("Accept r= ");
		scanf("%lf", &r);
	}
	while(r<0);
	result = getRelPos(x,y,r);
	if(result==1) 
		printf("The point is in the circle");
	else if(result==0) 
		printf("The point is on the circle");
	else 
		printf("The point is out of the circle");
	return 0;
}

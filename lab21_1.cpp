#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
	double l1x = R1.x, r1x = R1.x+R1.w, l1y = R1.y-R1.h, r1y = R1.y;
	double l2x = R2.x, r2x = R2.x+R2.w, l2y = R2.y-R2.h, r2y = R2.y;

	double x_dist = min(r1x, r2x)-max(l1x, l2x);
	double y_dist = min(r1y, r2y)-max(l1y, l2y);

	if(x_dist > 0 && y_dist > 0) return x_dist*y_dist;
	else return 0;
}
#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
	double ax1 = max(R1.x,R2.x);
	double ay1 = min(R1.y,R2.y);
	double ax2 = min(R1.x+R1.w,R2.x+R2.w);
	double ay2 = max(R1.y-R1.h,R2.y-R2.h);
	double w = ax2-ax1;
	double h = ay1-ay2;
	if(w<=0){
	return 0;
	}else {return w*h;
	}
}

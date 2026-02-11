#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect *r1,Rect *r2){
    const double left = max(r1->x,r2->x);
    const double right = min(r1->x+r1->w,r2->x+r2->w);
    const double bottom = max(r1->y-r1->h,r2->y-r2->h);
    const double top = min(r1->y,r2->y);
    
    double width = right - left;
    double height = top - bottom;
    
    if(width<0 || height<0) return 0;
    else return (width)*(height);
}
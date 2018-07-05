#include <iostream>
#include <cmath>

int main() {
    int a,b,v,A,s;
    while (scanf("%d %d %d %d %d",&a,&b,&v,&A,&s) && a+b+v+A+s != 0) {
        double vx(v*cos(M_PI*A/180.0)),vy(v*sin(M_PI*A/180.0));
        double x(0.5*vx*s),y(0.5*vy*s);
        //std::cout << x << " " << y << std::endl;
        int xcount(0),ycount(0);
        if (x > 0.5*a) {
            x -= 0.5*a;
            xcount += (1+(int)(x/a));
        }
        if (y > 0.5*b) {
            y -= 0.5*b;
            ycount += (1+(int)(y/b));
        }
        printf("%d %d\n",xcount,ycount);
    }
}

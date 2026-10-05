/*
 * exercise_02.c
 * 
 * 
 */

#include <stdio.h>

struct Point {
    double x;
    double y;
};

void translate(struct Point *p, double dx, double dy);
double squared_distance_from_origin(struct Point *p);

void translate(struct Point *p, double dx, double dy) {
   (*p).x=(*p).x+dx;
   
   p->y=p->y+dy;
}

double squared_distance_from_origin(struct Point *p) {
   double distance = (p->x)*(p->x)+(p->y)*(p->y);
    return distance;
}

int main(void) {
    struct Point p;

    p.x = 2.0;
    p.y = -1.0;
    printf("Point originale: (%.1f, %.1f)\n", p.x, p.y);

    translate(&p, 3.0, 4.0);

    printf("Point: (%.1f, %.1f)\n", p.x, p.y);
    printf("Expected point: (5.0, 3.0)\n");
    printf("Squared distance: %.1f\n",
           squared_distance_from_origin(&p));
    printf("Expected squared distance: 34.0\n");

    return 0;
}

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct {
    double x; double y;
} typedef Point;

double calculateDistance(double x1, double y1, double x2, double y2){
    return sqrt(abs(x1-x2)*abs(x1-x2)+abs(y1-y2)*abs(y1-y2));
}

int calculateArea(double x1, double y1, double x2, double y2){
    return abs(x1-x2)*abs(y1-y2);
}

int main(){
    Point p1; Point p2;
    printf("Координаты двух точек через пробел:\n");
    scanf("%lf %lf %lf %lf", &p1.x, &p1.y, &p2.x, &p2.y);
    printf("Евклидово расстояние: %lf\n", calculateDistance(p1.x, p1.y, p2.x, p2.y)); 
    printf("Площадь: %d\n", calculateArea(p1.x, p1.y, p2.x, p2.y));
}

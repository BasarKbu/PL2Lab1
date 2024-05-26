#include<stdio.h>
//By the function.
//This program calculates the area of the circle.

#include<stdio.h>

void circleArea(const int r);

int main(){
    int r;
    printf("Enter the radius of the circle: \n"); 
    scanf("%d", &r);
    circleArea(r);
    return 0;
}

void circleArea(const int r){
    float Pi = 3.14;
    float area = Pi * r * r;
    printf("Area of the circle is: %.2f\n", area);
}


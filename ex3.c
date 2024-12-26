#include<stdio.h>
struct CircleData{
    float diameter;
    float area;
    float circumference;
};
struct CircleData computeDiameterSurface(float radius){
    struct CircleData c;
    c.diameter = 2 * radius;
    c.area = 2 * 3.14 * radius;
    c.circumference = 3.14 * radius * radius;

    return c;
}
int main(){
    float r;
    printf("Enter radius : ");
    scanf("%f", &r);

    struct CircleData circle = computeDiameterSurface(r);

    printf("%.2f\n", circle.diameter);
    printf("%.2f\n", circle.area);
    printf("%.2f\n", circle.circumference);


}
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int p;
    float r,t;
    scanf("%d %f %f",&p,&r,&t);
    printf("%.0lf\n",(p*r*t/100));
    
    return 0;
}
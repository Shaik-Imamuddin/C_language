/*

//Area of circle using #define
#include <stdio.h>
#define PI 3.1416
int main() {
    float r,area;
    scanf("%f",&r);
    area = PI*r*r;   
    printf("%.2f",area);
    return 0;
}

//square using  macros

#include <stdio.h>
#define SQUARE(x) (x * x)

int main() {
    int n;
    scanf("%d",&n);
    printf("%d", SQUARE(n));
    return 0;
}



//conditional compilation

#include <stdio.h>
#define MARKS 75

int main() {

#if MARKS >= 90
    printf("Grade: A\n");
#elif MARKS >= 60
    printf("Grade: B\n");
#else
    printf("Grade: C\n");
#endif

    return 0;
}



*/
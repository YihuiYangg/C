#include <stdio.h>

float circleArea(float radius)
{
    float area;
    float answer;
    answer=radius*radius*3.14;
    return answer;
}

float main()
{
    float Radius;
    printf("entre the Radius:");
    scanf("%f",&Radius);


    printf("The area is %f",circleArea(Radius));

    return 0;
}

#include <stdio.h>

float volume(float radius)
{
    float volume;
    float answer;
    answer=radius*radius*radius*3.14*4/3;
    return answer;
}

float main()
{
    float Radius;
    printf("entre the Radius:");
    scanf("%f",&Radius);


    printf("The volume is %f",volume(Radius));
}
#include<stdio.h>
#include<math.h>

int main(){
    
    printf("Enter a floating point number\t");
    double a;
    scanf("%lf",&a);

    printf("\nEnter decimal place to truncate to\t");
    int b;
    scanf("%d",&b);

    int res=a* pow(10,b);
    float res1=res/pow(10,b);

    printf("\nFinal result\t %f",res1);
    return 0;

}
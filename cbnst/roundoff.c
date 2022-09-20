#include<stdio.h>
#include<math.h>

int main(){
    double a,b;
    printf("Enter Number to round off\t");
    scanf("%lf",&a);

    int v;
    printf("\nEnter decimal place to round off to\t");
    scanf("%d",&v);

        b=a*pow(10,v+1);
        int temp=b;
        int res=temp%10;
        temp=temp/10;

        if(res>=5){
            temp++;    
        }
        else{
        temp--;
        }

        b=temp;
        b=b/pow(10,v);

    printf("\nafter round off \t%lf",b);
  return 0;  
}
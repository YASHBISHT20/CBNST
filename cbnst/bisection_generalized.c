
#include<stdio.h>
#include<conio.h>
#include<math.h>

// #define f(x) x*x*x-4*x-9

double fa(int a,int b,int c,int d,int z,double x){
    double res=a*x*x*x*x + b*x*x*x + c*x*x + d*x+ z ;
    return res;
}

void main()
{
	 float x2, f0, f1, f2, e;
	 int step = 1;
     int a,b,c,d,z;
     float a1,a2;

	 up:
    printf("Enter values of a b c d z\n");
    scanf("%d %d %d %d",&a,&b,&c,&d,&z);

	 printf("\nEnter two initial guesses:\n");
	 scanf("%f%f", &a1, &a2);

    	f0 = fa(a,b,c,d,z,a1);
	    f1 = fa(a,b,c,d,z,a2);

	 if( f0 * f1 > 0.0)
	 {
		  printf("Incorrect Initial Guesses.\n");
		  goto up;
	 }

	 printf("Enter tolerable error:\n");
	 scanf("%f", &e);

	//  f0 = f(x0);
	//  f1 = f(x1);


	 printf("\nStep\t\tx0\t\tx1\t\tx2\t\tf(x2)\n");
	 do
	 {
		  x2 = (a1 + a2)/2;
		  f2 = fa(a,b,c,d,z,x2);
		
		  printf("%d\t\t%f\t%f\t%f\t%f\n",step, a1, a2, x2, f2);
		
		  if( f0 * f2 < 0)
		  {
			   a2 = x2;
			   f1 = f2;
		  }
		  else
		  {
			   a1 = x2;
			   f0 = f2;
		  }
		  step = step + 1;
	 }while(fabs(f2)>e);
	 printf("\nRoot is: %f", x2);
}
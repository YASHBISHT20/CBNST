#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define    f(x)    x*x*x*x-x-10
#define   g(x)   4*x*x*x -1

void main()
{
	 float x0, x1, f0, f1, g0, e;
	 int step = 1, N;
	 printf("\nEnter initial guess:\n");
	 scanf("%f", &x0);
	 printf("Enter tolerable error:\n");
	 scanf("%f", &e);
	 printf("Enter maximum iteration:\n");
	 scanf("%d", &N);

	 printf("\nStep\t\tx0\t\tf(x0)\t\tx1\t\tf(x1)\n");
	 do
	 {
		  g0 = g(x0);
		  f0 = f(x0);
		  if(g0 == 0.0)
		  {
			   printf("Mathematical Error.");
			   exit(0);
		  }
		  x1 = x0 - f0/g0;

		  
		  x0 = x1;
          f1 = f(x1);
          printf("%d\t\t%f\t%f\t%f\t%f\n",step,x0,f0,x1,f1);
		  step = step+1;
		
		  if(step > N)
		  {
			   printf("Not Convergent.");
			   exit(0);
		  }
		  
	 }while(fabs(f1)>e);
	 printf("\nRoot is: %f", x1);

}
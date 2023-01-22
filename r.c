#include<stdio.h>
#include<conio.h>
#include<math.h>
#define F(x) (x*x*x-x-4)
int main()
{
    int i=1;
    float a,b,c,f,error;
    printf("Enter value of a\n");
    scanf(" %f",&a);
    printf(" Enter value of b\n");
    scanf(" %f",&b);
    do
    {
        c=(a*F(b)-b*F(a))/(F(b)-F(a));
        f=F(c);
        printf("\n\n i= %d  a= %0.3f  b= %0.3f  c= %0.3f  F(c)=%0.3f",i,a,b,c,f);
        if((F(a)*F(c))<0)
        {
            b=c;
        }
        else
        {
            a=c;
        }
        i++;

    } while (fabs(F(c))>0.0005);
    printf("\n\napproximate error = %0.3f",c);
    return 0;

}

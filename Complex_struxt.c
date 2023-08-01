#include <stdio.h>
typedef struct
{
    float real,imag;
}Complex; //creating a new data type

void accept(Complex *p1,Complex *p2)
{
    printf("Enter real and imaginary part of first number:\n");
    scanf("%f %f",&p1->real,&p1->imag);
     printf("Enter real and imaginary part of second number:\n");
    scanf("%f %f",&p2->real,&p2->imag);
}
Complex add(Complex x,Complex y)
{
    Complex temp;
    temp.real=x.real+y.real;
    temp.imag=x.imag+y.imag;
    return temp;
}
Complex sub(Complex x,Complex y)
{
    Complex temp;
    temp.real=x.real-y.real;
    temp.imag=x.imag-y.imag;
    return temp;
}


int main()
{
    Complex n1,n2,Add,Sub;
    accept(&n1,&n2);
    Add=add(n1,n2);
    Sub=sub(n1,n2);
    char c[3] = "+j";
    if(Add.imag < 0)
    {
        c[0] = '-';
        Add.imag = -Add.imag;
    }
    printf("Resultant Addition = %.f %s %f", Add.real, c, Add.imag);
    printf("Resultant Subtraction = %.f %s %f", Sub.real, c, Sub.imag);
    return 0;
}





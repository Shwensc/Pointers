// WAP to add, subtract and multiply two rational numbers
#include <stdio.h>
typedef struct
{
    int num,den;
}Rational; //crrating "Rational" datatype through typedef

void accept(Rational *p1,Rational *p2) //passing adress through main()
{
    printf("Enter numerator and denomiantor of first number:\n");
    scanf("%d %d",&p1->num,&p1->den);
    printf("Enter numerator and denomiantor of second number:\n");
    scanf("%d %d",&p2->num,&p2->den);
}
Rational Add(Rational x,Rational y)
{ 
    Rational temp;
    temp.num=x.num*y.den+y.num*x.den;
    temp.den=x.den*y.den;
    return temp; // return temp to add method
}
Rational Sub(Rational x,Rational y)
{
    Rational temp;
    temp.num=x.num*y.den-y.num*x.den;
    temp.den=x.den*y.den;
    return temp; // return temp to subtract method
}
Rational Mult(Rational x,Rational y)
{ 
    Rational temp;
    temp.num=x.num*y.num;
    temp.den=x.den*y.den;
    return temp; // return temp to subtract
}

    
    
int main()
{
    Rational n1,n2,add,subtract,multiply;
    accept(&n1,&n2);
    add=Add(n1,n2);
    subtract=Sub(n1,n2);
    multiply=Mult(n1,n2);
    printf("Sum = %d/%d\n",add.num,add.den);
    printf("\n Difference = %d/%d",subtract.num,subtract.den);
    printf("\n Multiplication = %d/%d",multiply.num,multiply.den);
    return 0;
}

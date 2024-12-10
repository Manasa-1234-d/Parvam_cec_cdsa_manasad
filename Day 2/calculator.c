#include<stdio.h>
int main(){
    char operator;
    float op1,op2,result;
    printf("enter the operator(+,-,*,/):");
    scanf("%c",&operator);
    printf("enter any two numbers:");
    scanf("%f %f",&op1,&op2);
    switch (operator)
    {
    case'+':
        result = op1 + op2;
        printf("sum of %d & %f: %f" ,op1,op2,result);
        break;
    case '-':
        result = op1-op2;
        printf("Difference of %f & %f: %f",op1,op2,result);
        break;
    case '*':
        result = op1*op2;
        printf("protuct of%f & %f: %f",op1,op2,result);
        break;
    case '/':
        result =op1/op2;
        printf("quotient of %f & %f: %f",op1,op2,result);
        break;
    default:
        printf(" invalid input, please try again with proper operation!");
        break;
    }
    return 0;
}    
        
        
        
        




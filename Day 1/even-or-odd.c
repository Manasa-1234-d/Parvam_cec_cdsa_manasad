#include<stdio.h.>
int main(){
    int num;
    printf("enter any number:");\
    scanf("%d",&num);
    (num%2==0)?printf("%d is an even number",num):("%d is an odd number",num);
}
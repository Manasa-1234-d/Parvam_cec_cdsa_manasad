#include<stdio.h>
#include<string.h>
int main(){
    char f_name[20], l_name[20],name[50];
    printf("enter your first name:");
    scanf("%s",f_name);
    printf("enter your last name:");
    scanf("%s",l_name);
    strcpy(name,f_name);
    strcat(name,l_name);
    printf("full name: %s\n",name);
    printf("full name: %s %s",f_name, l_name);
    printf("full name in uppercase: %s",strupr(name));
    printf("full name in lowercase: %s",strlwr(name));
    printf("full name in reversed: %s",strrev(name));
}
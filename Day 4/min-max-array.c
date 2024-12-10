#include<stdio.h>
int main(){
    int size;
    printf("enter the number of elements:");
    scanf("%d", &size);
    int arrofNum[size];
    printf("enter %d elements into an array:",size);
    for(int i=0; i<size; i++){
        scanf("%d", &arrofNum[i]);
    }
    int max,min;
    max = min = arrofNum[0];
    for(int i=0; i<size; i++){
        if(arrofNum[i] > max){
            max = arrofNum[i];
        }
        if(arrofNum[i] < min){
            min = arrofNum[i];
        }
    }
    printf("the largest element in the given array is: %d\n",max);
    printf("the smallest element in the given array is: %d",min);
}
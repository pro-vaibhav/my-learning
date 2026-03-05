#include<stdio.h>

int binarysearch(int array[], int low, int high){
    if(high>=low){
     int mid=low+(high-low) / 2;

     if(x==array[mid])
     return mid;
     if(x>array[mid])
     return binarysearch(array,x,mid+1, high);
     return binarysearch(array,x,low, mid-1)  

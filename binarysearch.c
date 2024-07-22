#include <stdio.h>
#include <conio.h>
int arr[10]={0,1,2,3,4,5,6,7,8,9}, n = 10, key,result=0;
int binary(int low, int high)
{
    int mid = (high + low) / 2;
    if (high >= low)
    {
        (arr[mid] != key)?((key<arr[mid])?binary(low,mid):binary(mid+1,high)):(result=1);
    }
    return result;
}

void main(){
    key=2;
    printf("%d",binary(0,n));
}
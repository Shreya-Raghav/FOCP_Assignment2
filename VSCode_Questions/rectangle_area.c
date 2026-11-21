#include <stdio.h>
int rectanglearea(int l, int b);
int rectanglearea(int l,int b){
    return l*b;}
int main(){
    int l,b;
    printf("Enter lenght and breadth of the rectangle :");
    scanf("%d %d",&l,&b);
    printf("Area of rectangle is : %d", rectanglearea(l,b));
    return 0;

}
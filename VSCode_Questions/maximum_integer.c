#include <stdio.h>
int maxOfThree(int a,int b,int c);
int maxOfThree(int a,int b,int c){
    if (b >= a && b>=c )
    return b;
  else if (a >= b && a >=c )
    return a;
else 
return c;

}
int main(){
    int a,b,c;
    printf("enter three integers:");
    scanf("%d %d %d",&a,&b,&c);
    printf("Maximum among them is %d", maxOfThree(a,b,c));
    return 0;
}

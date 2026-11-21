#include <stdio.h>
int countmultiples(int n,int k);
int countmultiples(int n,int k){
    return n/k;
}
int main(){
    int n,k;
    printf("Enter the number and the multiple:");
    scanf("%d %d",&n,&k);
    printf("The count of multiples is %d", countmultiples(n,k));
    return 0;

}
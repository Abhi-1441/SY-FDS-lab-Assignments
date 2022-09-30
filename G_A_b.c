#include<stdio.h>
void primes(int a, int b){
    printf("All Prime Numbers between %d and %d are : ",a,b);
    for(int i=a ; i<=b ; i++){
        int flag=0;
        for(int j=2; j<=i; j++){
            if(i%j==0)
             flag++;
        }
        if(flag==1)
          printf("%d ",i);
    }
}
void main(){
    int start,end;
    printf("Enter first Number : ");
    scanf("%d",&start);
    printf("Enter last Number : ");
    scanf("%d",&end);
    primes(start,end);
}
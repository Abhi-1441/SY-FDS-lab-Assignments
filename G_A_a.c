#include<stdio.h>
int main(){
    int oper=0;
    float a,b,ans;
    char flag;
    Return:
    printf("Select the operation to Perform:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    reoperation:
    scanf("%d", &oper );
    
    if(oper >4 || oper < 1){
        printf("!! Please select a valid operation\n"); 
        goto Return;
    }
    printf("Enter two number :\n");
    scanf("%f %f",&a,&b);
    switch(oper){
        case 1: 
          ans=a+b;
          break;
        case 2:
          ans=a-b;
          break;
        case 3: 
          ans=a*b;
          break;
        case 4: 
          ans=a/b;       
    }  
    printf("Answer = %.2f\n",ans);
    printf("Press 'Y' to perform the operation again OR press any other key to continue : ");
    scanf(" %c",&flag); 
    if(flag=='Y'|| flag=='y'){
        goto Return;
    }
    printf("Operation Terminated...");
    return 0;
}
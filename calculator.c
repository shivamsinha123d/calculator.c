#include <stdio.h>
#include <math.h>
#define MAX 10
int main(){
    float num1,num2;
    int operations ;
    int option; 
    char history[MAX][50] ;
    int count = 0 ;
    
    
    while(1){
        printf("choose option 0:exit\n,1:calculator\n,3:history\n");
    scanf("%d",&option);
    
    if (option==0)
    {
        printf("good bye!!");
        break;
    }
    
    if(option == 1)
    { printf("write first number: ");
    scanf("%f",&num1);
    printf("second number : ");
    scanf("%f",&num2);
    printf("write operation number 1 for add, 2 for sub, 3 for div, , 4 for mul");
    scanf("%d",&operations);
    switch(operations)
    {
        case 1:
        printf("addition : %f ",num1+num2);
        break; 
        case 2:
        printf("subtraction : %f",num1-num2);
        break;
        case 3:
        printf("division : %f",num1/num2);
        break;
        case 4:
        printf("multiplication : %f",num1*num2);
        break;
        default:
        printf("no operations defined by the user");

    }
    }
    if(option ==3)
    { if (count == 0 )
    {
        printf("No history");
    }
    else{
         int start;
                if (count > MAX) {
                    start = count - MAX;   // show only last MAX
                } else {
                    start = 0;             // show all
                }
                printf("\n--- Calculation History ---\n");
                for (int i = start; i < count; i++) {
                    printf("%s\n", history[i % MAX]);
                }
        
    }
    
    
    
      


    }
    if (option>4)
    {
        printf("no options like that available");
    }
    } 

    
    return 0 ;

}
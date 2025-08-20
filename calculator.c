#include <stdio.h>
#include <math.h>
#include <string.h>
#define MAX 10
int main(){
    float num1,num2;
    int operations ;
    int option; 
    char history[MAX][50] ;
    int count = 0 ;
    char entry[50];
    
    
    while(1){
        printf("choose option\n0:exit\n1:calculator\n2:history\n");
    scanf("%d",&option);
    
    if (option==0)
    {
        printf("good bye!!");
        break;
    }
    
    if(option == 1)
    { printf("write first number: ");
    scanf("%f",&num1);
    printf("second number: ");
    scanf("%f",&num2);
    printf("write operation number\n1 for addition\n2 for subtraction\n3 for division1\n4 for multipication\n");
    scanf("%d",&operations);
    switch(operations)
    {
        case 1:
        printf("addition of number 1 and number 2 is\n: %f ",num1+num2);
        sprintf(entry,"%.2f+%.2f = %.2f",num1,num2,num1+num2 );
        strcpy(history[count%MAX],entry);
        count++;

        break; 
        case 2:
        printf("subtraction of number 1 and number 2 is\n: %f",num1-num2);
        sprintf(entry,"%.2f-%.2f = %.2f",num1,num2,num1-num2 );
        strcpy(history[count%MAX],entry);
        count++;
        break;
        
        case 3:
             if (num2 == 0) {
                printf("Error: Division by zero!\n");
                sprintf(entry, "%.2f / %.2f = Error", num1, num2);
                } else{
                    printf("Division: %f\n", num1 / num2);
                    sprintf(entry, "%.2f / %.2f = %.2f", num1, num2, num1 / num2);
                    }
                strcpy(history[count % MAX], entry);
                count++;
                break;

        printf("multiplication of number 1 and number 2 is\n: %f",num1*num2);
        sprintf(entry,"%.2f*%.2f = %.2f",num1,num2,num1*num2 );
        strcpy(history[count%MAX],entry);
        count++;
        break;
        default:
        printf("no operations defined by the user\n");

    }
    }
    if(option ==2)
    { if (count == 0 )
    {
        printf("No history\n");
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
    if (option>2)
    {
        printf("no options like that available");
    }
    } 

    
    return 0 ;

}

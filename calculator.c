#include <stdio.h>
int main(){
    int x,y,choice;
    printf("enter two numbers ");
    scanf("%d",&x);
    scanf("%d",&y);
    printf("Eneter your choice \n 1->Addition \n 2->Substraction \n 3->Division \n 4->Multiplication\n");
    scanf("%d",&choice);
switch(choice){
    case 1: printf("sum = %d",x+y);
    break;
    case 2: printf("Diffrence = %d",x-y);
    break;
    case 3:
    printf("Division = ",x/y);
    break;
    case 4:
    printf("Multiplication = %d",x*y);
    break;

}
return 0;
}
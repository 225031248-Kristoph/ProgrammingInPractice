#include<stdio.h>
int main(){
double Revenue;
double Expenses;
double Balance;
int departments;
double payroll;
double procurement;
double assets;
  
    printf("MUNICIPAL BUDGET CALCULATOR\n");
     
    
    printf("Enter departments: \n");
    scanf("%d", &departments );

     printf("Enter payroll: \n");
    scanf("%lf", &payroll);

     printf("Enter procurement: \n");
    scanf("%lf", &procurement);

    printf("Enter assets: \n");
    scanf("%lf", &assets);

    printf("Enter total Revenue: \n");
    scanf("%lf", &Revenue);

    printf("Enter total Expenses: \n");
    scanf("%lf", &Expenses);

    Balance = Revenue - Expenses;

    printf("----munical finalcial summary----\n");
    printf("Departments:%d\n", departments);
    printf("payroll:%.2f\n",payroll);
    printf("Procurment:%.2f\n",procurement);
    printf("Assets:%.2f\n",assets);
    printf("Revenue:%.2f\n",Revenue);
    printf("Expenses:%.2f\n",Expenses);
    if (Balance > 0) {
    printf("Surplus: %.2f\n", Balance);
    }
    else if (Balance < 0) {
     printf("Deficit: %.2f\n", -Balance);
    }
    else {
     printf("The budget is balanced.\n");
    }

    printf("-------------------------------");

 return 0;

}
    

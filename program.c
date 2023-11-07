#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   float Amount, ROI, Time_Period, CIFuture, CI;

   printf("\nPlease enter the Principal Amount: ");
   scanf("%f", &Amount);

   printf("\nPlease Enter Annual Interest Rate: ");
   scanf("%f", &ROI);

   printf("\nPlease Enter the Time Period in Years: ");
   scanf("%f", &Time_Period);

   CIFuture = Amount * (pow(( 1 + ROI/100), Time_Period));
   CI = CIFuture - Amount;

   printf("\nInterest Earned After %.f years is = %.2f \n",  Time_Period, CI);
   printf("\nFuture Amount After %.f years is = %.2f\n",  Time_Period, CIFuture);


   return 0;
}

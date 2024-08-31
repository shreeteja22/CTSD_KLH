#include <stdio.h>
#include <math.h>
int main() {
    double mi = 10000;    
    double arr = 12;      
    int years = 15;     
    int total_months = years * 12;    
    double mrr = arr / 12 / 100; 
    double total_amount = 0;      
    for (int i = 1; i <= total_months; i++) {
        total_amount += mi;                
        double interest = total_amount * mrr; 
        total_amount += interest;             
    }
    printf("Total amount accumulated after %d years is: ₹%.2lf\n", years, total_amount);
    return 0;
}

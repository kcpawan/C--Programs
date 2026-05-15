/* 
 * Salary Calculator Program
 * Calculates net salary after deductions
 */

#include <stdio.h>

int main() {
    // Variable declarations
    float basicSalary, hra, da, pf, netSalary;
    const float TAX_RATE = 0.10;  // 10% tax
    
    // Input section
    printf("=== Salary Calculator ===\n");
    printf("Enter Basic Salary: ?");
    scanf("%f", &basicSalary);
    
    // Salary components calculation
    hra = basicSalary * 0.30;  // 30% HRA
    da = basicSalary * 0.20;   // 20% DA
    pf = basicSalary * 0.12;   // 12% PF
    
    // Net salary calculation
    netSalary = basicSalary + hra + da - pf;
    netSalary = netSalary - (netSalary * TAX_RATE);
    
    // Output section
    printf("\n=== Salary Breakdown ===\n");
    printf("Basic Salary:   %.2f\n", basicSalary);
    printf("HRA (30%%):     %.2f\n", hra);
    printf("DA (20%%):      %.2f\n", da);
    printf("PF (12%%):      %.2f\n", pf);
    printf("Tax (10%%):     %.2f\n", netSalary * TAX_RATE);
    printf("-------------------------\n");
    printf("Net Salary:     %.2f\n", netSalary);
    
    return 0;
}


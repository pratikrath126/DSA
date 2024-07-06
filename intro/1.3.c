#include <stdio.h>

// Define a structure to store employee information
struct Employee {
    int emp_id;
    char name[50];
    char designation[50];
    float basic_salary;
    float hra_percentage;
    float da_percentage;
    float gross_salary;
};

// Function to calculate gross salary
void calculateGrossSalary(struct Employee *emp) {
    emp->gross_salary = emp->basic_salary + 
                        (emp->basic_salary * emp->hra_percentage / 100) +
                        (emp->basic_salary * emp->da_percentage / 100);
}

int main() {
    int n, i;
    
    printf("Enter number of employees: ");
    scanf("%d", &n);
    
    // Declare an array of structures for 'n' employees
    struct Employee employees[n];
    
    // Input employee details
    for (i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Employee ID: ");
        scanf("%d", &employees[i].emp_id);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);
        printf("Designation: ");
        scanf(" %[^\n]", employees[i].designation);
        printf("Basic Salary: ");
        scanf("%f", &employees[i].basic_salary);
        printf("HRA Percentage: ");
        scanf("%f", &employees[i].hra_percentage);
        printf("DA Percentage: ");
        scanf("%f", &employees[i].da_percentage);
        
        // Calculate gross salary
        calculateGrossSalary(&employees[i]);
    }
    
    // Display employee information along with gross salary
    printf("\nEmployee Information:\n");
    printf("-------------------------------------------------------------\n");
    printf("Emp ID\tName\tDesignation\tBasic Salary\tGross Salary\n");
    printf("-------------------------------------------------------------\n");
    
    for (i = 0; i < n; i++) {
        printf("%d\t%s\t%s\t%.2f\t\t%.2f\n", employees[i].emp_id, employees[i].name,
               employees[i].designation, employees[i].basic_salary, employees[i].gross_salary);
    }
    printf("-------------------------------------------------------------\n");

    return 0;
}


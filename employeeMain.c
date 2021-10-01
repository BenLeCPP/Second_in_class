//Compile using the following command: gcc employeeMain.c employeeTable.c employeeOne.c 
//gcc employeeMain.c employeeTable.c employeeTwo.c 

#include <string.h> 
#include <stdlib.h> 
#include "employee.h" 

int main(void)
{ 

    PtrToEmployee searchEmployeeByNumber(const Employee table[], int sizeTable, long numberToFind); 
    PtrToEmployee searchEmployeeByName(const Employee table[], int sizeTable, char * nameToFind); 
    PtrToEmployee searchEmployeeByPhoneNumber(const Employee table[], int sizeTable, char * phoneNumberToFind); 
    PtrToEmployee searchEmployeeBySalary(const Employee table[], int sizeTable, long salaryToFind); 



    extern Employee EmployeeTable[];     
    extern const int EmployeeTableEntries;      

 
    //Example not found (number)
    PtrToEmployee matchPtr; 
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1045); 

    if (matchPtr != NULL) 
        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee ID is NOT found in the record\n"); 

    //Example found (number)
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 1001); 

    if (matchPtr != NULL) 
        printf("Employee ID 1045 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee ID is NOT found in the record\n"); 

    //Example found (name)

    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Tony Bobcat"); 

    if (matchPtr != NULL) 
        printf("Employee Tony Bobcat is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Tony Bobcat is NOT found in the record\n"); 

    //Example not found (name)
    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "Ben Le"); 

    if (matchPtr != NULL) 
        printf("Employee Ben Le is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee Ben Le is NOT found in the record\n");

 //Example found (phone number)

    matchPtr = searchEmployeeByPhoneNumber(EmployeeTable, EmployeeTableEntries, "213-555-1212"); 

    if (matchPtr != NULL) 
        printf("Employee's phone number 213-555-1212 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee's phone number 213-555-1212 is NOT found in the record\n"); 

    //Example not found (phone number)
    matchPtr = searchEmployeeByName(EmployeeTable, EmployeeTableEntries, "213-456-7856"); 

    if (matchPtr != NULL) 
        printf("Employee's phone number 213-456-7856 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee's phone number 213-456-7856 is NOT found in the record\n");

//Example not found (salary)
    PtrToEmployee matchPtr; 
    matchPtr = searchEmployeeBySalary(EmployeeTable, EmployeeTableEntries, 9.50); 

    if (matchPtr != NULL) 
        printf("Employee's salary 9.50 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee's salary 9.50 is NOT found in the record\n"); 

    //Example found (number)
    matchPtr = searchEmployeeByNumber(EmployeeTable, EmployeeTableEntries, 7.80); 

    if (matchPtr != NULL) 
        printf("Employee's salary 7.80 is in record %d\n", matchPtr - EmployeeTable); 
    else 
        printf("Employee's salary 7.80 is NOT found in the record\n"); 

    return EXIT_SUCCESS; 

} 
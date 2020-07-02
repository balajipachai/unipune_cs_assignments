#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char name[30];
    int age;
    int salary;
} EMPLOYEE_RECORD;

EMPLOYEE_RECORD employee[100];

int readFile(EMPLOYEE_RECORD *array)
{
    int i = 0;
    FILE *fp;
    if ((fp = fopen("./resources/employees.txt", "r")) != NULL)
    {
        printf("File opened successfully for reading\n");
        while (!feof(fp))
        {
            fscanf(fp, "%s%d%d", array[i].name, &array[i].age, &array[i].salary);
            i += 1;
        }
        printf("Total employee records::: %d\n", i);
        fclose(fp);
        return i - 1; // number of records that were read
    }
    else
    {
        printf("Error in opening file\n");
        exit(0);
    }
}

void writeFile(EMPLOYEE_RECORD *array, int numberOfRecords, int whichSort)
{
    // If whichSort = 0 then BubbleSort else if whichSort = 1 then InsertionSort
    FILE *fp;
    if (!whichSort)
    {
        if ((fp = fopen("./resources/sortedEmployeesBubbleSortOnName.txt", "w")) != NULL)
        {
            printf("File opened successfully for writing\n");
            for (int i = 0; i < numberOfRecords; i++)
            {
                fprintf(fp, "%s\t%d\t%d\n", array[i].name, array[i].age, array[i].salary);
            }
            fclose(fp);
        }
        else
        {
            printf("Error in opening file\n");
            exit(0);
        }
    }
    else
    {
        if ((fp = fopen("./resources/sortedEmployeesInsertionSortOnName.txt", "w")) != NULL)
        {
            printf("File opened successfully for writing\n");
            for (int i = 0; i < numberOfRecords; i++)
            {
                fprintf(fp, "%s\t%d\t%d\n", array[i].name, array[i].age, array[i].salary);
            }
            fclose(fp);
        }
        else
        {
            printf("Error in opening file\n");
            exit(0);
        }
    }
}

/**
 * Function that sorts an array using Bubble Sort
*/
EMPLOYEE_RECORD *bubbleSort(EMPLOYEE_RECORD *array, int numberOfElements)
{
    int tempAge, tempSalary;
    char *tempName;
    for (int pass = 0; pass < numberOfElements; pass++)
    {
        for (int i = pass + 1; i <= numberOfElements; i++)
        {
            if (strcmp(array[pass].name, array[i].name) > 0)
            {
                // swap the elements
                tempAge = array[pass].age;
                array[pass].age = array[i].age;
                array[i].age = tempAge;

                // swap salary
                tempSalary = array[pass].salary;
                array[pass].salary = array[i].salary;
                array[i].salary = tempSalary;

                // swap name
                strcpy(tempName, array[pass].name);
                strcpy(array[pass].name, array[i].name);
                strcpy(array[i].name, tempName);
            }
        }
    }
    return array;
}

EMPLOYEE_RECORD *insertionSort(EMPLOYEE_RECORD *array, int numberOfElements)
{
    char *key;
    int j;
    for (int i = 0; i < numberOfElements; i++)
    {
        key = array[i].name;
        j = i - 1;

        while (j >= 0 && (strcmp(array[j].name, key) > 0))
        {
            array[j + 1].age = array[j].age;
            array[j + 1].salary = array[j].salary;
            strcpy(array[j + 1].name, array[j].name);
            j -= 1;
        }
        strcpy(array[j + 1].name, key);
    }
    return array;
}

int main()
{
    int numberOfEmployees = readFile(employee);
    EMPLOYEE_RECORD *sortedRecords = bubbleSort(employee, numberOfEmployees);
    writeFile(sortedRecords, numberOfEmployees, 0);
    // Using Insertion Sort
    sortedRecords = insertionSort(employee, numberOfEmployees);
    writeFile(sortedRecords, numberOfEmployees, 1);
    return 0;
}
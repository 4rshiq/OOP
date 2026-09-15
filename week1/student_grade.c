//5)Student Grade with Division (If-Else + Nested Conditions)
#include <stdio.h>
int main()
{
    double marks[5], percentage = 0.00;
    for (int i = 0; i < 5; i++)
    {
        printf("enter marks obtained in subject %d : ", i + 1);
        scanf("%lf", &marks[i]);
        percentage += marks[i];
    }
    percentage = (percentage / 500.00) * 100;

    if (percentage >= 90.00)
    {
        printf("Grade : A (distinction)");
    }
    else if (percentage >= 75.00 && percentage <= 89.00)
    {
        printf("Grade : B (First division)");
    }
    else if (percentage <= 74.00 && percentage >= 60)
    {
        printf("Grade : C (Second division)");
    }
    else if (percentage >= 40.00 && percentage <= 59.00)
    {
        printf("Grade : D (pass)");
    }
    else if (percentage < 40)
    {
        printf("Grade : F (Fail)");
    }

    return 0;
}

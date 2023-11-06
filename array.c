#include<stdio.h>

int main()
{
    int maths[3], eng[3], guj[3], total[3], percentage[3];

    for (int i = 1; i <= 3; i++ )
    {
        printf("enter maths marks ");
        scanf("%d", &maths[i]);
        printf("enter english marks ");
        scanf("%d", &eng[i]);
        printf("enter gujarati marks ");
        scanf("%d", &guj[i]);
    }

    for (int i = 1; i <= 3; i++)
    {
        total[i] = maths[i] + guj[i];
        percentage[i] = ((total[i] * 100) / 300);

        if (percentage[i] > 75 && percentage[i] <= 99)
        {
            grade[i] = 'A';
        }
         if (percentage[i] > 45 && percentage[i] <= 75)
        {
            grade[i] = 'B';
        }
         if (percentage[i] > 33 && percentage[i] <= 60)
        {
            grade[i] = 'C';
        }


        printf("Maths mark of student[%d] is: %d\n", i, maths [i];)   
        printf("English mark of student[%d] is: %d\n", i, eng [i];)   
        printf("Gujarati mark of student[%d] is: %d\n", i, guj [i];)   
        printf("Total mark of student[%d] is: %d\n", i, total [i];)   
        printf("percenbtage of student[%d] is: %d\n", i, percentage [i];)   
        printf("grade of student[%d] is: %d\n", i, grade [i];)   
         
    }
    
}
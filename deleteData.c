#include<stdio.h>

int main()
{
    int a[5] = {1, 2, 3, 4, 5,};
    int tmp;

    for (int i = 0; i< 5; i++)
    {
        if (a[i] == 3)
        {
            tmp = 1;
        }
        if (i < tmp)
        {
            a[i] = a[i];   
        }
        else if (i >= tmp)
        {
            a[i] = a[i + 1];
        }
    }
         for(int i = 0; i < 4; i++)
    {
        printf("%d ",a[i]);
    }
    
}
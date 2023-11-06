#include<stdio.h>

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    for (int i = 1; i <= 5; i++)
    {
        if(i < 3)
        {
            arr[i] = arr[i];
        }
        else if ( i >= 3)
        {
            arr [i] = arr[i + 1];
        }
    }
    for(int i = 0; i < 4; i++)
    {
        printf("%d\t", arr[i]);
    }

    return 0;
    
};

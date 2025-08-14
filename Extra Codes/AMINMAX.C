#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[] = {5,30,100,1,60,90,37,51};
    int i, max = arr[0], min = arr[0];
    clrscr();

    for(i = 1; i < 5; i++)
    {
        if(arr[i] > max)
            max = arr[i];
        else if(arr[i] < min)
            min = arr[i];
    }

    printf("Max = %d and Min = %d", max, min);
    return 0;
}

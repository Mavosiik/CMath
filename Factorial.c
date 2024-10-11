#include<stdio.h>
#include<stdlib.h>

int fact(int num)
{
    int fact = 1;

    while (num > 0)
    {
        fact *= num;
        num --;
    }
    
    return fact;
}

int main(int argc, char *argv[])
{
    if (argc < 2 || argc > 2)
    {
        printf("ERROR: isufficient amount of arguments, expected 1\n");
        return -1;
    }

    int num = atoi(argv[1]);
    int ans;

    ans = fact(num);

    printf("%d! = %d\n",num,ans);
    return 0;
}
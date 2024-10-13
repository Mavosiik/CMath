#include<stdio.h>
#include<stdlib.h>

double sum(int len, char *nums[])
{
    double ans = 0;

    for (int idx = 1; idx < len; idx++)
    {
        ans += atof(nums[idx]);
    }

    return ans;
}

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        printf("ERROR: insufficient amount of arguments, expected at least 1\n");
        return -1;
    }

    double ans;
    ans = sum(argc, argv);
    printf("%.2f\n",ans);
    
    return 0;
}
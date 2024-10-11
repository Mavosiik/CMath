#include<stdio.h>
#include<stdlib.h>

double solve(double lin, double abs)
{
    double ans;
    ans = abs/lin;

    return ans;
}

int main(int argc, char *argv[])
{
    if (argc < 3 || argc > 3)
    {
        printf("ERROR: insufficient amount of arguments, expected amount is 2\n");
        return -1;
    }
    
    double lin,abs;
    lin = atof(argv[1]);
    abs = atof(argv[2]);

    if (abs == 0 && lin == 0)
    {
        printf("Equation has infinite amount of answers\n");
        return 0;
    }

    if (lin == 0 && abs != 0)
    {
        printf("This equation does not have an answer\n");
        return 0;
    }

    double ans = solve(lin,abs);
    printf("Answer to this equation is: %.2f\n",ans);

    return 0;
}
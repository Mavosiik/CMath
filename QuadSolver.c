#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double solve(double quad, double lin, double abs, double disc)
{
    double ans;
    ans = (-lin + disc) / (2*quad);

    return ans;
}

double solvelin(double lin, double abs)
{
    double ans;
    ans = abs/lin;

    return ans;
}

int main(int argc, char *argv[])
{
    if (argc < 4 || argc > 4)
    {
        printf("ERROR: insufficient amount of arguments, expected amount is 3\n");
        return -1;
    }

    double quad,lin,abs,disc;

    quad = atof(argv[1]);
    lin = atof(argv[2]);
    abs = atof(argv[3]);

    if (quad == 0)
    {
        double ans;
        ans = solvelin(lin,abs);

        printf("Equation has 1 answer and it's: %.2f\n",ans);
        return 0;
    }
    

    disc = lin*lin - 4*quad*abs;

    if (disc < 0)
    {
        printf("Equation does not have an answer\n");
        return 0;
    }

    if (disc == 0)
    {
        double ans;
        ans = solve(quad,lin,abs,disc);
        printf("Equation has 1 answer and it's: %.2f\n",ans);
        return 0;
    }

    if (disc > 0)
    {
        double ans1,ans2;
        disc = pow(disc, 1/2);
        ans1 = solve(quad,lin,abs,disc);
        ans2 = solve(quad,lin,abs,-disc);
        printf("Equation has 2 answers and they're: %.2f and %.2f\n",ans1,ans2);
        return 0;
    }

    return 0;
}
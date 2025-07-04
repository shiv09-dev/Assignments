#include<stdio.h>
//#include<math.h>

int factorial(int);
int factorial(int n)
{
    int fact = 1, i;

    // Loop from 1 to N to get the factorial
    for (i = 1; i <= n; i++) 
	{
        fact *= i;
    }

    return fact;
}

int main() {
    int n,ans;
    printf("Enter number you want to find factorial for : ");
    scanf("%d",&n);
    
    ans = factorial(n);
    printf("Factorial of %d is %d", n, ans);
   // return 0;
}

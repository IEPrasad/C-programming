#include<stdio.h>

int main (void)
{
    // taking the input from the user
    int n;
    printf("Enter an integer smaller than 10 : ");
    scanf("%d", &n);

    // checking whether the input is less than 10
    if ( n > 10 )
    {
        printf("The integer you entered is greater than 10");
    }
    // printing the pattern for user input = 4
    else if ( n == 4)
    {
        // printing the right angled triangle
        for ( int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("%d", i);
            }
            printf("\n");
        }
    }
    // printing the value for user input =6
    else if ( n == 6)
    {
        // printing the upper part of the structure
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        // printing the lower part of the structure
        for ( int i = 1; i <= n; i++)
        {
             for ( int j = i; j < n; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    }
    //printing the value for user input = 7
    else if ( n == 7 )
    {
      //printing the upper part of the structure
      for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                printf(" ");
            }
            for (int j = i; j <= n; j++)
            {
                printf("*");
            }
            printf("\n");
        }
        // printing the lower part of the structure
        for ( int i = 2; i <= n; i++)
        {
             for ( int j = i; j <= n; j++)
            {
                printf(" ");
            }
            for (int j = 0; j < i; j++)
            {
                printf("*");
            }
            printf("\n");
        }
    } else if 
    {
        printf("b");
  }
}


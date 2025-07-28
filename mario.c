// utilize both cs50.h and stdio.h
#include <cs50.h>
#include <stdio.h>

// letting the system know we will be using this function later
void print_row(int spaces, int bricks);

int main(void)
{
    // n is equal to the number provided in the prompt
    int n;
    do
    {
        n = get_int("Height: ");
    }
    // Ensures the number is a positive int between 1 and 8
    while (n < 1 || n > 8);

    // For loop starting the count at 0 and running until i is not less than n
    for (int i = 0; i < n; i++)
    {
        // Calling the function and defining what spaces equals and what bricks equals
        print_row(n - (i + 1), i + 1);
    }
}

void print_row(int spaces, int bricks)
{
    // Printing the spaces portion
    for (int j = 0; j < spaces; j++)
    {
        printf(" ");
    }

    // Printing the "bricks"
    for (int col = 0; col < bricks; col++)
    {
        printf("#");
    }
    // Ensures everytime we run through the loop, it starts on a new line
    printf("\n");
}

// this is my final version of mario.c

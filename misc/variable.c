#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string answer = get_string("What's your name? ");
    printf("hello, %s\n", answer);
}


// #include <cs50.h>
// #include <stdio.h>

// int main(void)
// {
//     int x = get_int("What's X? ");
//     int y = get_int("What's Y? ");
//     printf("");

//     if (x < y)
//     {
//         printf("x is less than y\n");
//     }
//     else if (x > y)
//     {
//         printf("x is greater than y\n");
//     }
//     else
//     {
//         printf("x is equal to y\n");
//     }
// }

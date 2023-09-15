#include <stdio.h>
#include <cs50.h>

int main(void)
{
  string answer = get_string("answer? ");
  for (int i = 0; i < 4; i++)
  {
    printf("[?]");
  }
  printf("%s\n", answer);
}

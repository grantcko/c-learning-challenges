#include <stdio.h>
#include <string.h>
#include <cs50.h>

int main(void)
{
  // get 2 strings
  char *s = get_string("s: ");
  char *t = get_string("t: ");

  // compare strings addresses
  if (strcmp(s, t) == 0)
  {
    printf("Same\n");
  }
  else
  {
    printf("not the same :/\n");
  }
}

#include <stdio.h>
#include <cs50.h>

int main(void)
{
  char *tmp  = "potato!";
  printf("go to location at pointer and print character: %c\n", *tmp);
  printf("print the whole string: %s\n", tmp);
  printf("value of pointer: %p\n" , tmp);
  printf("address of pointer: %p\n" , &tmp);

  string s = "carrot!";
  printf("change the electrical charges of the silicon transistors starting at somewhere that is freed up - go to hexidecimal value of the location of the first byte taken up by the string carrot - print the characters until you hit a \\0: %s\n", s);

}

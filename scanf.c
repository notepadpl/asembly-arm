#include <stdio.h>
int main ()
{
  char str [80];
  int i;
  printf ("Enter a hexadecimal number: ");
  scanf ("%x",&i);
  printf ("You have entered %#x (%d).\n",i,i);  
  return 0;
}
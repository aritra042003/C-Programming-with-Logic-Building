#include <stdio.h>
int main()
{
  printf("one\n");
  goto l1;
  printf("two\n");
  printf("three\n");
  l1:
  printf("four\n");
  printf("five\n");

}
 

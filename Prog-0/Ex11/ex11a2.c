#include <stdio.h>
void print_function1(void);
void print_function2(int);
void print_function3(void);
void print_function4(void);
    
int main()
{
  print_function1();
  print_function2(1000);
  print_function3();

  return 0;
}

void print_function1(void)
{
  printf("Hey guys!\n");
}

void print_function2(int num)
{
  printf("I just hit %d followers on instagram!\n", num);
}

void print_function3(void)
{
  printf("Thank you so much!\n");
 print_function4();
}

void print_function4(void)
{
  printf("See you!\n");
}


#include <stdio.h>
int main(void)
{
  int number, number1;
  for(number = '0'; number <= '9'; number++){
    for(number1 = '0'; number1 <= '9'; number1++){
      putchar(number);
      putchar(number1);
      if(number1 == '9' && number == '9'){
	putchar('\n');
      }else{
	putchar(',');
      }
    }
  }
  return (0);
}

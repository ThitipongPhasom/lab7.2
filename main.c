#include <stdio.h>

int main(void) {
int i[5] = {1,4,9,16,25};
printf("%d", i[2]);
  return 0;
}


/*#include <stdio.h>

int main(void) {
  char name[] = "COMPUTER";
  printf("%c\n",name[0]);
 printf("%c\n",name[4]);
 printf("%c\n",name[3+4]);
 printf("%c\n",name[8]);
  return 0;
}*/


/*#include <stdio.h>

int main(void) {
int number[] = {3,7,12,24,45};
number[3] = number[1];
number[1] = number[3];
printf("%d\n",number[3]);
  return 0;
}*/


/*#include <stdio.h>

int main(void) {
int number[] = {3,7,12,24,45}, temp;
temp = number[3];
number[3] = number[1];
number[1] = temp;
printf("%d\n",number[1]);
printf("%d\n",number[3]);
  return 0;
}*/


/*#include <stdio.h>

int main(void) {
long cpu[][2] = { 8088,4,8086,4,80286,10,80386,20,80486,40 };
  return 0;
}*/
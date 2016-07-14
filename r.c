#include<stdio.h>
  #include<conio.h>
  int main()
  {
  char a[10];
  printf("Enter value of a:");
  scanf("%s",&a);
  strrev(a);
  printf("the reverse string is: %s",a);
  getch();
  return 0;
  }

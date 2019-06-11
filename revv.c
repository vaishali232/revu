
#include<stdio.h>
int main()
{
  char s[10000];
  int n;
  scanf("%s%n",s,&n);
  for(int i=n-1;i>=0;i--)
  {
    printf("%c",s[i]);
  }
}

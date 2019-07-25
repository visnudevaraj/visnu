#include <stdio.h>
#include<string.h>
int main()
{
 char a[20];
   int i=0;
  scanf("%[^\n]s",a);
 for(i=0;i<strlen(a);i+=2)
 {
 a[i]-=32;  
  }
 printf("%s",a);
 return 0;  
}

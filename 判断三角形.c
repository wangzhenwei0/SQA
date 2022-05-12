#include <stdio.h>
main()
{
 int a,b,c;
 printf("请输入三边长：");
 scanf("%d%d%d",&a,&b,&c);
 if (a+b>c && b+c>a && a+c>b)
 {
  printf("能构成三角形"); 
 }
 else
 {
  printf("不能构成三角形"); 
 }
} 

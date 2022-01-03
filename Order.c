#include <stdio.h>
#include <stdlib.h>
  int order3(int num);//Q3

int main()
{
  int x;
  while(x>=0){
    printf("Please enter a number with three digits: \n");
    scanf("%d" , &x);

    if(x>99 && x<1000)
        printf("%d \n", order3(x));



  }
  printf("end");





}

int order3(int num){ // 953
    int a,b,c;
 a=num%10;//3
 b=(num/10)%10;//5
 c=num/100;//9

  if(a>=b&&b>=c)
  return (c*100)+(b*10)+a;
  if(a>=c&&c>=b)
  return (b*100)+(c*10)+a;
  if(b>=a&&a>=c)
  return (c*100)+(a*10)+b;
  if(b>=c&&c>=a)
  return(a*100)+(c*10)+b;
  if(c>=a&&a>=b)
  return (b*100)+(a*10)+c;
  if(c>=b&&b>=a)
  return (a*100)+(b*10)+c;


  return num;



}



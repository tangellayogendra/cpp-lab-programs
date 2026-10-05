#include<stdio.h>
int main()
{
	int number,d,reverse=0 ;
	scanf("%d",&number);
	  int number1=number;
	  while(number>0){
	  	d=number%10;
	  	reverse = reverse*10+d;
	  	number/=10;
	  }
	  printf("reverse number is%d",reverse);

	  if(reverse==number1){printf("PALIMDROME");
	  }
	  else printf("NOT A PALIMDROME");
}

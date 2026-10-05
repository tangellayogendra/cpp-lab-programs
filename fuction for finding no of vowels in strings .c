#include<stdio.h>
#include<string.h>
int isvowel(char ch)
{
   char isvowel[]="aeiouAEIOU";

	for(int i=0;i<10;i++){
		if(isvowel[i] == ch)return 1;
	}
	return 0;
}
int getVowelCount(char S[])
{
	int vc=0;
	for(int i=0;i<strlen(S); i++){
		if(isVowel(S[i])) vc++;
	}
	return vc;
}
int main (){
	char S1[100];
	char S2[100];
	scanf("%s",S1);
	scanf("%s",S2);
}

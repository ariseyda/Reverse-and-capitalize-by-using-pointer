#include<stdio.h>
#include<string.h>
#define size 20

//Receive a word as input. 
//Reverse the word, capitalize its letters and save into another string. 
//Display both first and last strings. Use pointers. 

int main(){
	
  char word[size];
  printf("Enter a word:");
  scanf("%s",word);
  int l=strlen(word);
  char *p=word;
  int i;
  for(i=0;i<l;i++){
  	p[i]=toupper(word[i]);
  }
  
  for(i=0;i<l/2;i++){
  	int *temp=p[l-1-i];
  	p[l-1-i]=p[i];
  	p[i]=temp;
  }	
  printf("%s",p);
	
	return 0;
}

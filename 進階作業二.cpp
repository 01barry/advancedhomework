#include <iostream>
#include<stdio.h> 
#include<stdlib.h>  
#include<string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {

{
  char T[5000];
  char ouput; 
  printf("½Ð¿é¤J¦r¦ê¡G"); 
  while(scanf("%s",T)==1) 
      {
         printf("Âà´«¦r¦ê¡G",ouput);
   int G,H=strlen(T); 
         for(G=H-1;G>=0;G--)
               printf("%c",T[G]); 
      } 
 system("pause");

	return 0;
}

}

#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main()
{
   
int dls;
char s[300];
int far[100]={1};

printf("Vvedite text\n");
gets(s);
dls = strlen(s);
int i=0,j=0,k=0,n=0,f=0;
char ms[50][400],c[400];
 while(n<=dls)
 
    {
 
while((s[n]!=',' && s[n]!= '.' && s[n]!= '1' && s[n]!= '2' && s[n]!= '3' && s[n]!= '4' && s[n]!= '5' && s[n]!= '6' 
   && s[n]!= '7' && s[n]!= '8' && s[n]!= '9' && s[n]!= '0' && s[n]!= '-' && s[n]!= '=' && s[n]!= '!' && s[n]!= '@' 
   && s[n]!= '#' && s[n]!= '$' && s[n]!= '%' && s[n]!= '^' && s[n]!= '&' && s[n]!= '*' && s[n]!= '(' && s[n]!= ')'
   && s[n]!= '_' && s[n]!= '+' && s[n]!= '"' && s[n]!= '№' && s[n]!= ';' && s[n]!= ':' && s[n]!= '?' && s[n]!= '/'
   && s[n]!= '|' && s[n]!= '>' && s[n]!= '<' && s[n]!= '`' && s[n]!= '~' && s[n]!= ' '))
       {
       ms[i][j]=s[n]; 
       j++; 
       n++;
       }
    ms[i][j]='\n';//если сделать так:   ms[i][j]='\n4';   будет ведней
    j=0;
    i++;
    n++;
  
    } 
              
do
 {
 f=0;
 for(j=i-1;j>k;j--)
   { 
   if (strcmp(ms[j],ms[j-1])<0)
     { 
     strcpy(c,ms[j]);
     strcpy(ms[j],ms[j-1]);
     strcpy(ms[j-1],c);
     f=1;
     } 
   }
   k++;
 }
while(f);                     
for (j=0;j<i;j++)
puts(ms[j]);
 
    system("PAUSE");
    return EXIT_SUCCESS;
}

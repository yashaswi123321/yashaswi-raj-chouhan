#include<stdio.h>
int main()
{
char str[10],ch;
int j,n,a=0,e=0,i=0,o=0,u=0,consonant=0;
printf("enter the string\n");
gets(str);
n=strlen(str);
for(j=0;j<n;j++)
{
ch=str[j];

if(isalpha(ch)){

if(ch=='a'||ch=='A')
a++;
 else if(ch=='e'||ch=='E')
e++;
	else if(ch=='i'||ch=='I')
i++;
else if(ch=='o'||ch=='O')
o++;
else if(ch=='u'||ch=='U')
u++;
else
consonant++;
}
}
printf("frequency of a=%d\n",a);
printf("frequency of e=%d\n",e);
printf("frequency of i=%d\n",i);
printf("frequency of o=%d\n",o);
printf("frequency of u=%d\n",u);
printf("the number of vowel is=%d\n",a+e+i+o+u);
printf("frequency of consonant are=%d\n",consonant);
}

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

 main(int argc, char *argv[]) {
char ch;
printf("\nEnter a lower cased alphabet (a-z):");
scanf("%c",&ch);
if(ch<'a'||ch>'z')
printf("\nCharacter not a lower cased alphabet");
else 
switch(ch)
{
	case'a':
	case'e':
	case'i':
	case'o':
	case'u':
		printf("\nCharacter is a vowel");
		break;
	case'z':
		printf("\nLast Alphabet (z) was entered");
		break;
	default:
		printf("\nCharacter is a consonant");
		break;
}
		
}

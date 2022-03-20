#include <stdio.h>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
char ch;
printf("Enter a lower cased alphabet (A-Z)||(a-z):");
scanf("%c",&ch);
switch(ch)
{
	case'A':
	case'a':
	printf("programming language is Ada");
	break;
	case'B':
    case'b':
	printf("programming language is Basic");
	break;
	case'C':
	case'c':
	printf("programming language is COBOL");
	break;
	case'D':
	case'd':
	printf("programming language is dBASE III");
	break;
	case'F':
	case'f':
	printf("programming language is Fortran");
	break;
	case'P':
	case'p':
	printf("programming language is Pascal");
	break;
	case'V':
	case'v':
	printf("programming language is Visual C++");
	break;
	default:
	printf("\nInvalid");
	break;
	}
	return 0;
}

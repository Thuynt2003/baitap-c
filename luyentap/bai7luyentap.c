#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Check(int, int, int, int, int, int, int, int);
int Say(char);
void Break();
void Love();
int main(int argc, const char * argv[]) {
    int cctc,cntc,httc,tctc;
    int cctt,cntt,httt,tctt;
    float x;
    char i,h;
    printf("Tieu chuan ban gai:\n");
    printf("Chieu cao: ");
    scanf("%d", &cctc);
    printf("Can Nang: ");
    scanf("%d", &cntc);
    printf("1.thcs\n2.thpt\n3.dai hoc ");
    printf(" lua chon hoc thuc: ");
    scanf("%d", &httc);
    printf("1.hien lanh\n2.ngoan ngoan\n3.hoa dong\n4.kho tinh\n");
    printf("lua chon tinh cach: ");
    scanf("%d", &tctc);
    printf("Tieu chuan thuc te:\n");
    printf("Chieu cao: ");
    scanf("%d", &cctt);
    printf("Can Nang: ");
    scanf("%d", &cntt);
    printf("1.thcs\n2.thpt\n3.dai hoc ");
    printf("lua chon hoc thuc: ");
    scanf("%d", &httt);
    printf("1.hien lanh\n2.ngoan ngoan\n3.hoa dong\n4.kho tinh\n");
    printf("lua chon tinh cach: ");
    scanf("%d",&tctt);
    if(Check(cctc, cntc, httc, tctc,cctt,cntt,httt,tctt)==1)
    {
        printf("Yeu nhau ko?(y/n)\n");
        fflush(stdin);
        scanf("%c",&h);
        if(Say(h)==1)
        {
            Love();
        }else{
            Break();
        }
    }else{
        printf("Xin loi da lam phien.\n");
    }
    return 0;
}
int Check(int cctc,int cntc, int httc, int tctc, int cctt, int cntt, int httt, int tctt)
{
    int cc = abs(cctc-cctt);
    int cn = abs(cntc-cntt);
    bool ht = httc == httt;
    bool tc = tctc == tctt;
    if(cc < 5 && cn < 5 && ht && tc) {
    	return 1;
	} else {
		return 0;
	}
}
int Say(char kt)
{
    if(kt == 'Y' || kt == 'y')
    {
        return 1;
    }
    return 0;
}

void Break()
{
    printf("Lai kiep FA\n");
}
void Love()
{
    printf("Thoat e\n");
}

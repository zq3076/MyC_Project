#include <stdio.h>
#include <ctype.h>
#include <conio.h>

main()
{
/*
    //��������������
int a,b,c,max;

printf("����������INT����:\n");
scanf("%d%d%d",&a,&b,&c);


	*/
//1-3+5-7+...-99+101���
#define INC 2
int a,b,c;
c=1;
b=0;
for(a=1;a<101;a+=INC)
{
	b++;
    if(b%2==0)
    c=c+(a+2);
    else
    c=c-(a+2);
}
printf("ѭ������:%d  ���:%d\n",a,c);




}
////////////main������////////////////



















#include <stdio.h>
#include <ctype.h>
#include <conio.h>

main()
{
/*
    //输出内容中最大数
int a,b,c,max;

printf("请输入三个INT数据:\n");
scanf("%d%d%d",&a,&b,&c);


	*/
//1-3+5-7+...-99+101结果
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
printf("循环次数:%d  结果:%d\n",a,c);




}
////////////main函数外////////////////




















#include<stdio.h>
#include<stdlib.h>

int happy=0;
int power=0;

int eat();
int shui();
int dadoudou();
int cry();
int display();
int welcome();

int main()
{

    int num;
	int p_count=0;
	for(num=0;num<=100;num++)
	{
    printf("\t\t\t+---------------------------+\n");
    printf("\t\t\t+                           +\n");
    printf("\t\t\t+         welcome           +\n");
    printf("\t\t\t+           to              +\n");
    printf("\t\t\t+          game             +\n");
    printf("\t\t\t+                           +\n");
    printf("\t\t\t+                           +\n");
    printf("\t\t\t+                           +\n");
    printf("\t\t\t+---------------------------+\n");
    printf("\t\t\t系统加载中，请稍候");
		for(int j=0;j<p_count;j++)
		{
			printf(".");
		}
		p_count++;
		if(p_count==6)
		{
			p_count=0;
		}
		for(int i=0;i<8000000;i++){};
		printf("\t\t\t%d%%\n",num);
	}
	printf("\n");
	welcome();
	return 0;
}

int welcome()
{
    printf("\t\t***********************\n");
    printf("\t\t*****   1.eat     *****\n");
	printf("\t\t*****   2.shui    *****\n");
	printf("\t\t*****   3.dadoudou*****\n");
	printf("\t\t*****   4.cry     *****\n");
	printf("\t\t*****   5.energer *****\n");
	printf("\t\t*****   0.tuichu  *****\n");
	printf("\t\t***********************\n");
    int k;
    printf("\t\tplease input your choose:  \n");
    scanf("%d",&k);
    switch(k)
    {
    case 1:
        eat();
        break;
    case 2:
        shui();
        break;
    case 3:
        dadoudou();
        break;
    case 4:
        cry();
        break;
    case 5:
        display();
        break;
    case 0:
        exit (0);
        break;
    default:
        printf("PLEASE re-enter: \n");
        welcome();
        break;
    }
    return 0;
}

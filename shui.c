#include"shui.h"
#include<stdio.h>
#include<stdlib.h>


int shui()
{
    int e;
    printf("˯or��˯��1 or 2��");
    scanf("%d",&e);
    switch(e)
    {
    case 1:
     if(power <= 8)
     {
            printf("������Ҫ��Ϣһ���zzz...\n");
            power--;
     }
     else if(happy <= 8)
     {
         printf("�Ҳ����ģ�˯�������˿���zzz...\n");
         happy++;
     }
     break;
    case 2:
        if(power < 6)
            printf("�����ڻ�����˯����Ҫ�����򶹶���\n");

        break;
    dadoudou();
        }
            welcome();
            return 0;
}

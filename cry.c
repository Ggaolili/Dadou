#include"cry.h"
#include<stdlib.h>
#include<stdio.h>


int cry()
{
    if(power>=1&&power<4)
    {
        printf("����̫�����ˣ��Ҵ����ˣ��Ҳ�����\n");
        power--;
        happy--;
    }
    else
    {
        printf("��Ȼ�Ҵ����ˣ�����һ�������Ŭ����\n");
        power++;
        happy++;
    }
    welcome();
    return 0;
}

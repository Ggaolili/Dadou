#include"shui.h"
#include<stdio.h>
#include<stdlib.h>


int shui()
{
    int e;
    printf("睡or不睡（1 or 2）");
    scanf("%d",&e);
    switch(e)
    {
    case 1:
     if(power <= 8)
     {
            printf("我现在要休息一会儿zzz...\n");
            power--;
     }
     else if(happy <= 8)
     {
         printf("我不开心，睡觉会让人开心zzz...\n");
         happy++;
     }
     break;
    case 2:
        if(power < 6)
            printf("我现在还不想睡，我要继续打豆豆！\n");

        break;
    dadoudou();
        }
            welcome();
            return 0;
}

#include"cry.h"
#include<stdlib.h>
#include<stdio.h>


int cry()
{
    if(power>=1&&power<4)
    {
        printf("真是太难受了，我打输了，我不高兴\n");
        power--;
        happy--;
    }
    else
    {
        printf("虽然我打输了，但我一定会继续努力的\n");
        power++;
        happy++;
    }
    welcome();
    return 0;
}

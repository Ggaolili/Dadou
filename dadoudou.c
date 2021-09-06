#include"dadoudou.h"
#include <stdlib.h>
#include<stdio.h>

int dadoudou()
{
    int x,z;
    if(power<5)
    {
        printf("您打豆豆失败了，并且被反k了一顿！！！\n");
        power--;
        happy--;
        printf("是否找豆豆妈诉苦：1.是  2.否\n");
        scanf("%d",&x);
        switch(x)
        {
      case 1:
          {
              cry();
              break;
          }
      case 2:
        {
            welcome();
            break;
        }
      default:
        printf("please re-enter\n");
        dadoudou();
        break;
        }
    }
    else
    {
        printf("You win!!!!\n");
        happy++;
        power--;
        printf(" 是否继续打豆豆：1.是  2.否\n");
        scanf("%d",&z);
        switch(z)
        {
      case 1:
          {
              printf("看我降龙十八掌\n");
              dadoudou();
              break;
          }
      case 2:
        {
            welcome();
            break;
        }
      default:
        printf("please re-enter\n");
        dadoudou();
        break;
        }
    }
    return 0;
}

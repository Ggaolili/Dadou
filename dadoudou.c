#include"dadoudou.h"
#include <stdlib.h>
#include<stdio.h>

int dadoudou()
{
    int x,z;
    if(power<5)
    {
        printf("���򶹶�ʧ���ˣ����ұ���k��һ�٣�����\n");
        power--;
        happy--;
        printf("�Ƿ��Ҷ������߿ࣺ1.��  2.��\n");
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
        printf(" �Ƿ�����򶹶���1.��  2.��\n");
        scanf("%d",&z);
        switch(z)
        {
      case 1:
          {
              printf("���ҽ���ʮ����\n");
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

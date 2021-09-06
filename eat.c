#include"eat.h"
#include<stdio.h>
#include<stdlib.h>

int eat()
{
    int a;
    printf("\t\t\t\t\t*************************************\n");
    printf("\t\t\t\t\t*************************************\n");
    printf("\t\t\t\t\t*       欢迎来到豆豆牌自助餐厅     *\n");
    printf("\t\t\t\t\t*************************************\n");
    printf("\t\t\t\t\t*************************************\n");
    printf("\t\t\t\t\t\t【1】苹果\n");
    printf("                                               \n");
    printf("\t\t\t\t\t\t【2】蛋糕\n");
    printf("                                               \n");
    printf("\t\t\t\t\t\t【3】牛排\n");
    printf("                                               \n");
    printf("\t\t\t\t\t\t【4】米饭\n");
    printf("                                               \n");
    printf("\t\t\t\t\t\t【5】喝水\n");
    printf("                                               \n");
   /* printf("\t\t\t\t\t\t【6】查看量值\n");
    printf("                                               \n");*/
    printf("\t\t\t\t\t\t【7】返回主界面\n");
    scanf("%d",&a);
    switch(a)
    {
    case 1:
        printf("I eat a apple\n");
        happy++;
        power++;
        welcome();
       /// display();
        break;
    case 2:
        printf("I eat a cake\n");
        happy++;
        power++;
        welcome();
        ///display();
        break;
    case 3:
        printf("I eat a steak\n");
        happy++;
        power++;
        welcome();
       /// display();
        break;
    case 4:
        printf("I eat a rice\n");
        happy++;
        power++;
        welcome();
       /// display();
        break;
    case 5:
        printf("I drink water\n");
        happy++;
        power++;
        welcome();
       /// display();
        break;
   /* case 6:
        display();
        break;*/
    case 7:
        welcome();
        break;
    default:
        printf("您输入的数字有误，请再试一次\n");
        ///Sleep(900);
        eat();
        break;
    }
    if(power==10)
    {
        printf("I 'm full.\n");
    }
    if(power<=5&&power>=3)
    {
        printf("I 'm hungry!\n");
    }
    if(power>=8)
        {
            printf("I 'm sleepy!");
            shui();
        }
    return 0;
}

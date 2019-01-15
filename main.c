#include <stdio.h>

char arr[1024]; //保存敏感字符
int index = 0;  //敏感字符在数组中的储存位置
int main()
{

    printf("minganzifuguanlixitong\n");

    while (1)
    {
        printf("1---tianjiaminganzifu\n");
        printf("2---shanchuminganzifu\n");
        printf("3---chakansuoyouminganzifu\n");
        printf("4---tihuanneirongzhongdeminganzifu\n");
        printf("5---tuichu\n");

        printf("qingxunazexingyindegongnengbianhao\n");

        int code;
        scanf("%d", &code);

        if (code == 1)
        {
            printf("qingshuruyaotianjiademinganzifu\n");
            char m;
            scanf("%c", &m); //这一个scanf是把上一次的回车符从电脑中取出
            scanf("%c", &m); //这一行scanf才是用户真正的取出用户输入的敏感字符

            arr[index] = m;
            index++; //逻辑删除；将新内容存到旧内容的位置上，就表示把内容删除

            printf("tianjiachenggong,dianjihuichejixu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 2)
        {
            printf("shanchuzuihouyigeminganzifu\n");
            index--;
            printf("shanchuchenggong,dianjihuichejixu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 3)
        {
            printf("suoyouminganzifuruxia\n");
            for (int i = 0; i < index; i++)
            {
                printf("di%dgeminganzifuwei%c\n,i+1,arr[i]");
            }
            printf("xianshichenggong,dianjihuichejixu\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if (code == 4)
        {
        }
        if (code == 5)
        {
            printf("tuichuxitong\n");
            break;
        }
    }

    return 0;
}
#include <stdio.h>

char arr[1024]; //保存敏感字符
int index = 0;  //敏感字符在数组中的储存位置
int isMingan(char x)
{

    int count = 0; //该变量记录，x与每一个元素相等的次数

    //使用for循环，让x和数组中的每一个元素进行比较
    for (int i = 0; i < index; i++)
    {
        if (x == arr[i])
        {
            count++;
        }
    }

    if (count == 0)
    {
        //如果比较完成之后，没有一次相等
        return 0;
    }
    else
    {
        return 1;
    }
}
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
            printf("qingshuruyiduanyingweng：\n");
            
            char content[1024];

           
            scanf("%s",content);

           
            for(int i = 0;1;i++){
              
                if(content[i] == '\0'){
                    break;
                }

                if(isMingan(arr[i]) == 1){
                    content[i] = '*';
                }

                printf("%c",content[i]);


            }

            printf("\n");

            printf("替换完成，点击回车继续\n");
            char x;
            scanf("%c", &x);
            scanf("%c", &x);

        }
        if (code == 5)
        {
            printf("tuichuxitong\n");
            break;
        }
    }

    return 0;
}
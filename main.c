#include <stdio.h>

int main()
{
    char arr[100];
    int index = 0;
    printf("敏感字符管理系统\n");

    while (1)
    {

        int code;

        printf("1---添加敏感词\n");
        printf("2---删除最后一个敏感词\n");
        printf("3---显示全部敏感词\n");
        printf("4---替换输入内容中的敏感词\n");
        printf("5---退出系统\n");

        printf("请输入相应功能的编号\n");

        scanf("%d", &code);

        if (code == 1)
        {
            char a;
            char x;
            printf("请输入要添加的敏感字符：\n");
            scanf("%c", &a);
            scanf("%c", &a);

            arr[index] = a;
            index++;

            printf("添加成功，点击回车继续\n");
            scanf("%c", &x);
            scanf("%c", &x);
        }

        if (code == 2)
        {
            char x;
            printf("删除最后一个敏感词\n");

            index--;

            printf("删除成功，点击回车继续\n");
            scanf("%c", &x);
            scanf("%c", &x);
        }

        if (code == 3)
        {
            char x;
            int i = 0;
            printf("输出所有敏感词:\n");
            for (; i < index; i++)
            {
                printf("%c\n", arr[i]);
            }

            printf("点击回车继续\n");
            scanf("%c", &x);
            scanf("%c", &x);
        }

        if (code == 4)
        {
            char x;
            int i = 0;
            char str[200];

            printf("请输入一段文字（英文）:\n");
            scanf("%s", str);

            for (; str[i] != '\0'; i++)
            {

                char a = str[i];
                int j = 0;
                int flag = 0;
                for (; j < index; j++)
                {
                    if (a == arr[j])
                    {
                        flag = 1;
                    }
                }

                if (flag != 0)
                {

                    str[i] = '*';
                }
            }

            printf("%s\n", str);

            printf("点击回车继续\n");
            scanf("%c", &x);
            scanf("%c", &x);
        }
        if(code == 5){
            printf("点击回车退出程序\n");
            break;
        }
    }
}

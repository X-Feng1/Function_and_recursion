//模拟实现strcomp函数
#define _CRT_SECURE_NO_WARNINGS 1


/*
//首先使用常规函数
#include<stdio.h>

int my_strcomp(char x[], char y[])
{

	while (*x == *y)
	{
		x++;
		y++;
		if (*x == '\0' && *y == '\0')
			break;
	}
	if (*x == *y)
		return 1;
	else
		return 0;

}


int main()
{
	char arr[] = "abcde";
	char password[] = "";
	printf("请输入密码:");
	scanf("%s", &password);
	if (1 == my_strcomp(arr, password))
		printf("恭喜你，通过");
	else
		printf("抱歉，密码错误！");
	return 0;
}*/


//利用函数递归方法

#include<stdio.h>

int my_strcomp2(char x[], char y[])
{
	if (*x == *y)
	{
		my_strcomp2(x+1, y+1);
	}
	if (*x == '\0' && *y == '\0')
		return 1;
	else
		return 0;
}

int main()
{
	char password[] = "abcd";
	char input[] = "";
	printf("请输入密码：");
	scanf("%s", &input);
	if (1 == my_strcomp2(input, password))
		printf("恭喜你，通过了！\n");
	else
		printf("抱歉，密码错误！\n");
	return 0;
}
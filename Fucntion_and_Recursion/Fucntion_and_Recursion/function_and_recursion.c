//ģ��ʵ��strcomp����
#define _CRT_SECURE_NO_WARNINGS 1


/*
//����ʹ�ó��溯��
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
	printf("����������:");
	scanf("%s", &password);
	if (1 == my_strcomp(arr, password))
		printf("��ϲ�㣬ͨ��");
	else
		printf("��Ǹ���������");
	return 0;
}*/


//���ú����ݹ鷽��

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
	printf("���������룺");
	scanf("%s", &input);
	if (1 == my_strcomp2(input, password))
		printf("��ϲ�㣬ͨ���ˣ�\n");
	else
		printf("��Ǹ���������\n");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int ch;
	printf("请输入一个字符:\n");
	while ((ch = getchar()) != EOF)
	{
		if (ch >= 'a'&&ch <= 'z')
			printf("%c\n", ch - 32);
		else
		if (ch >= 'A'&&ch <= 'Z')
			printf("%c\n", ch + 32);
		else
		if (ch >= '0'&&ch <= '9')
			;
		else
			;
	}
	printf("\n");
	system("pause");
	return 0;
}
//思考思路：

1：看到“接受字符”很多人想到scanf语句，但是题设中不是只输入一次而且输入类型也不同（%c %d），那么定义就显得比较麻烦，所以getchar（）函数可以帮你实现

2：“。。。。可以一直。。。。”说明要使用循环结构，既然是使用循环结构，那么采用哪种循环很重要。for循环必须知道循环次数才能确定循环条件，显然在这个题目里并不适合。那么常见的while循环与getchar（）连用的形式比较贴合这个题目的要求。

很多人就想用这个。。。

while (ch = getchar() != EOF)大

{

	................

}

兄弟，那你就GG思密达啦（赋值运算符的优先级是小于关系运算符滴，如果这么做，首先进行的是getchar()！ = EOF，当你输入的不是Ctrl + z，那么ch的值恒为1，循环体就GG了）千万要 谨记优先级，本人就卡在这1个多小时

3：怎么实现大小写转换啊，ASCII码可以帮助你，小写字母与其对应的大写字母只相差32，而且字符的储存是以其对应的ASCII值来储存的，那么问题就这么解决了
-------------------- -

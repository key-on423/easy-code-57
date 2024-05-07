#include <stdio.h>
//int main()
//{
//	int a = 1, b = 3;
//	printf("a * ++b=%d", a*++b);
//}

//int main()
//{
//	char s[] = "ab\'cdefg\'", * p = s + 1;
//	printf("%c", *(p++));//先使用后++
//	printf("%s", p+2);
//	return 0;
//}

//1.main函数可以放在任意位置
//2.C语言本身没用输入输出语句
//3.格式控制符需与变量类型相匹配
//4.C语言的源程序必须通过编译和链接后，才能被计算机执行
//5.结构化程序由顺序，选择，循环三种基本结构组成

//15.
//int main()
//{
//	float a[10] = { 0.0 };
//	int i;
//	for (i = 0;i < 3;i++)
//		scanf("%f", &a[i]);//%f匹配 %d不匹配
//	for (i = 1;i < 10;i++) a[0] = a[0] + a[i];
//	printf("%f\n", a[0]);
//}


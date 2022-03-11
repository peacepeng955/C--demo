#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<errno.h>
#define square(x) ((x) * (x))
#define square_1(x) (x * x)
#include<math.h>





// /* ------------------值传递-----------------------
// 由于值传递是单向传递，传递过程中只是改变了形参的数值，并未改变实参的数值，因此并不会改变a和b原有的值。*/
// void swap(int x, int y);                    //函数声明
// void swap(int x, int y)
// {
// 	int temp;
// 	temp = x;
// 	x = y;
// 	y = temp;
// }

// int main( int argc, char *argv[] )
// {
// 	int a = 5;
// 	int b = 10;
// 	swap(a, b);                             //调用交换函数
// 	printf("交换结果为 a = %d, b = %d\n",a,b);
// 	return 0;
// }






/*------------#define宏定义------------*/

// int main(void)
// {
//    printf("square 5+4 is %d\n", square(5+4));  
//    printf("square_1 5+4 is %d\n", square_1(5+4)); 
//    return 0;
// }







// /* -----------------指针传递-----------------------

// 指针传递过程中，将a和b的地址分别传递给了x和y，在函数体内部改变了a、b所在地址的值，即交换了a、b的数值。*/
// void swap(int *x, int *y);
// void swap(int *x, int *y)
// {
// 	int temp;
// 	temp = *x;
// 	*x = *y;
// 	*y = temp;
// }

// int main( int argc, char *argv[] )
// {
// 	int a = 5;
// 	int b = 10;
// 	swap(&a, &b);                           //调用交换函数
// 	printf("交换结果为 a = %d, b = %d\n",a,b);
// 	return 0;
// }









/*----------------多维数组-----------------*/

// int main()
// {
// 	int a[3][4] = { {0, 1, 2, 3} ,
// 	                {4, 5, 6, 7} ,
// 	                {8, 9, 10, 11}  };
// 	char names[6][50]={"马超","关平","赵云","张飞","关羽","刘备"};

// 	printf("数组中元素的个数为:%lu\n",sizeof(a)/sizeof(a[0][0]));
// 	printf("数组中元素的字节长度为:%lu\n",sizeof(a));

// 	int i,j;

// 	for(i=0;i<3;i++)
// 	{
// 		for(j=0;j<4;j++)
// 		{
// 			printf("a[%d][%d]=%d\n",i,j,a[i][j]);
// 		}
// 	}
// 	for(i=0;i<6;i++)  
// 	{
// 		printf("第%d行悍将名称：%s\n",i,names[i]);
// 	}
// 	return 0;
// }








// int main()
// {
// 	int  *ptr = NULL;
// 	int  var = 20;                                         /* 实际变量的声明 */
// 	int  *ip;                                              /* 指针变量的声明 */

// 	ip = &var;                                             /* 在指针变量中存储 var 的地址 */

// 	printf("Address of var variable: %p\n", &var  );

// 	printf("Address stored in ip variable: %p\n", ip );    /* 在指针变量中存储的地址 */

// 	printf("Value of *ip variable: %d\n", *ip );           /* 使用指针访问值 */

// 	printf("ptr 的地址是 %p\n", ptr );

// 	ptr++;
// 	printf("ptr 的地址是 %p\n", ptr );
// }

/*在大多数的操作系统上，程序不允许访问地址为 0 的内存，因为该内存是操作系统保留的。然而，内存地址 0 有特别重要的意义，
它表明该指针不指向一个可访问的内存位置。但按照惯例，如果指针包含空值（零值），则假定它不指向任何东西。*/








/*------------指针的递增---------------*/
// const int MAX = 3;
 
// int main ()
// {
// 	int  var[] = {10, 100, 200};
// 	int  i, *ptr;

// 	/* 指针中的数组地址 */
// 	ptr = var;
// 	for ( i = 0; i < MAX; i++)
// 	{

// 		printf("存储地址：var[%d] = %p\n", i, ptr );
// 		printf("存储值：var[%d] = %d\n", i, *ptr );

// 		/* 移动到下一个位置 */
// 		ptr++;
// 	}
// 	return 0;
// }





// /* -----------------回调函数---------------------*/

// void populate_array(int *array, size_t arraySize, int (*getNextValue)(void))
// {
// 	for (size_t i=0; i<arraySize; i++)
// 		array[i] = getNextValue();
// }


// /* -----------------获取随机值---------------------*/

// int getNextRandomValue(void)
// {
// 	return rand();
// }


// int main(void)
// {
// 	int myarray[10];
// 	populate_array(myarray, 10, getNextRandomValue);
// 	for(int i = 0; i < 10; i++) 
// 	{
// 		printf("%d ", myarray[i]);
// 	}
// 	printf("\n");
// 	return 0;
// }






/* -----------------位域---------------------*/

// int main()
// {
// 	struct bs
// 	{
// 		unsigned a:1;
// 		unsigned b:3;
// 		unsigned c:4;
// 	}
// 	bit,*pbit;
// 	bit.a=1;                                   /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
// 	bit.b=7;                                   /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
// 	bit.c=15;                                  /* 给位域赋值（应注意赋值不能超过该位域的允许范围） */
// 	printf("%d,%d,%d\n",bit.a,bit.b,bit.c);    /* 以整型量格式输出三个域的内容 */
// 	pbit=&bit;                                 /* 把位域变量 bit 的地址送给指针变量 pbit */
// 	pbit->a=0;                                 /* 用指针方式给位域 a 重新赋值，赋为 0 */
// 	pbit->b&=3;                                /* 使用了复合的位运算符 "&="，相当于：pbit->b=pbit->b&3，位域 b 中原有值为 7，与 3 作按位与运算的结果为 3（111&011=011，十进制值为 3） */
// 	pbit->c|=1;                                /* 使用了复合位运算符"|="，相当于：pbit->c=pbit->c|1，其结果为 15 */
// 	printf("%d,%d,%d\n",pbit->a,pbit->b,pbit->c);    /* 用指针方式输出了这三个域的值 */
// }








/* -----------------文件的读写---------------------*/ 

// int main()
// {
// 	FILE *fp = NULL;
// 	char buff[255];

// 	fp = fopen("/Users/swqt/Desktop/peace.txt", "w+");
// 	fprintf(fp,"peace11        peace22\n");
// 	fputs("987654321\n",fp);

// 	fclose(fp);


// 	fp = fopen("/Users/swqt/Desktop/peace.txt", "r+");
// 	fscanf(fp, "%s", buff);
// 	printf("1: %s\n", buff );

// 	fgets(buff, 255, (FILE*)fp);
// 	printf("2: %s\n", buff );

// 	fgets(buff, 255, (FILE*)fp);
// 	printf("3: %s\n", buff );

// 	fclose(fp);
// }










/* -----------------错误的处理---------------------*/ 

// int errno ;
 
// int main ()
// {
// 	FILE *pf;
// 	char buff[255];
// 	pf = fopen ("/Users/swqt/Desktop/peace.txt", "r+");
// 	if (pf == NULL)
// 	{
// 		fprintf(stderr, "错误号: %d\n", errno);
// 		perror("通过 perror 输出错误");
// 		fprintf(stderr, "打开文件错误: %s\n", strerror(errno));
// 	}
// 	else
// 	{
// 		fgets(buff, 255, (FILE*)pf);
// 		printf(" %s\n", buff );
// 		fclose (pf);
// 	}
// }











// /* -----------------计算器---------------------*/ 

// int main()
// {
// 	char operator;
// 	double firstNumber,secondNumber;

// 	printf("输入操作符 (+, -, *,): ");
// 	scanf("%c", &operator);

// 	printf("输入两个数字: ");
// 	scanf("%lf %lf",&firstNumber, &secondNumber);

// 	switch(operator)
// 	{
// 		case '+':
// 		printf("%.1lf + %.1lf = %.1lf",firstNumber, secondNumber, firstNumber + secondNumber);
// 		break;

// 		case '-':
// 		printf("%.1lf - %.1lf = %.1lf",firstNumber, secondNumber, firstNumber - secondNumber);
// 		break;

// 		case '*':
// 		printf("%.1lf * %.1lf = %.1lf",firstNumber, secondNumber, firstNumber * secondNumber);
// 		break;

// 		case '/':
// 		printf("%.1lf / %.1lf = %.1lf",firstNumber, secondNumber, firstNumber / secondNumber);
// 		break;

// 		default:
// 		printf("Error! operator is not correct");
// 	}

// 	return 0;
// }







// /* -----------------数组的传递---------------------*/ 

// void ArrayCopy(char* ori, char* cop, char Length)
// {
// 	char loop;
// 	for(loop = 0; loop < Length; loop++) 
// 	{
// 		*cop++ = *ori++;
// 	}
// }


// int main() 
// {
// 	char original[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
// 	char *copiedOne=original;
// 	char copiedTwo[10];
// 	int loop;
// 	int Length;

// 	Length = sizeof(original);
// 	printf("%d\n", Length);
// 	printf("元素数组 -> 拷贝后的数组 \n");
// 	for(loop = 0; loop < sizeof(original); loop++) 
// 	{
// 		printf("   %2d        %2d\n", original[loop], copiedOne[loop]);
// 	}
// 	ArrayCopy(original,copiedTwo, Length);

// 	copiedTwo[9] = 20;
// 	printf("值传递：\n");
// 	printf("值传递更改数据后，只有拷贝的数组中的元素被更改： \n");
// 	printf("元素数组 -> 拷贝后的数组 \n");
// 	for(loop = 0; loop < sizeof(original); loop++) 
// 	{
// 		printf("   %2d        %2d\n", original[loop], copiedTwo[loop]);
// 	}

// 	copiedOne[9] = 50;
// 	printf("地址传递：\n");
// 	printf("地址传递更改数据后，原数组元素与拷贝的数组中的元素同时被更改： \n");
// 	printf("元素数组 -> 拷贝后的数组 \n");
// 	for(loop = 0; loop < sizeof(original); loop++) 
// 	{
// 		printf("   %2d        %2d\n", original[loop], copiedOne[loop]);
// 	}
// 	return 0;
// }

#include<time.h>
#define N 100000

int prime[100000];

void fun(){
	int i,j;

	for (int i = 2; i <= N; i++)
	{
		prime[i] = 1;
	}
	for (int i = 2; i <= N; i++)
	{
		if(prime[i]){
			printf(" %d ", i);
		}
		for (int j = i+i; j <= N; j=j+i)
		{
			prime[j]=0;
		}
	}
}

int main() 
{
	// FILE *fp;
	// char c;
	// fp = fopen(__FILE__,"r");
	// do {
	// 	c = getc(fp);
	// 	putchar(c);
	// }
	// while(c != EOF);
	// fclose(fp);
	// return 0;

	// int n,j;
	int t1= clock();

	fun();
	int t2 = clock();

	printf("\n 运行时间：%d \n", t2-t1);















}



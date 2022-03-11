#include<stdio.h>
#define N 10 


#if !defined (NEWLINE)
   #define NEWLINE "\n"
#endif


#ifndef message_for
   #define  message_for(a, b)  \
       printf(#a " and " #b ": We love you!\n")
 #endif   
// 宏延续运算符（\）
// 字符串常量化运算符（#）
// 标记粘贴运算符（##）




void Line();
void say()
{
	printf("Peace\n");
	printf("good good study\nday day up\n");
    Line();

    float a =5;
    float b =10;
    if(a!=b)
    {
    	printf("对\n");
    }
    else
    {
    	printf("错\n");
    }
    printf("\n");
}






void printScore(int score[])
{ 
    int i;
    for(i=0;i<N;i++)
    {
        printf("%d ",score[i]);
    }
    printf("\n");
}



//分数升序排序
void sort(int score[])
{
    int i,j;
    for(i=N-2;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            if(score[j]>score[j+1])
            {
                int temp;
                temp = score[j];
                score[j] = score[j+1];
                score[j+1]=temp;
            }
        }
    }
    printScore(score);
    printf("\n");
}




//计算考试总分
int getTotalScore(int score[])
{
    int sum = 0;
    int i;
    for(i=0;i<N;i++)
    {
        sum+=score[i];
    }
    return sum;
}



//计算平均分 
int getAvgScore(int score[]) 
{
    return getTotalScore(score)/N;
} 

//计算最高分
int getMax(int score[])
{
    int max = -1;
    int i;
    for(i=0;i<N;i++)
    {
        if(score[i]>max)
        {
            max = score[i];
        }
    }
    return max;
}


//计算最低分 
int getMin(int score[]) 
{
    int min =100; 
    int i; 
    for(i=0;i<N;i++)
    {
        if(score[i]< min)
        {
            min = score[i];
        }
    }
    return min;
} 




// 組合排序

int zuhe()
{
  int i,j,k;
  for(i=1;i<4;i++)
  {
  /*以下为三重循环*/
    for(j=1;j<4;j++)
    {
      for (k=1;k<4;k++)
      {
        if (i!=k&&i!=j&&j!=k)
        {
        /*确保i、j、k三位互不相同*/
            printf("%d,%d,%d\n",i,j,k);
        }
      }
    }
  }
  printf("\n");
  return 0;
}






           /*冒泡排序:把每一个数与后一个数相比较，较大的数往后移位*/
int maopao()
{

    int arr[]={16,7,4,2,36,8,5,18};
    int i,j;
    int n;
    n=sizeof(arr)/sizeof(arr[0]);
    // printf("%d\n",n);
    // printf("%.0f\n",arr[0]);
    // printf("************排队前*************\n");
    // for(i=0;i<n;i++)
    // {
    //     printf("%.0f  ",arr[i]);
    // }
    // printf("\n");

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                int buff;
                buff = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = buff;
            }
        }
    }
    // printf("\n************排队hou************\n");
    for(i=0; i<n; i++)
    {
        printf("%d  ",arr[i]);
    }
    printf("\n");
    printf("%d\n",arr[0]);
    printf("\n");
    return 0;
}








/*北京市出租车打车计费规则如下：
1. 每公里单价计费2.3元
2. 起步价13元(包含3公里)
3. 晚上23点(含)至次日凌晨5点(不含)打车，每公里单价计费加收20%。
4. 每次乘车加收1元钱的燃油附加税。
小明每天上下班都要打车，公司和家的距离为12公里，上午上班时间为9点，下午下班时间为6点。
请编写一个小程序计算小明每天打车的总费用。*/

float taxicost(int miles,int time)
{
    float money;
    if(miles<=3)
    {
        money=14;
    }
    else
    {
        if(time>=23 || time<5)
        {
            money=14+(miles-3)*2.3*1.2;
        }
        else
        {
            money=14+(miles-3)*2.3;
        }
    }
    return money;
}






void fn1()
{
    static int x;
    for(x=1;x<=5;x++)
    {
        printf("fn: pb=%d\n",x);
    }   
}
void fn2()
{
    static int x=0;
    x++;
    printf("fn: x=%d\n",x);
    // x++;
}







/*猴子第一天摘下N个桃子，当时就吃了一半，还不过瘾，就又多吃了一个。第二天又将剩下的桃子吃掉一半，又多吃了一个。以后每天都吃前一天剩下的一半零一个。
到第10天在想吃的时候就剩一个桃子了,问第一天共摘下来多少个桃子？并反向打印每天所剩桃子数。*/

int getNumber(int n)
{ 
    int num; 
    if(n==10) 
    { 
        return 1; 
    } 
    else
    {
        num = (getNumber(n+1)+1)*2; 
        printf("第%d天所剩桃子%d个\n", n, num); 
    } 
    return num; 
} 







void aixin()
{
    for(float y=1.5f;y>-1.5f;y-=0.1f){
        for(float x=-1.5f;x<1.5f;x+=0.05f){
            float a=x * x + y * y - 1;
            putchar(a * a * a - x * x * y * y * y <= 0.0f? '*':' ');
        }
        putchar('\n');
    }
}




/*--------三目运算符，先判断表达式1的值是否为真，如果是真的话执行表达式2；如果是假的话执行表达式3----------*/

int sanmu()
{   
    double Money =12.0;    // 定义口袋里的钱
    double cost =10.0;     // 定义打车费用
    printf("能不能打车回家:%c\n",Money>=cost?'y':'n');
    printf("\n");
    return 0;

}







/*--------斐波那契----------*/

int fib(int n)
{
    if(n==1)
    {
        return 0;
    }
    if(n==2)
    {
        return 1;
    }
    else
    {
        return fib(n-1) + fib(n-2);
    }
}


void fbnq()
{
    int i, n = 10;
    for(i=1;i<=n;i++)
    {
        printf("%d\t", fib(i));
    }
    printf("%s\n", NEWLINE);
}






/*---------三角形----------*/
void xingxing()
{
    int i,j,k;
    int n=6;
    for(i=1;i<n;i++)
    {
        for(j=1;j<n-i;j++)
        {
            printf(" ");
        }
        for(k=0;k<2*i-1;k++)
        {
            printf("*");
        }
    printf("\n");
    }
    printf("\n");
}



/*--------九九乘法表---------*/
void chengfa()
{
    int i,j,k;
    for(i=1;i<10;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d*%d=%d ",i,j,k=i*j);
        }
        printf("\n");
    }
    printf("\n");
}





/*--------获取数组长度--------*/
void length()
{
   int arr[]={0,1,2,3,4,5};
   int length = sizeof(arr)/sizeof(arr[0]);
   printf("数组的长度为:%d\n",length);
   printf("%s",NEWLINE);
}





/*---------预定义宏----------*/
void dingYiHong()
{
   printf("File :%s\n", __FILE__ );
   printf("Date :%s\n", __DATE__ );
   printf("Time :%s\n", __TIME__ );
   printf("Line :%d\n", __LINE__ );
   printf("ANSI :%d\n", __STDC__ );
   printf("%s",NEWLINE);
}




void gongshu()
{
    int n1 =10, n2 =15;
    int abc, i;
    int gcd;
    for(i=1; i<=n1 && i<=n2; i++)
    {
        if(n1%i==0 && n2%i==0)
            abc = i;
    }
    printf("%d 和 %d 的最大公约数是 %d\n", n1, n2, abc);



    gcd = (n1>n2) ? n1 : n2;
    while(1)
    {
        if(gcd%n1==0 && gcd%n2==0)
        {
            printf("%d 和 %d 的最小公倍数是 %d\n", n1, n2, gcd);
            break;
        }
        gcd++;
    }
}






void attribute()
{
    char line[50] = "at!@#$tri123bute";
    int i,j;
    for(i=0; line[i] !='\0'; i++)
    {
        while(!((line[i]>='A' && line[i]<='Z') || (line[i]>='a' && line[i]<='z') || line[i]=='\0'))
        {
            for(j=i; line[j]!='\0'; j++)
            {
                line[j] = line[j+1];
            }
        }
    }
    printf("%s\n", line);
}



























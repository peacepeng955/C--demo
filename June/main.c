
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include <ctype.h>


//int main()
//{
//    enum color { red=1, green, blue };
//
//    enum color favorite_color;
//
//    printf("请输入你喜欢的颜色: (1. red, 2. green, 3. blue): ");
//    scanf("%d", &favorite_color);
//
//    switch (favorite_color)
//    {
//        case red:
//            printf("你喜欢的颜色是红色");
//            break;
//        case green:
//            printf("你喜欢的颜色是绿色");
//            break;
//        case blue:
//            printf("你喜欢的颜色是蓝色");
//            break;
//        default:
//            printf("你没有选择你喜欢的颜色");
//    }
//
//    return 0;
    
//}


//-------------------------------       /Users/swqt/Desktop/peace.txt






//void fangfa1(int n);
//void fangfa2(int n);
//
//
//int main()
//{
//    char change;
//    printf("十进制化二进制请按1,二进制化十进制请按2: ");
//    scanf("%c",&change);
//
//    int n;
//    printf("请输入:");
//    scanf("%d",&n);
//
//    if(change=='1')
//    {
//        fangfa1(n);
//    }
//    if(change=='2')
//    {
//        fangfa2(n);
//    }
//    return 0;
//}
//
//
//void fangfa1(int n)
//{
//    int a=0,i=1,yushu;
//    while(n!=0)
//    {
//        yushu = n%2;
//        n /= 2;
//        a += yushu * i;
//        i *= 10;
//    }
//    printf("%d\n", a);
//}
//
//
//
//void fangfa2(int n)
//{
//    int a=0,i=0,yushu;
//    while(n!=0)
//    {
//        yushu = n%10;
//        a += yushu * pow(2,i);
//        n /=10;
//        i++;
//    }
//    printf("%d\n", a);
//}




//---------------------------------------题目：输入某年某月某日，判断这一天是这一年的第几天？


//int main(){
//    int i,year,month,day,sum=0;
//    printf("输入日期");
//    scanf("%d-%d-%d",&year,&month,&day);
//    int monthday[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
//    if(year%400 ==0 || (year%4 == 0 && year%100 !=0)){
//        monthday[1] = 29;
//    }
//    for(i=0;i<month-1;i++){
//        sum = sum + monthday[i];
//    }
//    sum += day;
//    printf("一年的第%d天",sum);
//}




//---------------------------------------题目：输入三个整数x,y,z，请把这三个数由小到大输出。
//int main(){
//    int a,b,c,d,e;
//    int i,j;
//    int temp;
//    int n;
//    printf("请输入:");
//    scanf("%d,%d,%d,%d,%d",&a,&b,&c,&d,&e);
//    int arr[5];
//    arr[0] = a;
//    arr[1] = b;
//    arr[2] = c;
//    arr[3] = d;
//    arr[4] = e;
//    n = sizeof(arr)/sizeof(arr[0]);
//    for(i=0;i<n-1;i++){
//        for(j=0;j<n-1-i;j++){
//            if(arr[j]>arr[j+1]){
//                temp = arr[j+1];
//                arr[j+1] = arr[j];
//                arr[j] = temp;
//            }
//        }
//    }
//    for(i=0;i<n;i++){
//        printf("%d ",arr[i]);
//    }
//}




//---------------------------------------题目：输出9*9口诀。
//int main(){
//    int i,j;
//    for(i=1;i<=9;i++){
//        for(j=1;j<=i;j++){
//            printf("%d*%d=%d\t",i,j,i*j);
//        }
//        printf("\n");
//    }
//}




//---------------------------------------斐波那契
//int fib(int n){
//    if(n==1)
//        return 1;
//    if(n==2)
//        return 1;
//    else
//        return fib(n-1) + fib(n-2);
//}
//
//
//int main(){
//    int i;
//    for(i=1;i<=20;i++){
//        printf("%d,",fib(i));
//    }
//}



//---------------------------------------题目：判断101到200之间的素数。
//int main()
//{
//    int i,j;
//    printf("101到200的素数有：\n");
//    for (i = 101; i <= 200; i++)
//    {
//        for (j = 2; j < i ; j++)
//        {
//            if (i%j == 0)
//            {
//                break;
//            }
//            else if(j > (i / 2))
//            {
//                printf("%d\t", i);
//                break;
//            }
//        }
//    }
//}





//---------------------------------------题目：打印出所有的"水仙花数"，所谓"水仙花数"是指一个三位数，其各位数字立方和等于该数 本身。例如：153是一个"水仙花数"，因为153=1的三次方＋5的三次方＋3的三次方。

//int main(){
//    int i,x,y,z;
//    for(i=100;i<1000;i++)
//    {
//        x = i%10;
//        y = (i/10)%10;
//        z = (i/100)%10;
//        if(i == x*x*x+y*y*y+z*z*z)
//            printf("%d\t",i);
//    }
//}




//---------------------------------------题目：输入两个正整数m和n，求其最大公约数和最小公倍数。
//int main(){
//    int a,b,c,i;
//    printf("输入两个数:");
//    scanf("%d,%d",&a,&b);
//    c = a<b?a:b;
//    for(i=c;i>1;i--){
//        if (a%i==0 && b%i==0) {
//            printf("最大公约数是%d\n",i);
//            printf("最小公倍数是%d\n",a*b/i);
//            break;
//        }
//    }
//}



//---------------------------------------题目：求s=a+aa+aaa+aaaa+aa...a的值，其中a是一个数字。
//int main()
//{
//    int a,n,t,s=0;
//    printf("输入:");
//    scanf("%d,%d",&a,&n);
//    t = a;
//    while (n>0)
//    {
//        s += t;
//        a = a*10;
//        t += a;
//        n--;
//    }
//    printf("%d\n",s);
//}



//---------------------------------------题目：猴子吃桃问题：猴子第一天摘下若干个桃子，当即吃了一半，还不瘾，又多吃了一个第二天早上又将剩下的桃子吃掉一半，又多吃了一个。以后每天早上都吃了前一天剩下的一半零一个。到第10天早上想再吃时，见只剩下一个桃子了。求第一天共摘了多少。












//---------------------------------------C 库宏 void assert(int expression) 允许诊断信息被写入到标准错误文件中。换句话说，它可用于在 C 程序中添加诊断。
int main(){
    int a;
    char str[50];
    printf("输入a的值:");
    scanf("%d",&a);
    assert(a>10);
    printf("a的值为%d\n",a);

    printf("输入字符串:");
    scanf("%s",str);
    assert(str != NULL);
    printf("输入的字符串为:%s\n",str);
}






















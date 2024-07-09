/*1.Write a program to find the Nth term of the Fibonacci series.
main()
{
    int n,t1=0,t2=1,nextTerm=0,i;
    printf("Enter the nth value:");
    scanf("%d",&n);

    if(n==0 || n==1)
        printf("%d",n);
    else
        nextTerm=t1+t2;
    for(i=3;i<=n;i++)
    {
        t1=t2;
        t2=nextTerm;
        nextTerm=t1+t2;
    }
    printf("Nth term = %d",t2);
}
*/

/*2.Write a program to find N terms of Fibonacci series.
main()
{
    int n,i;
    int t1=0,t2=1;
    int nextTerm=t1+t2;

    printf("Enter the number of number of terms:");
    scanf("%d",&n);

    printf("Fibonacci series : %d %d",t1,t2);

    for(i=3;i<=n;i++)
    {
        printf(" %d ",nextTerm);
        t1=t2;
        t2=nextTerm;
        nextTerm=t1+t2;
    }
}
*/

/*3.Write a program to check whether a given number is there in the Fibonacci series or not.
main()
{
    int n,a=0,b=1,c;
    printf("Enter a number:");
    scanf("%d",&n);

    if(n==a || n==b)
        printf("Fibonacci Series");

    c=a+b;
    while(c<n)
    {
        a=b;
        b=c;
        c=a+b;
    }
    if(c==n)
        printf("Fibonacci Series");
    else
        printf("Not a Fibonacci series");
}
*/

/*4.Write a program to calculate HCF of two numbers.
main()
{
    int i,num1,num2,min,hcf=1;
    printf("Enter two numbers:");
    scanf("%d%d",&num1,&num2);

    min=(num1<num2)?num1:num2;
    for(i=1;i<=min;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            hcf=i;
        }
    }
    printf("HCF of %d and %d is %d",num1,num2,hcf);
}
*/

/*5.Write a program to check whether two given numbers are co-prime numbers or not.
main()
{
    int a,b,i,min;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    min=a<b?a:b;
    for(i=2;i<=min;i++)
    {
        if(a%i==0 && b%i==0)
            break;
    }
    if(i==min+1)
        printf("%d and %d are co-prime numbers",a,b);
    else
        printf("%d and %d are not co-prime numbers",a,b);
}
*/

/*6.Write a program to print all prime numbers under 100.
main()
{
    int n,i,count;
    printf("Prime numbers under 100 are:");
    for(n=1;n<=100;n++)
    {
        count = 0;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                count++;
                break;
            }
        }
        if(count==0 && n!=1)
        {
            printf("%d ",n);
        }
    }
}
*/

/*7.Write a program to print all Prime numbers between two given numbers.
main()
{
    int l,u,flag,i;
    printf("Enter two numbers:");
    scanf("%d%d",&l,&u);
    printf("Prime numbers between %d and %d are:",l,u);

    while(l<u)
    {
        flag=0;
        if(l<=1)
        {
            l++;
            continue;
        }
        for(i=2;i<=l/2;i++)
        {
            if(l%i==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            printf("%d ",l);
        l++;
    }
}
*/

/*8.Write a program to find nextPrime number of a given number.
main()
{
    int n,i,j,flag=0,out;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=n+1;i<=100;i++)
    {
        flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            printf("Next Prime Number is %d",i);
            break;
        }
    }
}
*/

/*9.Write a program to check whether a given number is an Armstrong number or not.
#include<stdio.h>
#include<math.h>
int main()
{
    int originalNum,num,lastdigit,digit,sum;
    printf("Enter a number:");
    scanf("%d",&num);
    sum=0;
    originalNum=num;
    digit=(int) log10(num)+1;

    while(num>0)
    {
        lastdigit=num%10;
        sum=sum+round(pow(lastdigit,digit));
        num=num/10;
    }
    if(originalNum==sum)
    {
        printf("%d is an Armstrong number",originalNum);
    }
    else
    {
        printf("%d is not an Armstrong number",originalNum);
    }
}
*/

//10.Write a program to print all Armstrong numbers under 1000.
#include<stdio.h>
#include<math.h>
int main()
{
    int i,sum,num,count=0;
    printf("All Armstrong number under 1000 are:");

    for(i=1;i<=1000;i++)
    {
        num=i;

        while(num!=0)
        {
            num/=10;
            count++;
        }
        num=i;
        sum=pow(num%10,count) + pow((num%100-num%10)/10,count) + pow((num%1000-num%100)/100,count);

        if(sum==i)
        {
            printf("%d ",i);
        }
        count=0;
    }
}

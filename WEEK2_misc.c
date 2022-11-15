#include<stdio.h>
#include<math.h>
#include<stdlib.h>
//Write a c program for series (i)
//Assingment 1
void lab1_1()
{
    printf("To the number you want to count:");
    int n; scanf("%d",&n); int ans= 0;
    for (int i = 1; i <= 2*n+1; i+=2)
    {
        ans+= pow(i,2);
    }
    printf("\nAnswer:%d",ans);
    
}
//Series 1(ii)
void lab1_2()
{
    printf("To the number you want to count:");
    int n; scanf("%d",&n); int ans= 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++) ans+=j;
    }
    printf("\nAnswer:%d",ans);
}
//Assingment 2 sheet (10)
void lab2()
{
    printf("Enter the number:");
    int n; scanf("%d",&n); int ans[n*n],j=0;
    if (n<10) {printf("%d",n+10); return;}
    for (int i = 9; i > 1; i--)
    {
        while (n%i==0)
        {
            n = n/i; ans[j++]=i;
        }
    }
    if (n>10) printf("Doesn't exist!");
    for (int i = j-1; i >= 0; i--) printf("%d",ans[i]);
}
//find the sum of all integer lying between 1 to n**
void lab3()
{
    printf("Enter the number:");
    int n; scanf("%d",&n); int sum = 0;
    for (int i = abs(n); i >= 1; i--) sum+= i;
    if (n<0) printf("%d",sum*(-1)+1);
    else printf("%d",sum);
}
//Assignment 12:Scholarship which i aint getting:(
void lab4()
{
    //named = personal = avg == 4.5
    //high = avg >= 4.5 && avg!=5
    //none = avg < 4.5
    printf("Enter the number of exams:");
    int n; scanf("%d",&n); int sum = 0,a[n];
    printf("Enter grades:");
    for (int i = 0; i < n; i++) {scanf("%d",&a[i]); sum+=a[i];}
    if (sum/n==5) {printf("Named");return;}
    else printf((float)(sum/n)>=4.5?"High":"None");
}
int main()
{
    lab4();
    return 0;
}
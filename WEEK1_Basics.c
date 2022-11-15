#include<stdio.h>
#include<math.h>
//ASSINGMENT 1
//Calculate Distance in 2/3D space
//many printf statement have been ommited
void lab1()
{
    printf("ENTER 1 for 2D 2 for 3D\n");
    int dimension; scanf("%d",&dimension);

    switch (dimension)
    {
    case 1:
    printf("ENTER FIRST CORDINATE x1, y1:");
    int x1,y1; scanf("%d %d",&x1,&y1);
    printf("ENTER SECOND CORDINATE x2, y2\n");
    int x2,y2; scanf("%d %d",&x2,&y2);
    int distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    printf("DISTANCE: %d",distance);
        break;
    
    case 2:
    printf("ENTER FIRST CORDINATE x1, y1, z1:");
    int a1,b1,c1; scanf("%d %d %d",&a1,&b1,&c1);
    printf("ENTER SECOND CORDINATE x2, y2, z1:");
    int a2,b2,c2; scanf("%d %d %d",&a2,&b2,&c2);
    int distance_3D = sqrt(pow(a2 - a1, 2) + pow(b2 - b1, 2) + pow(c2 - c1, 2));
    printf("DISTANCE: %d",distance_3D);
    break;
    default:
    printf("PLEASE ENTER VALUE FIRST");
        break;
    }
}
//find volume/area/perimeter of sqare/rectangle/triangle/circle
//ASSINGMENT 2
void lab2()
{
    printf("ENTER 1 for sqare 2 for rectangle 3 for triangle 4 for circle\n");
    int dimension; scanf("%d",&dimension);

    switch (dimension)
    {
    case 1:
        printf("YOU HAVE CHOSEN sqare\n");
        printf("ENTER PARAMETERS:");
        int q;scanf("%d",&q);
        printf("VOLUME: %d\nAREA: %d\nPERIMETER: %d",q*q*q,q*q,4*q);
        break;
    
    case 2:
        printf("YOU HAVE CHOSEN rectangle\n");
        printf("ENTER PARAMETERS:");
        int w,e,r;scanf("%d %d %d",&w,&e,&r);
        printf("VOLUME: %d\nAREA: %d\nPERIMETER: %d",w*e*r,w*e,2*(w+e));
        break;

    case 3:
        printf("YOU HAVE CHOSEN triangle\n");
        printf("ENTER PARAMETERS:");
        int t,y,u;scanf("%d %d %d",&t,&y,&u);//running low on time will fix later
        printf("VOLUME: %.3f\nAREA: %.3f\nPERIMETER: %d",.5*t*y*u,.5*t*u,t+y+u);
        break;

    case 4:
        printf("YOU HAVE CHOSEN circle\n");
        printf("ENTER PARAMETERS:");
        int i;scanf("%d",&i);
        printf("VOLUME: %.3f\nAREA: %.3f\nPERIMETER: %.3f",(3.0/4)*3.1423*i*i,3.1423*i*i,3.1423*2*i);
        break;
    default:
        break;
    }
}
//Swap two number
//Assingment 3
void lab3()
{
    printf("ENTER TWO NUMBER:");
    int a,b; scanf("%d %d",&a,&b);
    printf("BEFORE: %d %d\n",a,b);
    int temp = a; a = b ; b =temp;
    printf("AFTER: %d %d\n",a,b);
}
//CONVERT AN INTGER IN HOURS<MINTUES<SECONDS
//Assingmrnt 4
void lab4()
{
    printf("ENTER THE INTEGER:");
    int integer; scanf("%d",&integer);
    int hr = integer/3600; int min = (integer - 3600 * hr)/60;
    int sec = (integer - 3600 * hr - min * 60);
    printf("HOURS:%d\nMINTUES:%d\nSECONDS:%d",hr,min,sec);
}
//find minimun maximum between 2 or 3 number
//Assingment 5
void lab5()
{
    printf("Enter the number of integers:");
    int n; scanf("%d",&n); int a[n];
    for (int i = 0; i < n; i++)scanf("%d",&a[i]);
    int max = 0, min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (max < a[i]) max = a[i];
        if (min > a[i]) min = a[i];
    }
    printf("Maximum: %d\nMinimum: %d",max,min);
}
//find all the root of a quadric equation
//Assingment 6
void lab6()
{
    printf("A quadric equation look like this Ax2+ Bx + C.\n");
    printf("Enter A,B,C:");
    int a,b,c;scanf("%d %d %d",&a,&b,&c);
    int determinant = b*b - 4*a*c;
    int first_root = -b + sqrt(determinant) / 2*a;
    int second_root = -b - sqrt(determinant) / 2*a;
    if (determinant > 0) printf("First root: %d\n second root: %d",first_root,second_root);
    else printf("Roots are imaginary");
    //do i need to do more?
}
//Converting cellsius to fahrenheit vice versa
//Assingment 7
void lab7()
{
    printf("Enter celsiius or fahrenheit degree:\n");
    printf("Fahrenheit to celcius 1\ncelcius to Fahrenheit 2: ");
    int n; scanf("%d",&n);
    float degree; scanf("%f",&degree);
    float frenhrit = (9.0/5) * degree + 32;
    float celsius = (5.0/9) * (degree - 32);
    switch (n)
    {
    case 2:
        printf("fahrenheit: %f",frenhrit);
        break;
    case 1:
        printf("celicus: %f",celsius);
        break;
    default:
        break;
    }
}
//Calculating marks/gpa of 5 sub : total, average, percentage
void lab8()
{
    printf("Marks 1\nGpa 2\n");
    int n; scanf("%d",&n); float a[n],sum = 0;
    int num; scanf("%d",&num);
    printf("enter marks or gpa\n");
    switch (n)
    {
    case 1:
        for (int i = 0; i < num; i++) {scanf("%f",&a[i]);sum+= a[i];}
        printf("total: %f\naverge: %f\npercentage: %f",sum,sum/n,sum/100);
        break;
    
    case 2:
        for (int i = 0; i < num; i++) {scanf("%f",&a[i]);sum+= a[i];}
        printf("total: %f\naverge: %f\npercentage: %f",sum,sum/n,sum/5);
        break;
    default:
        break;
    }
  
}
int main()
{
    lab8();
    return 0;
}


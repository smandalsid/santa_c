// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int i=0, j, ct=0;
//     for(j=-3;j<=3;j++)
//     {
//         if((j<=0) && (i++))
//         {
//             ct=ct+j;
//         }
//     }
//     ct=ct+i;
//     printf("%d %d", i, ct);
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>

// int fun(int a[], int, int);

// int main()
// {
//     int p[10]={1,0,1,0,1,0,1,0,1,0};
//     int r=fun(p,8,2);
//     printf("%d", r);
//     return 0;
// }

// int fun(int q[], int n, int r)
// {
//     int c=q[0], i;
//     for(i=1;i<=n-1;i++)
//     {
//         c=r*c+q[i];
//         printf("%d\n", c);
//     }
//     return c;
// }

// #include<stdio.h>
// #include<stdlib.h>
// int main()
// {
//     int **ar;
//     ar=(int**)malloc(3*sizeof(int*));
//     for(int i=0;i<3;i++)
//     {
//         *(ar+i)=(int*)malloc(3*sizeof(int));
//         for(int j=0;j<3;j++)
//         {
//             scanf("%d", (*(ar+i)+j));
//         }
//     }
//     printf("\n");
//     for(int i=0;i<3;i++)
//     {
//         int prod=1;
//         int diff=-100;
//         for(int j=0;j<3;j++)
//         {
//             if(*(*(ar+i)+j)%2!=0)
//             {
//                 prod*=*(*(ar+i)+j);
//             }
//             else
//             {
//                 if(diff==-100)
//                 diff=*(*(ar+j)+i);
//                 else
//                 diff=diff-*(*(ar+j)+i);
//             }
//         }
//         printf("product: %d\n", prod);
//         printf("difference: %d\n", diff);
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>

// int f(int x, int *p, int **pp)
// {
//     int y,z;
//     **pp+=3;z=**pp;
//     *p+=2;y=*p;
//     x+=1;
//     printf("**pp: %d\n", **pp);
//     printf("*p: %d\n", *p);
//     printf("x: %d\n", x);
//     printf("y: %d\n", y);
//     printf("z: %d\n", z);

//     printf("\n\n");
//     return x+y+z;
// }

// void main()
// {
//     int p, *q, **r;
//     p=10, q=&p, r=&q;
//     printf("%d", f(p,q,r));
// }

// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     float c;
//     scanf("%f", &c)   ;
//     float s;
//     scanf("%f", &s);
//     printf("%f", (c*s)/60);
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     float t;
//     float s=1100;
//     scanf("%f", &t);
//     printf("%.2f", (s*t/5280));
//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>

int main()
{
    for (int i=0;i<3;i++)
    for(int j=0;j<3;j++)
    {
        printf("%d %d\n", i, j);
    }
    return 0;
}
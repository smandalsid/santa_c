// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int ar[10]={9,6,4,8,1,7,4,3,0,2};
//     int i,j;
//     int *smol;
//     int temp;
//     int *ptr1;
//     ptr1=ar;
//     for(i=0;i<10;i++)
//     {
//         smol=(ptr1+i);
//         for(j=i;j<10;j++)
//         {
//             if(*(ptr1+j)<*(smol))                
//             {
//                 smol=ptr1+j;
//             }
//         }
//         temp=*(ptr1+i);
//         *(ptr1+i)=*smol;
//         *smol=temp;
        
//     }

//     ptr1=ar;
//     for(i=0;i<10;i++)
//     {
//         printf("%d ", *(ptr1+i));
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int mat1[2][2]={{1,2},{3,4}};
//     int mat2[2][2]={{1,2},{3,4}};
//     int mat3[2][2];
//     for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<2;j++)
//         {
//             *(*(mat3+i)+j)=*(*(mat1+i)+j)+*(*(mat2+i)+j);
//         }
//     }

//     for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<2;j++)
//         {
//             printf("%d ", *(*(mat3+i)+j));
//         }
//         printf("\n");
//     }
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int tot=0;
//     int mat1[2][2]={{1,2},{3,4}};
//     int mat2[2][2]={{1,2},{3,4}};
//     for(int i=0;i<2;i++)
//     {
//         for(int j=0;j<2;j++)
//         {
//             tot=tot+*(*(mat1+i)+j)+*(*(mat2+i)+j);
//         }
//     }

//     printf("%d\n", tot);
//     return 0;
// }

// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
//     int mat[3][3]={{1,2,3}, {4,5,6}, {7,8,9}};
//     int temp;
//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<=i;j++)
//         {
//             temp=*(*(mat+i)+j);
//             *(*(mat+i)+j)=*(*(mat+j)+i);
//             *(*(mat+j)+i)=temp;
//         }
//     }

//     for(int i=0;i<3;i++)
//     {
//         for(int j=0;j<3;j++)
//         {
//             printf("%d ", *(*(mat+i)+j));
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include<stdio.h>
#include<stdlib.h>

int main()
{
    
    return 0;
}
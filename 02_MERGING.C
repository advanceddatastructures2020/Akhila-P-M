#include<stdio.h>
#include<conio.h>
void main()
{
int array1[50],array2[50],array3[100],i,j,k=0,m,n;
clrscr();
printf("Enter the size of first array");
scanf("%d",&m);
printf("Enter the sorted elements of first array\n");
for(i=0;i<m;i++)
{
scanf("%d",&array1[i]);
}
printf("Enter the size of second array");
scanf("%d",&n);
printf("Enter the sorted elements of second array\n");
for(i=0;i<n;i++)
{
scanf("%d",&array2[i]);
}
i=0;
j=0;
while(i<m&&j<n)
{
if(array1[i]<array2[j])
{
array3[k]=array1[i];
i++;
}
else
{
array3[k]=array2[j];
j++;
}
k++;
}
if(i>=m)
{
while(j<n)
{
array3[k]=array2[j];
j++;
k++;
}
}
if(j>=n)
{
while(i<m)
{
array3[k]=array1[i];
i++;
k++;
}
}
printf("\n after merging:\n");
for(i=0;i<m+n;i++)
{
printf("\n%d",array3[i]);
}
getch();
}

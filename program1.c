#include<stdio.h>
void main()
{
void read(int[],int);
void print(int[],int);
void sort(int[],int);
void merge(int[],int[],int[],int,int);
int a[20],b[20],c[40],n1,n2;
printf("Enter the no.of first array[1-20]:");
scanf("%d",&n1);
read(a,n1);
printf("Enter the no.of second array[1-20]:");
scanf("%d",&n2);
read(b,n2);
sort(a,n1);
sort(b,n2);
merge(a,b,c,n1,n2);
printf("first array sorted:\n");
print(a,n1);
printf("\nsecond array sorted:\n");
print(b,n2);
printf("\n merged array:\n");
print(c,n1+n2);
}
void read(int a[],int n)
{
int i;
printf("Enter %d elements:\n",n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
return;
}
void sort(int a[],int n)
{
int i,j,temp;
for(i=0;i<n-1;i++)
for(j=i+1;j<n;j++)
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
return;
}
void merge(int a[],int b[],int c[],int n1,int n2)
{
int i=0,j=0,k=0;
while(i<n1 && i<n2)
if(a[i]<b[j])
c[k++]=a[i++];
else
c[k++]=b[j++];
while(i<n1)
c[k++]=a[i++];
while(j<n2)
c[k++]=b[j++];
return;
}
void print(int a[],int n)
{
int i;
for(i=0;i<n;i++)
printf("%d,",a[i]);
return;
}

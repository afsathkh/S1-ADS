#include<stdio.h>
int main(){
int a[100],b[100];
int n1,n2,i,j,k,total,temp;
printf("How many in first array:");
scanf("%d",&n1);
printf("Enter first array:\n");
for(i=0;i<n1;i++){
scanf("%d",&a[i]);
}
printf("How many in second array:");
scanf("%d",&n2);
printf("Enter second array:\n");
for(i=0;i<n2;i++){
scanf("%d",&b[i]);
}
total=n1+n2;
k=0;
for(i=n1;i<total;i++){
a[i]=b[k];
k++;
}
for(i=0;i<total;i++){
for(j=0;j<total-1;j++){
if(a[j]>a[j+1]){
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}
}
}
printf("Merged+Sorted array:\n");
for(i=0;i<total;i++){
printf("%d\n",a[i]);
}
return 0;
}


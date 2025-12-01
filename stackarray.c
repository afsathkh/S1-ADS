#include<stdio.h>
#include<stdlib.h>
int main(){
int stack[100],top=-1,opt,data,i;
while(1){
printf("\n1 PUSH\n2 POP\n3 PEEK\n4 DISPLAY\n5 EXIT\n");
printf("Choose option:");
scanf("%d",&opt);
if(opt==1){
printf("Enter data:");
scanf("%d",&data);
top++;
stack[top]=data;
printf("Pushed %d",data);
}
else if(opt==2){
printf("Popped %d\n",stack[top]);
top--;
}
else if(opt==3){
 printf("Top is %d\n",stack[top]);
}
else if(opt==4){
printf("Stack:\n");
for(i=0;i<=top;i++) printf("%d\n",stack[i]);
}
else if(opt==5){
exit(0);
}
else printf("Invalid option\n");
}
return 0;
}

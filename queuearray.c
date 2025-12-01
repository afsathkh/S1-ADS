#include<stdio.h>
#include<stdlib.h>
int main(){
int queue[20];
int front=-1,rear=-1;
int opt,value,i;
while(1){
printf("\n1 ENQUEUE\n2 DEQUEUE\n3 DISPLAY\n4 EXIT\n");
printf("Choose option:");
scanf("%d",&opt);
if(opt==1){
printf("Enter value:");
scanf("%d",&value);
if(front==-1 && rear==-1){
front=0;
rear=0;
queue[rear]=value;
printf("Inserted %d\n",value);
}
else{
rear++;
queue[rear]=value;
printf("Inserted %d\n",value);
}
}
else if(opt==2){
if(front==rear){
printf("Deleted %d\n",queue[front]);
front=-1;
rear=-1;
}
else{
printf("Deleted %d\n",queue[front]);
front++;
}
}
else if(opt==3){
printf("Queue elements:");
for(i=front;i<=rear;i++){
printf("%d ",queue[i]);
}
printf("\n");
}
else if(opt==4){
exit(0);
}
else{
printf("Invalid option\n");
}
}
return 0;
}

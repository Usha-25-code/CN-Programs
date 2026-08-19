#include<stdio.h>
int main(){
int windowsize,totalframes,i;
int frames[50];
printf("Enter window size:");
scanf("%d",&windowsize);
printf("Enter no.of frames to transmit:");
scanf("%d",&totalframes);
printf("\n Enter %d frames:",totalframes);
for(i=1;i<totalframes;i++){
scanf("%d",&frames[i]);
}
printf("\n sliding winding protocol stimulation \n");
printf("Sender sends %d frame at a time & waits for acknowledgement . \n\n",windowsize);
for(i=1;i<=totalframes;i++){
printf("%d",frames[i]);
if(i%windowsize==0){
printf("\n acknowledgement of above is recieved by sender \n\n");
}
}
if(totalframes%windowsize!=0){
printf("\n acknowledgement of above frames is recieved by sender \n");
}
return 0;
}

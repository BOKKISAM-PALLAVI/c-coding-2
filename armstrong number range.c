#include<stdio.h>
int main(){
int n,rem,t1,t2,c=0,sum=0;
scanf("%d",&n);
for(int i=1;i<=n;i++){
        sum=0;
c=0;
t1=i;
t2=i;
while(t1!=0){
rem=t1%10;
c++;
t1/=10;
}
while(t2!=0){
rem=t2%10;
sum=sum+pow(rem,c);
t2/=10;
}
if(sum==i){
printf("%d ",i);
}
}
}

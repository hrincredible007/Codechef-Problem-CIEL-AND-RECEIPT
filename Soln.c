#include<stdio.h>
#include<math.h>
int main(){
    int t;
    scanf("%d",&t);
   
    while(t--){
        int p,i,count=0,j;
        scanf("%d",&p);
        while(p>2048){
            count++;
            p-=2048;
        }
        while(p!=0){
   
        for(i=0;i<13;i++){
            if(pow(2,i)>p){
                count++;
                break;   
            }
           
        }
        j=i-1;
        p=p-pow(2,j);
       
    }
        printf("%d\n",count);   
       
    }
    return 0;
}

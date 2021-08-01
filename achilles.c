/* in this code I was not allowed by my professor to use the c functions 
nor was I allowed to create my own */
#include<stdio.h>

#define MAX 1000000

int main(){
int n=0, ar=2, die=2, count=0,eku=0, ariku=1, x=0, y=0, a=0, b=0 ,c=0 , tmp=0, counter1=0, counter2=1, loop=0;
for(ar=2; ar<=MAX; ar++){
    n=ar;
    die=2;
    count=0;
    ariku=1;          //ariumos ekeueton, posoi  ekeuetes einai
    eku=0;               // o  ekuetis
    b=0;
    a=0;
    counter1=0;
    counter2=2;
    loop=0;
    while(n != 1){          // oso o ariumos den einai isos me to 1
        if(n%die==0){
            n=n/die;
            eku++;            // o ariumos toy ekueti
            if(n==1){
                b=eku;
                counter1++;
            }
            if(eku==2)
               	 count++;    // count ton ekueti poy einai>1
        }
        else{
            if (eku!=0){
                ariku++;       // ariumos ekueton
                if(loop==0){
                    a=eku;
                    counter1++;
                }else{
                    b=eku;
                    counter1++;
           		}
                loop++;
            }
            if(die<5){           // to bhmata toy diereti
                die++;
            }else{
                die=die+2;
            }
            eku=0;
        }
        if( (counter1==counter2) || (n==1) ){
            y=b;
            x=a;
            if(x>y){
                tmp=x;
                x=y;
                y=tmp;
            }
            while(x!=0){
                tmp=x;
                x=y%x;
                y=tmp;
            }
            a=y;
            counter2++;
        }
    }
    
    if( (count==ariku) && (ariku>=2) && (y==1)  ){
        printf("powerfull = %d\n",ar);
        c++;
    }
}
printf("count = %d\n",c);
}
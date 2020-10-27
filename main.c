#include <stdio.h>
#include <stdlib.h>
int n[10];
int donut=1;

int varmi(int s1,int s2){
    int a;
for(a=0;a<s2;a++){
    if(s1==n[a]){
       printf("ERROR:%d is already on the list:\n",s1);
       donut=0;
    }
}
return donut;
}
int kaydir(int s1,int s2){
    int j,k,b,q;
    n[s2]=s1;
    for(k=0;k<=s2;k++){
        if(n[s2]<n[k]){
            b=n[k];
            n[k]=s1;
            for(j=s2-1;j>=k+1;j--){
                   q=n[j];
                n[j+1]=q;
            }
            n[k+1]=b;
        }
    }
}

yaz(int x1){
    int p;
printf("Current List = ");
for(p=0;p<=x1;p++){
    printf("%d ",n[p]);
}
printf("\n");
}

int main()
{
int i,sayi;
int a=1;
 for(i=1;i<=10;i++){
    printf("Enter the %d. number:",i);
    scanf("%d",&sayi);
    if(i==1 && sayi>0){
        n[0]=sayi;
        printf("Current List = %d\n",n[0]);
    }
    if(sayi>0 && i>1){
        varmi(sayi,a);
        if(donut!=0){
            kaydir(sayi,a);
            yaz(a);
            a=a+1;
        }
        if(donut==0){
            i=i-1;
            donut=1;
        }

    }
    if(sayi<=0){
        printf("ERROR: %d is not positive\n",sayi);
        i=i-1;
    }

 }
printf("!!!The End!!!");
 return 0;
}

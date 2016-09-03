#include<stdio.h>
#include<stdlib.h>

int lonely_integer(int a[],int n){
    int i,t=a[0];
    for(i=1;i<n;i++){
        t=t^a[i];
    }
    return (t);
}

int main(){
    int n,*a,i,res;
    FILE *fp;
    fp=freopen("read.txt","r",stdin);
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    fclose(fp);
    res=lonely_integer(a,n);
    fp=freopen("write.txt","w",stdout);
    printf("%d",res);
    fclose(fp);
    return 0;
}

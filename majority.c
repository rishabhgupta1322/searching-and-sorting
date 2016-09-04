#include<stdio.h>
#include<stdlib.h>

int majority(int a[],int n){
    int i,c,maj=0,j;
    for(i=0;i<n;i++){
        c=1;
        for(j=i+1;j<n;j++){
            if(a[i]==a[j]){
                c++;
            }
        }
        if(c>maj){
            maj=c;
        }
    }
    if(maj>n/2){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    int *a,n,i,c;
    FILE *fp;
    fp=freopen("read.txt","r",stdin);
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    fclose(fp);
    c=majority(a,n);
    fp=freopen("write.txt","w",stdout);
    if(c==0){
        printf("majority not exsist");
    }
    else{
        printf("majority exsist");
    }
    return 0;
}

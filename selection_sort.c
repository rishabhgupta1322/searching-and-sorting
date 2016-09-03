#include<stdio.h>
#include<stdlib.h>

int selection_sort(int a[],int n){
    int i,j,t,pos;
    for(i=0;i<n;i++){
        t=a[i];
        for(j=i+1;j<n;j++){
            if(t>a[j]){
                t=a[j];
                pos=j;
            }
        }
        a[pos]=a[i];
        a[i]=t;
    }
}

int main(){
    int n,*a,i;
    FILE *fp;
    fp=freopen("read.txt","r",stdin);
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    fclose(fp);
    selection_sort(a,n);
    fp=freopen("write.txt","w",stdout);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    fclose(fp);
    return 0;
}

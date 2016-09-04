#include<stdio.h>
#include<stdlib.h>


void diff(int a[],int k){
    int i,diff;
    FILE *fp;
    fp=freopen("write.txt","w",stdout);
    diff=a[k]-a[0];
    for(i=1;i<k-1;i++){
        if(diff<a[k]-a[i]){
            diff=a[k]-a[i];
        }
    }
    printf("%d",diff);
    fclose(fp);
}

int max(int a[],int n){
    int i,max_element,c=0;
    max_element=a[0];
    for(i=1;i<n;i++){
        if(max_element<a[i]){
            max_element=a[i];
            c=i;
        }
    }
    return c;
}

int main(){
    int *a,n,i,index;
    FILE *fp;
    fp=freopen("read.txt","r",stdin);
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    fclose(fp);
    index=max(a,n);
    diff(a,index);
    return 0;
}

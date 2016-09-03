#include<stdio.h>
#include<stdlib.h>

void insertion_sort(int a[],int n){
    int i,j,t;
    for(i=1;i<n;i++){
        t=a[i];
        j=i-1;
        while((j>=0)&&(t<a[j])){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=t;
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
    insertion_sort(a,n);
    fp=freopen("write.txt","w",stdout);
    for(i=0;i<n;i++){
        printf("%d ",a[i]);
    }
    fclose(fp);
    return 0;
}

#include<stdio.h>

int max_freq_element(int a[], int n){
    int i,j=0,max;
    for(i=0;i<n;i++){
        a[a[i]%n]+=n;
    }
    max=a[0];
    for(i=1;i<n;i++){
        if(a[i]>max){
            max=a[i];
            j=i;
        }
    }
    return j;
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
    res=max_freq_element(a,n);
    fp=freopen("write.txt","w",stdout);
    printf("%d",res);
    fclose(fp);
    return 0;
}

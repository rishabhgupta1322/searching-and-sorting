#include<stdio.h>
#include<stdlib.h>

void sum_of_numbers(int a[],int n,int num){
    int i,j,k,c=0;
    FILE *fp;
    fp=freopen("write.txt","w",stdout);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                if(a[i]+a[j]+a[k]==num){
                    printf("%d %d %d",a[i],a[j],a[k]);
                    c=1;
                    exit(0);
                }
            }
        }
    }
    if(c==0){
        printf("numbers not found");
    }
    fclose(fp);
}

int main(){
    int *a,n,i,k;
    FILE *fp;
    fp=freopen("read.txt","r",stdin);
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    fclose(fp);
    sum_of_numbers(a,n,k);
    return 0;
}

#include<stdio.h>
#include<stdlib.h>

void square_of_numbers(int a[],int n){
    int i,j,k,c=0;
    FILE *fp;
    fp=freopen("write.txt","w",stdout);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            for(k=0;k<n;k++){
                if((a[i]*a[i])+(a[j]*a[j])==(a[k]*a[k])){
                    printf("%d %d %d",i+1,j+1,k+1);
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
    int *a,n,i;
    FILE *fp;
    fp=freopen("read.txt","r",stdin);
    scanf("%d",&n);
    a=(int *)malloc(sizeof(int)*n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    fclose(fp);
    square_of_numbers(a,n);
    return 0;
}

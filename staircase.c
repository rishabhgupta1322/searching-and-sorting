#include <stdio.h>

int main(){
    int n,i,j;
    FILE *fp;
    fp=freopen("read.txt","r",stdin);
    scanf("%d",&n);
    fclose(fp);
    fp=freopen("write.txt","w",stdout);
    for(i=n;i>=1;i--){
        for(j=1;j<=n;j++){
            if(i>j)
                printf(" ");
            else
                printf("#");
        }printf("\n");
    }
    fclose(fp);
    return 0;
}

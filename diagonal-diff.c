#include<stdio.h>
#define max 500

int diagonal_diff(int a[][max],int n){
    int i,p_dia=0,s_dia=0,diff;
    for(i=0;i<n;i++){
        p_dia=p_dia+a[i][i];
        s_dia=s_dia+a[n-i-1][i];
    }
    diff=p_dia-s_dia;
    if(diff<0){
        diff=diff*(-1);
    }
    return diff;
}

int main(){
    int a[max][max],n,i,j,diff;
    FILE *fp;
    fp=freopen("read.txt","r",stdin);
    scanf("%d",&n);
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    fclose(fp);
    diff=diagonal_diff(a,n);
    fp=freopen("write.txt","w",stdout);
    printf("%d",diff);
    fclose(fp);
    return 0;
}

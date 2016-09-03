#include<stdio.h>

int main(){
    int a[3],b[3],i,alicescore=0,bobscore=0;
    FILE *fp;
    fp=freopen("read.txt","r",stdin);
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        scanf("%d",&b[i]);
    }
    fclose(fp);
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            alicescore++;
        }
        else if(a[i]<b[i])
        {
            bobscore++;
        }
    }
    fp=freopen("write.txt","w",stdout);
    printf("%d %d",alicescore,bobscore);
    fclose(fp);
    return 0;
}

#include<stdio.h>
#include<string.h>

int main(){
    char a[11];
    int i;
    FILE *fp;
    fp=freopen("read.txt","r",stdin);
    scanf("%s",a);
    fclose(fp);
    if((strstr(a,"AM"))&&(a[0]=='1'&&a[1]=='2')){
            a[0]='0';
            a[1]='0';
    }
    if(strstr(a,"PM")){
        if(a[0]=='1' && a[1]=='2'){
            a[0]='1';
            a[1]='2';
        }
        else{
            a[0]+=1;
            a[1]+=2;
        }
    }
    fp=freopen("write.txt","w",stdout);
    for(i=0;i<8;i++){
        printf("%c",a[i]);
    }
    fclose(fp);
    return 0;
}

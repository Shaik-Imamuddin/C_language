#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int val,pos;
    scanf("%d%d",&val,&pos);
    for(int i=n;i>pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=val;
    n++;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
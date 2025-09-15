#include<stdio.h>
int main(){
    int arr[3][3]={{10,20,30},{40,50,60},{70,80,90}};//DWI
    
    //while using declaration with intialization
    //compiler will automatically counts the no.of rows in the array
    //it is mandatory to pass column size in the array declaration.
    // int arr[][3] = { {1, 2, 3}, {4, 5, 6} };  


    for(int i=0;i<3;i++) {
        for(int j=0;j<3;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
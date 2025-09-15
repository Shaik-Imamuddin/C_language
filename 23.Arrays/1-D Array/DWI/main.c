#include<stdio.h>
int main(){
    int arr[5]={10, 20, 30, 40, 50};//DWI
    
    //while using declaration with intialization
    //compiler will automatically counts the no.of elements in the array
    // int arr[] = {1, 2, 3, 4, 5}; 

    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

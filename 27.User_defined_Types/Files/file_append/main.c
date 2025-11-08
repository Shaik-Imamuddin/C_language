#include<stdio.h>
int main(){
    FILE *fp;
    fp = fopen("sample.txt","a");
    if(fp==NULL){
        printf("Error Opening File.....!");
        return 1;
    }

    char str[1000];
    scanf("%[^\n]",str);

    fprintf(fp,str);
    fclose(fp);
    printf("Data Written Sucessfully...!\n");

    fp = fopen("sample.txt","r");
    if(fp==NULL){
        printf("Error Opening File.....!");
        return 1;
    }

    fscanf(fp,"%[^\n]",str);
    fclose(fp);
    printf("Reading Data From File:\n");
    printf("%s",str);
    return 0;
}
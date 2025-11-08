#include<stdio.h>
int main(){
    FILE *fp;
    char str[100];

    fp = fopen("sample.dat","wb");
    if(fp == NULL) {
        printf("Error Opening File.....!");
        return 1;
    }

    scanf("%[^\n]",str);

    fwrite(str,sizeof(char),sizeof(str),fp);
    fclose(fp);
    
    printf("Data Written Successfully...!\n");

    fp = fopen("sample.dat", "rb");
    if (fp == NULL) {
        printf("Error Opening File.....!");
        return 1;
    }

    fread(str,sizeof(char),sizeof(str),fp);
    fclose(fp);

    printf("Reading Data From File:\n");
    printf("%s\n", str);

    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
    char input[100];
    printf("Enter the string:\n");
    scanf("%s",input);
    int size = strlen(input);
    int result = dfa(input,size);
    if(result == 0){
        printf("String Accepted\n");
    }
    else{
        printf("Not Accepted");
    }
    return 0;
}

int dfa(char input[],int size){
    int left = 0;
    int right = size-1;
    if(input[left]=='a' && input[right]=='a'){
        return 0;
    }
    else{
        return -1;
    }
}

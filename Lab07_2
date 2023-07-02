#include<stdio.h>
#include<string.h>

void inputStringArray(char[][100], int);
void ex02(char[][100], int);

int main(){
    int num;
    printf("Enter the number of strings: ");
    scanf("%d", &num);

    char arr[num][100];
    inputStringArray(arr, num); 
    
    int newLength = sizeof(arr) / sizeof(arr[0]);
    ex02(arr, newLength);
    
    return 0;
}

void inputStringArray(char arr[][100], int num){
    printf("Enter array elements: ");
    for (int i = 0; i < num; i++){
        scanf("%s", arr[i]);
    }
}

void ex02(char arr[][100], int newLength){
    for (int i = 0; i < newLength - 1; i++){
        for (int j = i + 1; j < newLength; j++){
            if (strcmp(arr[i], arr[j]) == 0){
                newLength--;
                for (int k = j; k < newLength; k++){
                    strcpy(arr[k], arr[k + 1]);
                }
                j--;
            }
        }
    }
    printf("The new length is: %d\n", newLength);
    for (int i = 0; i < newLength; i++){
        printf("%s ", arr[i]);
    }
}

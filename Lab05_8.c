#include <stdio.h>

void inputArray(int arr[], int size){
    int i;
    printf("Enter array elements: ");
    for (i = 0; i < size; i++){
        scanf("%d", &arr[i]);
    }
}

void ex08(int arr[], int size){ 
    int sum = 0; int max = 0; int len = 1; int count = 1; int index = 0;
    for (int i = 1; i < size; i++){
        if (arr[i] > 0 && arr[i - 1] > 0){
            count++;
            if (count == 2){
                sum = arr[i - 1];
            }
            sum += arr[i];
        
            if (max < sum){
                max = sum;
                index = i;  
                len = count;
            }
        } else {count = 1;}
        
    }
    for (int j = index - len + 1; j <= index; j++){
        printf("%d ", arr[j]);
    }
}

int main(){
    int size;
    printf("Enter array size: ");
    scanf("%d", &size);

    int arr[size];
    inputArray(arr, size);

    printf("Result: ");
    ex08(arr, size);

    return 0;
}

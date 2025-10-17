// #include <stdio.h>

// void display(int arr[], int n){
//     // traversal
//     for (int i = 0; i < n; i++){
//         printf("%d ",arr[i]);
//     }
//     printf("\n");
// }

// void insertion(int arr[],int size, int element, int capacity , int index){
//     if (size >= capacity){
//         return -1;
//     }
//     for (int i = size-1; i >= index; i--){
//         arr[i+1] = arr[i];
//     }
//     arr[index] = element;
//     return 1;
    
// }


// int main(){
//     int arr[100] = {7,8,12,27,68};
//     int size = 5 , element = 45 , index = 4;
//     display(arr,4);
//     insertion(arr, size,element, 100, index);
//     size += 1;
//     display(arr,4);

//     return 0;
// }


// insertion at the end 

#include <stdio.h>

int main() {
    int arr[100], n, i, value;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter value to insert at end: ");
    scanf("%d", &value);

    arr[n] = value;
    n++;

    printf("Array after insertion: ");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

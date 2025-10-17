#include <stdio.h>

void display(int arr[], int n){
    // traversal
    for (int i = 0; i < n; i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void deletion(int arr[],int size,int index){
    for (int i = index; i < size-1; i++){
        arr[i] = arr[i+1];
    }
    
}


int main(){
    int arr[100] = {7,8,12,27,68};
    int size = 5 ,index = 0;
    display(arr,5);
    deletion(arr, size, index);
    size -= 1;
    display(arr,4);

    return 0;
}


// delete from  begining 

// #include <stdio.h>

// int main(){
//     int arr[100],n;

//     printf("Enter the number of elements:");
//     scanf("%d",&n);

//     printf("Enter the elements:");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d",&arr[i]);
//     }

//     for (int i = 0; i < n-1; i++)
//     {
//         arr[i] = arr[i+1];
//     }
//     n--;

//     printf("Array after deleting first element:");
//     for (int i = 0; i < n; i++)
//     {
//         printf("%d",arr[i]);
//     }


//     return 0;
// }
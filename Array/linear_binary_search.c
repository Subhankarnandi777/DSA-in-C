// linear search
// #include <stdio.h>

// int linearsearch(int arr[], int size, int element) {
//     for (int i = 0; i < size; i++) {
//         if (arr[i] == element) {
//             return i;  // element found
//         }
//     }
//     return -1; // element not found
// }

// int main() {
//     int arr[] = {1, 3, 5, 6, 7, 88, 99, 4, 9, 64, 67, 90, 32, 45, 65, 55, 77};
//     int size = sizeof(arr) / sizeof(arr[0]);
//     int element = 55;

//     int searchindex = linearsearch(arr, size, element);

//     if (searchindex != -1) {
//         printf("The element %d was found at index %d\n", element, searchindex);
//     } else {
//         printf("The element %d was not found in the array\n", element);
//     }

//     return 0;
// }

//Binary search

// #include<stdio.h>
// int binarysearch(int arr[], int n, int key){
//     int low = 0 , high = n-1 , mid;
//     while (low <= high){
//         mid = (low + high)/2;

//         if (arr[mid] == key)
//             return mid;
//         else if (arr[mid] < key)
//             low = mid + 1;
//         else
//             high = mid - 1;
        
//     }
//     return -1;
    
// }
// int main(){
//     int arr[10] = {2,5,7,8,9,12,13,14,15};
//     int n = 10, key, result;

//     printf("Enter no to search:");
//     scanf("%d",&key);
//     result = binarysearch(arr,n,key);

//     if (result != -1){
//         printf("Found at an index %d",result);
//     }else{
//         printf("Not Found");
//     }
    
// }

// search a number occuring odd number of times



// ******************Basic DSA Questions on Array****************** //

// 1. Implementing Array as an abstract data type

// #include<stdio.h>
// #include<stdlib.h>

// struct myArray
// {
//     int total_size;
//     int used_size;
//     int *ptr;
// };

// void createArray(struct myArray * a,int tsize,int usize){
//     (*a).total_size = tsize;
//     (*a).used_size = usize;
//     (*a).ptr = (int *)malloc(tsize*sizeof(int));
// }

// void show(struct myArray *a){
//     for (int i = 0; i < a->used_size; i++){
//         printf("%d\n", (a->ptr)[i]);
//     }
// }
// void setValues(struct myArray *a){
//     int n;
//     for (int i = 0; i < a->used_size; i++){
//         printf("Enter element %d ",i+1);
//         scanf("%d", &n);
//         (a->ptr)[i] = n;
//     }
// }

// int main(){
//     struct myArray marks;
//     createArray(&marks, 10,5);
//     setValues(&marks);
//     printf("Entered elements are \n");
//     show(&marks);
//     return 0;
// }
// **************************************************************************//

// Operations on Array
// 1. Traversal 

// #include<stdio.h>

// void traversalOfArray(int arr[] ,int n){    
//     for(int i = 0; i < n ; i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int main(){
//     int arr[8] = {2, 34, 53, 56, 78, 1};
//     traversalOfArray(arr,6);
//     return 0;
// }
// **************************************************************************//
// 2. Insertion 

// #include<stdio.h>

// void traversalOfArray(int arr[] ,int n){    
//     for(int i = 0; i < n ; i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int InsrtingInArray(int arr[], int size , int element , int capacity , int index){
//     if(size >= capacity){
//         return -1;
//     }
//     else{
//         for(int i = size-1; i >= index; i--){
//             arr[i+1] = arr[i];
//         }
//         arr[index] = element;
//         return 1;
//     }
// }

// int main(){
//     int arr[8] = {2, 34, 53, 56, 78, 1};
//     int size = 6, element = 45, index = 3;
//     traversalOfArray(arr,size);
//     InsrtingInArray(arr, size , element , 8 , index );
//     size += 1;
//     traversalOfArray(arr,size);
//     return 0;
// }
// **************************************************************************//
// 3. Deletion

// #include<stdio.h>

// void traversalOfArray(int arr[] ,int n){    
//     for(int i = 0; i < n ; i++){
//         printf("%d ", arr[i]);
//     }
//     printf("\n");
// }

// int DeletingInArray(int arr[], int size , int index){
    
//         for(int i = index; i <= size - 1; i++){
//             arr[i] = arr[i+1];
//         }
    
// }

// int main(){
//     int arr[8] = {2, 34, 53, 56, 78, 1};
//     int size = 6, index = 3;
//     traversalOfArray(arr,size);
//     DeletingInArray(arr, size ,  index );
//     size -= 1;
//     traversalOfArray(arr,size);
//     return 0;
// }
// **************************************************************************//
// 4. Linear and Binary Search
// #include<stdio.h>

// int linearSearch(int arr[], int element, int size){
//     for(int i = 0; i< size; i++){
//         if(arr[i] == element){
//             return i;
//         }
//     }
// }
// int BinarySearch(int arr[], int element , int size){
//     int high,mid,low;
//     low = 0;
//     high = size - 1;
//     while (low <= high)
//     {
//         mid = (low + high)/2;
//         if(arr[mid] == element){
//             return mid;
//         }
//         if(arr[mid] < element){
//             low = mid + 1;
//         }
//         else{
//             high = mid - 1;
//         }
//     }
//     return -1;
// }
// int main(){
//     int arr[] = {1,24,5,6,43,544};                                                 -------------> for linearSearch
//     int arr[] = {1,2,3,4,5,6};                                                     -------------> for BinarySearch
//     int size = 6, element = 5;
//     int searchIndex = linearSearch(arr, element , size);                           -------------> for linearSearch
//     printf("The element %d was found at index %d \n", element, searchIndex);       -------------> for linearSearch
//     int searchIndex = BinarySearch(arr, element , size);                           -------------> for BinarySearch
//     printf("The element %d was found at index %d \n", element, searchIndex);       -------------> for BinarySearch
//     return 0;
// }
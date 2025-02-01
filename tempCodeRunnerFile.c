#include <stdio.h>

void sort(int *arr, int size){
    int temp;
    for(int i=0; i<size-1; i++) {
        for(int j=0; j<size-1; j++) {
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main() {
    int arr[50];
    int size;
    int ch;
    printf("\nMENU\n1. accept array\n2. sort array\n3. display array\n4. exit\n");
    while(1){
    printf("-----------------------\nEnter choice: ");
    scanf("%d", &ch);

    switch(ch) {
        case  1:
            printf("Enter size of array: ");
            scanf("%d", &size);
            printf("Enter elements for array: ");
            for(int i=0; i<size; i++) {
                scanf("%d", &arr[i]);   
            }
            break;
        
        case  2:
            sort(arr, size);
            printf("\nSorted...\n");
            break;
                
        case  3:
            printf("\nThe sorted array is: \n");
            for(int i=0; i<size; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;
        
        case  4:
            exit(0);
            printf("Exiting...\n");
            break;
        
        default:
            printf("Invalid choice!\n");
            break;
    }
}
    return  0;
}
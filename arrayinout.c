#include <stdio.h>
#include <stdlib.h>

void arrayin(int n, int *arr){
    printf("Enter array elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
}

void display(int n, int *arr){
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main(){
    int choice, n, inputDone = 0;
    int arr[100];
    
    while(1){
        printf("----Array Operations----\n");
        printf("1.Input\n2.Output\n3.Exit\nEnter Option: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("Enter array size: ");
                scanf("%d", &n);

                if(n <= 0 || n > 100){
                    printf("Invalid size! Use 1–100.\n");
                    break;
                }

                arrayin(n, arr);
                inputDone = 1;
                break;

            case 2:
                if(!inputDone){
                    printf("Please input array first!\n");
                } else {
                    display(n, arr);
                }
                break;

            case 3:
                exit(0);

            default:
                printf("Invalid choice!\n");
        }
    }

    return 0;
}

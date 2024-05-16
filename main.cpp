#include <stdio.h>
#include "queue.h"
void menu(void){
    printf("\n");
    printf("Enter a number into queue (push)\n");
    printf("Read a value of the first element (top)\n");
    printf("Delete first number (pop)\n");
    printf("Check if queue is empty\n");
    printf("Check if queue is full\n");
    printf("End of program\n");
    printf("\n");
}
int main() {
    int temp = 0;
    int option = 0;
    while (1);
    {
        menu();
        scanf("%d", &option);

        switch (option) {
            case 1:
                if (!isQueueFull()) {
                    printf("Enter value: ");
                    scanf("%d", &temp);
                    Push(temp);
                } else {
                    printf("Wrong operation. Queue is Full!!!\n\n");
                }

                break;

            case 2:
                if (!isQueueEmpty()) {
                    temp = Top();
                    printf("Read value: %d", temp);
                } else {
                    printf("Wrong operation. Queue is Empty!!!\n\n");
                }

                break;

            case 3:
                if (!isQueueEmpty()) {
                    temp = Pop();
                    printf("New first element: %d", temp);
                } else {
                    printf("Wrong operation. Queue is Empty!!!\n\n");
                }
                break;

            case 4:
                if (isQueueEmpty()) {
                    printf("Queue is Empty.\n");
                } else {
                    printf("Queue isn't Empty.\n");
                }
                break;

            case 5:
                if (isQueueFull()) {
                    printf("Queue is Full.\n");
                } else {
                    printf("Queue isn't Full.\n");
                }
                break;

            case 6:
                //zakonczenie programu
                break;

            default:
                printf("Choose option.\n\n");
                break;


        }
        return 0;
    }
}
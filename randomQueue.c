#include <stdio.h>
#include <stdlib.h>
#define SIZE 100

void enQueue(int);
void yazdir();
int bul(int);

int queue[SIZE], front = -1, rear = -1;

int main() {
    for (int j=0; j<SIZE; j++){
        enQueue(rand()%1000+1);
    }
  
  yazdir();
  int konum = bul(65);
    if(konum != -1)
        printf("\n\nAranan eleman bulundu. Konum: %d",konum+1);
    else
        printf("\n\nAranan eleman bulunamadi.");

    return 0;
}

void enQueue(int value) {
    if (rear == SIZE - 1)
        printf("\nQueue dolu!");
    else {
        if (front == -1)
            front = 0;
        rear++;
        queue[rear] = value;
    }
}

void yazdir() {
    if (rear == -1)
        printf("\nQueue boş!");
    else {
        for (int k = front; k <= rear; k++)
            printf("\nEleman numarasi %d::%d", k+1, queue[k]);
    }
    printf("\n");
}

int bul(int veri){
    int karsilastirma = 0;
    int index = -1;
    int b;
    for (b = 0; b < SIZE; b++) {
        karsilastirma++;
        if(veri == queue[b]){
            index = b;
            break;
        }
    }
    printf("\nToplam karsilastirma sayisi: %d", karsilastirma);
    return index;
}

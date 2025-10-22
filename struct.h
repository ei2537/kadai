#ifndef STRUCT_H
#define STRUCT_H

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_SIZE 100

typedef struct {
    int data[MAX_SIZE];
    int front;
    int rear;
    int count;
} Queue;

// キューの初期化
void queue_init(Queue *q) {
    q->front = 0;
    q->rear = -1;
    q->count = 0;
}

// push - キューに要素を追加
void push(Queue *q, int value) {
    if (q->count == MAX_SIZE) {
        printf("Error: Queue overflow\n");
        return;
    }
    q->rear = (q->rear + 1) % MAX_SIZE;
    q->data[q->rear] = value;
    q->count++;
}

// pop - キューから要素を削除
void pop(Queue *q) {
    if (q->count == 0) {
        printf("Error: Queue underflow\n");
        return;
    }
    q->front = (q->front + 1) % MAX_SIZE;
    q->count--;
}

// front - キューの先頭要素を取得
int front(Queue *q) {
    if (q->count == 0) {
        printf("Error: Queue is empty\n");
        return -1;
    }
    return q->data[q->front];
}

// back - キューの末尾要素を取得
int back(Queue *q) {
    if (q->count == 0) {
        printf("Error: Queue is empty\n");
        return -1;
    }
    return q->data[q->rear];
}

// empty - キューが空かチェック
bool empty(Queue *q) {
    return q->count == 0;
}

// size - キューのサイズを取得
int size(Queue *q) {
    return q->count;
}

#endif // STRUCT_H
#include <stdio.h>
#include <conio.h>
#include <process.h>
#include <stdlib.h>
#define N 5
struct queue
{

    int rear,front , n[N]
};

void enqueue( struct queue *q, int val);
void dequeue ( struct queue *q);
void showall (struct queue *q);
void frontq( struct queue *q);

int main()
{
 int uans, val;
 struct queue q;
 q.rear=-1;
 q.front=0;

 do{
    printf("\n 1.enqueue 2.dequeue 3.show all 4.front of queue 5.exit \n");
    scanf("%d", &uans);
    switch (uans)
    {
        case 1:
        {   printf("Enter number to be queued: ");
            scanf("%d",&val);
            enqueue(&q, val);
            break;
        }
        case 2:
        {
            dequeue(&q);
            break;
        }
        case 3:
            {
                showall(&q);
                break;
            }
        case 4:
            {
                frontq(&q);
                break;
  }
            }

 }while (uans !=5);
 return 0;
}

void enqueue (struct queue*q, int val)
{
    if (q->rear >= N-1)
    {
        printf("queue is full");
    }
    else
    {
        q->rear+=1;
        q->n[q->rear]=val;
        printf(" %d was inserted into the queue.", val);
    }
}

void dequeue (struct queue *q)
{

    if (q->front > q->rear)
    {
        printf ("queue is empty");
    }
    else
    {
        printf("%d was dequeued.", q->n[q->front]);
        q->front += 1;
    }
}

void showall(struct queue *q)
{

if (q->front > q->rear)
    {
        printf ("queue is empty");
    }
    else
    {
        for(int a=q->front ; a<=q->rear; a++)
        {
            printf("%d \t",q->n[a]);
        }
    }
}

void frontq(struct queue *q)
{

if (q->front > q->rear)
    {
        printf ("queue is empty");
    }
    else
    {
    printf("front item in queue is: %d", q->n[q->front]);}
}

//큐 - 연결리스트 이용
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node //노드 정의
{
  int data;
  struct Node *next;
}Node;


typedef struct Queue //Queue 구조체 정의
{
  Node *front; //맨 앞(꺼낼 위치)
  Node *rear; //맨 뒤(보관할 위치)
  int size;//보관 개수
}Queue;

void InitQueue(Queue *queue); //큐 초기화
int IsEmpty(Queue *queue); //큐가 비었는지 확인
int FrontQueue(Queue *queue); //큐의 제일 앞 데이터 반환
int SizeQueue(Queue *queue); //큐의 사이즈 반환
void EnQueue(Queue *queue, int data); //큐에 보관
void Dequeue(Queue *queue); //큐에서 꺼냄


int main(void) //main함수
{
  Queue q;
  InitQueue(&q);
  PushQueue(&q, 100);
  printf("%d %d\n", FrontQueue(&q), SizeQueue(&q));
  Dequeue(&q);
  printf("%d\n", FrontQueue(&q));
}

void InitQueue(Queue *queue)
{
  queue->front = queue->rear = NULL; //front와 rear를 NULL로 설정
  queue->size = 0;//보관 개수를 0으로 설정
}

int IsEmpty(Queue *queue)
{
  return queue->size == 0; //보관 개수가 0이면 빈 상태
}

int FrontQueue(Queue *queue) {
  if (IsEmpty(queue)) return -1; //큐가 비었을 경우 -1반환
  return queue->front->data; //아닐경우 font값 변환
}

int SizeQueue(Queue *queue){
  return queue->size;
}

void PushQueue(Queue *queue, int data)
{
  Node *now = (Node *)malloc(sizeof(Node)); //노드 생성
  now->data = data;//데이터 설정
  now->next = NULL;

  if (IsEmpty(queue))//큐가 비어있을 때
  {
    queue->front = now;//맨 앞을 now로 설정
  }
  else//비어있지 않을 때
  {
    queue->rear->next = now;//맨 뒤의 다음을 now로 설정
  }
  queue->rear = now;//맨 뒤를 now로 설정
  queue->size++;//보관 개수를 1 증가
}

void Dequeue(Queue *queue)
{
  Node *now;
  if (IsEmpty(queue))//큐가 비었을 때
  {
    return;
  }
  now = queue->front;//맨 앞의 노드를 now에 기억
  queue->front = now->next;//맨 앞은 now의 다음 노드로 설정
  free(now);//now 소멸
  queue->size--;//보관 개수를 1 감소
  return;
}

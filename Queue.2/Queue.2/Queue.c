#include "Queue.h"
// 初始化队列 
void QueueInit(Queue* q)
{
	assert(q);
	q->_front = q->_rear = NULL;
}
// 队尾入队列 
void QueuePush(Queue* q, QDataType data)
{
	QNode* node = (QNode*)malloc(sizeof(QNode));
	node->_data = data;
	node->_next = NULL;
	if (q->_front = NULL)
	{
		q->_front = q->_rear = node;
	}
	else
	{
		q->_rear->_next = node;
		q->_rear = node;
	}
}
// 队头出队列 
void QueuePop(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));
	//只有一个节点
	if (q->_front->_next == NULL)
	{
		free(q->_front);
		q->_front = q->_rear = NULL;
	}
	else
	{
		QNode* next = q->_front->_next;
		free(q->_front);
		q->_front = next;
	}
}
// 获取队列头部元素 
QDataType QueueFront(Queue* q)
{
	assert(q);
	assert(q->_front);
	return q->_front->_data;
}
// 获取队列队尾元素 
QDataType QueueBack(Queue* q)
{
	assert(q);
	assert(q->_front);
	return q->_rear->_data;
}
// 获取队列中有效元素个数 
int QueueSize(Queue* q)
{
	assert(q);
	int count = 0;
	QNode* tmp = q->_front;
	while (tmp != NULL)
	{
		count++;
		tmp = tmp->_next;
	}
	return count;
}
// 检测队列是否为空，如果为空返回非零结果，如果非空返回0 
int QueueEmpty(Queue* q)
{
	assert(q);
	return q->_front == NULL;
}
// 销毁队列 
void QueueDestroy(Queue* q)
{
	assert(q);
	while (q->_front != NULL)
	{
		QNode* tmp = q->_front;
		q->_front = q->_front->_next;
		free(tmp);
	}
	q->_rear = NULL;
}
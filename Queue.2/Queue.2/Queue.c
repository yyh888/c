#include "Queue.h"
// ��ʼ������ 
void QueueInit(Queue* q)
{
	assert(q);
	q->_front = q->_rear = NULL;
}
// ��β����� 
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
// ��ͷ������ 
void QueuePop(Queue* q)
{
	assert(q);
	assert(!QueueEmpty(q));
	//ֻ��һ���ڵ�
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
// ��ȡ����ͷ��Ԫ�� 
QDataType QueueFront(Queue* q)
{
	assert(q);
	assert(q->_front);
	return q->_front->_data;
}
// ��ȡ���ж�βԪ�� 
QDataType QueueBack(Queue* q)
{
	assert(q);
	assert(q->_front);
	return q->_rear->_data;
}
// ��ȡ��������ЧԪ�ظ��� 
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
// �������Ƿ�Ϊ�գ����Ϊ�շ��ط�����������ǿշ���0 
int QueueEmpty(Queue* q)
{
	assert(q);
	return q->_front == NULL;
}
// ���ٶ��� 
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
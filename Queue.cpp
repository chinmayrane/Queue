#include <iostream>
#include <stdio.h>
#include "Queue.h"

using namespace std;

template<typename T>
Queue<T>::Queue(){
	front = -1;
	rear  = -1;
	size  =  0;
}

template<typename T>
bool Queue<T>::isEmpty(){
	return (front == -1 && rear == -1);
}

template<typename T>
bool Queue<T>::isFull(){
	return (rear+1)%MAX_SIZE == front ? true: false;
}

template<typename T>
void Queue<T>::enqueue(T x){
	if(isFull()){
		cout<<"Queue is Full\n";
		return;
	}

	if(isEmpty()){
		front = rear = 0;
	}else{
		rear = (rear + 1)%MAX_SIZE;
	}

	a[rear] = x;
}

template<typename T>
T Queue<T>::dequeue(){
	if(isEmpty()){
		cout<<"Queue is Full\n";
		return 0;
	}else if(front == rear){
		size_type temp =  a[rear];
		rear = front = -1;
		return temp;
		
	}else{
		T dequeueNode = a[front];
		front = (front+1)%MAX_SIZE;
		return dequeueNode;
	}

}

template<typename T>
T Queue<T>::peek(){
	if(front == -1){
		cout<<"Empty Queue \n";
		return -1;
	}

	return a[front];
}

template<typename T>
void Queue<T>::print(){
	int count = (rear + MAX_SIZE -front)%MAX_SIZE + 1;
	cout<<"Queue : ";
	for (size_type i = 0; i < count; ++i){
		int index = (front + i) % MAX_SIZE;
		cout<<a[index]<<" ";
	}
	cout<<"\n";
}
#include <iostream>
#include "Queue.h"
#include "Queue.cpp"
using namespace std;

int main()
{
	Queue<int> q;

	q.enqueue(17);
	q.print();

	q.enqueue(56);
	q.print();

	q.enqueue(36);
	q.print();

	q.enqueue(19);
	q.print();

	q.enqueue(7);
	q.print();

	q.enqueue(2);
	q.print();
	
	q.enqueue(1);
	q.print();

	q.enqueue(33);
	q.print();

	q.enqueue(47);
	q.print();

	q.enqueue(63);
	q.print();

	q.enqueue(72);
	q.print();

	q.dequeue();
	q.print();

	q.dequeue();
	q.print();
	
	q.dequeue();
	q.print();

	q.dequeue();
	q.print();

	q.peek();

	q.dequeue();
	q.print();

	q.dequeue();
	q.print();

	return 0;
}
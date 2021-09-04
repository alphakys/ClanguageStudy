#include <stdio.h>
#include <stdbool.h>

#define SIZE 100

int stackArr[SIZE];

int top = -1;

bool *isEmpty() {
	if (top <0) {
		printf("Stack is empty");
		return true;
	}
	return false;
}

bool isFull() {
	if (top >= SIZE-1) {
		printf("Stack is full");
		return true;
	}
	return false;
}

void push(int value) {
	if (!isFull()) {
		++top;
		stackArr[top] = value;
	}
}

int pop() {
	if (!isEmpty()) {
		
		return stackArr[top--];
	}
}

void peek() {
	if (!isEmpty()) {
		top = top - 1;
	}
}

void print() {
	for (int i = 0; i < 100; i++) {
		printf("%d\n", stackArr[i]);
	}
}


typedef struct Stack {
	#define size 100
	#define top - 1
	int array[size];
	bool (*emptyPointer)();

}Stack;  

int main() 
{	
	printf("%d", isEmpty());

}
#include <stdio.h>
#include <stdbool.h>

#define SIZE 100

int stack[SIZE];

int top = -1; // 맨 위의 원소를 나타낼 변수. 기본값 -1

bool isEmpty() {

	if (top == -1) {
		printf("stack is empty\n");
		return true;
	}
	else {
		return false;
	}
}

bool isFull() {

	if (top >= SIZE - 1) {
		printf(" Error : Stack is full\n");
		return true;
	}
	else {
		return false;
	}
}


bool stPush(value) {

	if (!isFull()) {
		top++;
		stack[top] = value;
		return true;
	}

}

int stPop() {
	
	if (!isEmpty()) {
		int temp = stack[top];
		top--;
		return temp;
	}
	
}

int stPeek() {

	if (!isEmpty()) {
		return stack[top];
	}
}

void stPrint() {

	if (!isEmpty()) {
		for (int i = 0; i <= top; i++) {
			printf("%d\n", stack[i]);
		}
		
	}
}



int main() 
{	

	int num = 1;
	stPrint();
	while (num<=5) {
		
		stPush(num++);
	}
	
	printf("%d",stPeek());
	
	stPrint();
	return 0;
}
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define CAPACITY 10

int array[CAPACITY];

int length = -1;


bool isEmpty() {
	if (length < 0 ) {
		printf("배열이 비었습니다.\n");
		return true;
	}
	return false;
}

bool isFull() {
	if (length > CAPACITY) {
		printf("배열이 가득 찼습니다. 더이상 추가 할 수 없습니다.\n");
		return true;
	}
	return false;
}


void add(int element) {

	if (!isFull()) {
		
		array[++length] = element;
		printf("len : %d\n", length);
		
	}
	
}

void addIndex(int element, int index) {

	if (!isFull()) {

		if (index <= length && index>=0) {
			
			for (int i = length; index <= i; i--) {
				int tmp;
				int currLength = i;
				tmp = array[i];
				//printf("tmp : %d, i : %d\n", tmp, i);
				array[++currLength] = array[i];
			}

			array[index] = element;
		}
		else if (index < 0) {
			printf("인덱스는 0보다 작을 수 없습니다.");
		}
		else {
			add(element);
		}

	}
	

}

void print() {
	for (int i = 0; i < CAPACITY; i++) {
		printf("%d\n", array[i]);
	}
}


int main() {

	add(0);
	add(1);
	add(2);
	add(3);
	addIndex(4, -1);
	add(5);
	add(5);
	add(5);
	add(5);
	add(34);
	add(34);
	add(34);
	add(34);
	


	
	//addIndex(4, 0);
	print();
	return 0;
}
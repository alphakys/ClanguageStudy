#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

#define CAPACITY 10

int array[CAPACITY];

int length = -1;


















bool isEmpty() {
	if (length < 0 ) {
		printf("�迭�� ������ϴ�.\n");
		return true;
	}
	return false;
}

bool isFull() {
	if (length > CAPACITY) {
		printf("�迭�� ���� á���ϴ�. ���̻� �߰� �� �� �����ϴ�.\n");
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
			printf("�ε����� 0���� ���� �� �����ϴ�.");
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
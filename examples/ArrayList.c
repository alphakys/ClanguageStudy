/*
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

*/


#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


// field
#define CAPACITY 10
int length = -1;

//array
int array[CAPACITY];


//function

bool isEmpty(){

	if(length<0){
		printf("array is empty");
		return true;
	}

	return false;
}

bool isFull(){

	if(length>CAPACITY-1){
		printf("array is FULL");
		return true;
	}

	return false;
}

void add(int element){

	if(!isFull()){
		array[++length] = element;
	}

}

void addIndex(int element, int index){
	//index = index-1;
	if(index<0 || isFull() || index >length+1)
	{
		if(index<0)
		{
			printf("index는 0보다 작을 수 없습니다.");
			return;
		}
		else if(index >length+1)
		{
			printf("arraylist는 순서대로 값이 들어가야 합니다.");
			return;
		}
	}

	else
	{
		// 1.arraylist는 순서대로 값이 들어가야함
		if(length==index+1)
		{
			add(element);
			return;
		}
		else
		{	
			while(length>index-1){
				int nextLength = length;
				array[++nextLength] = array[length];
				length--;
			}

			array[index] = element;
		}

	}


}

int get(int index){
	if(index<0 || index>CAPACITY)
	{
		printf("IndexOutofBoundsException");
	}
	else
	{
		return array[index];
	}

	
}


void clear(){
	length = -1;
}




void print(){

	for(int i=0; i<CAPACITY; i++){
		printf("%d\n", array[i]);
	}
}







int main(){
	
	add(0); 
	add(1); 
	add(2); 
	add(3); 
	add(4); 
	addIndex(5,0); 
	print();

}



































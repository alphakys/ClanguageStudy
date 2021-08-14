#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
	struct Node *next;
	int value;
	
}Node;


int N; 
int M;
void insert(Node *rootNode, int start) {
	int i = 1;
	if (i==start) {
		i++;
	}
	Node nextNode;
	*rootNode->next = nextNode;
	while (i!=start && i<=M) {
		
		nextNode.value = i;
		i++;
		nextNode = nextNode.next;
	}

	while (rootNode->next !=NULL) {
		printf("%d", rootNode->value);
		rootNode = rootNode->next;
	}

	
	
}


int main()
{
	scanf_s("%d %d", &N, &M);
	/*
	int* arr = (int*)malloc(4*(N+1));
	
	for (int i = 1; i <= N; i++) {
		arr[i] = i;
	}
	*/
	for(int i = 1; i <= N; i++) {
		Node rootNode;
		rootNode.value = i;
		insert(&rootNode, i);
	}
	
	return 0;
}
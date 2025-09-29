#include<iostream>
using namespace std;
struct Node
{
public:
	int data;
	Node* next;

	Node(int value) {
		data = value;
		next = nullptr;
	}
};
class Stack {
private:
	Node* head;
	int count;

public:
	Stack() {
		head = nullptr;
		count = 0;
	}

	bool isEmpty() {
		return head == nullptr;
	}
	void push(int item) {
		Node* newNode = new Node(item);
		newNode->next = head;
		head = newNode;
		count++;
	}
	int pop() {
		if (isEmpty()) {
			cout << "Stack rong!\n";
			return -1;
		}
		int value = head->data;
		Node* temp = head;
		head = head->next;
		delete temp;
		count--;
		return value;
	}
	int top() {
		if (isEmpty()) {
			cout << "Stack rong!\n";
			return -1;
		}
		return head->data;
	}
	int size() {
		return count;
	}
	~Stack() {
		while (!isEmpty()) {
			pop();
		}
	}
};



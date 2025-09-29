#include<iostream>
using namespace std;
struct Node {
	int data;
	Node* next;
	Node(int value) {
		data = value;
		next = nullptr;
	}
};
class Queue {
private:
	Node* front; //dau hang doi
	Node* rear; //cuoi hang doi
	int count;

public:
	/**
	* Constructor.
	*/
	Queue() {
		front = rear = nullptr;
		count = 0;
	}
	//Kiem tra co rong hay khong
	bool isEmpty() {
		return front == nullptr;
	}
	//Them phan tu vao cuoi
	void enqueue(int item) {
		Node* newNode = new Node(item); //Tao node moi
		if (rear == nullptr) {
			front = rear = newNode;
		}
		else {
			rear->next = newNode;
			rear = newNode;
		}
		count++;
	}
	//Lay va xoa phan tu o dau Queue
	int dequeue() {
		if (isEmpty()) {
			cout << "Queue rong!\n";
			return -1;
		}
		int value = front->data;
		Node* temp = front;
		front = front->next;
		//neu xoa xong ma khong con phan tu rear cung phai null
		if (front == nullptr) {
			rear = nullptr;
		}
		delete temp; // giai phong node da lay
		count--;
		return value;
	}
	//tra ve phan tu dau
	int peek() {
		if (isEmpty) {
			cout << "Queue rong!\n";
			return -1;
		}
		return front->data;
	}
	//lay so luong phan tu hien tai
	int size() {
		return count;
	}
	~Queue() {
		while (!isEmpty()) {
			dequeue();
		}
	}
};

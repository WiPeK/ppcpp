// zad2.cpp : Defines the entry point for the console application.
//

#include<iostream>

using namespace std;

template <class T> class Stack {
private:
	struct Node {
		T val;
		Node *next;
	};

	Node *top;
public:
	Stack() {
		top = 0;
	}

	~Stack() {
		Node *sp, *next;
		sp = top;

		while (sp != nullptr)
		{
			next = sp->next;
			delete sp;
			sp = next;
		}
	}

	void push(T toPush)
	{
		Node *nsp;
		nsp = new Node;
		nsp->val = toPush;

		if (top)
		{
			nsp->next = top;
			top = nsp;
		}
		else 
		{
			top = nsp;
			nsp->next = nullptr;
		}
	}

	T pop()
	{
		Node *tmp;
		T res;

		if (top)
		{
			res = top->val;
			tmp = top->next;
			delete top;
			top = tmp;
			return res;
		}
		else return -100;
	}

};


int main()
{
	Stack<int> stos;
	stos.push(1);
	stos.push(4);
	stos.push(7);
	stos.push(2);
	stos.push(9);
	stos.push(11);
	cout << stos.pop() << endl;
	cout << stos.pop() << endl;
	cout << stos.pop() << endl;
	cout << stos.pop() << endl;
	cout << stos.pop() << endl;
	cout << stos.pop() << endl;
	cout << stos.pop() << endl;
    return 0;
}


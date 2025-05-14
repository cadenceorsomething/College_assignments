module cad;
import <iostream>;
using namespace std;

namespace KD {
	const int MAX_COUNT = 50;
	struct node {
		int data;
		node* next;

		node(int in_data) : data(in_data), next(nullptr) {}
	};

	bool dead_end	(node* current)			 {
		return current->next == nullptr;
	}
	void push_back	(node*& head, int val)		 {
		if (head == nullptr) return;			// if it is invalid then leave.

		node* current = head;

		while (!dead_end(current)) {
			current = current->next;			// iterating until i find a dead end
		}

		current->next = new node(val);

	}
	void push_front	(node*& old_head, int val)	 {
		node* new_head = new node(val);
		new_head->next = old_head;
		old_head = new_head;
	}
	void print_list	(node* current)				 {
		if (current == nullptr) return;
		std::cout << current->data << " ";
		if (dead_end(current))
			return;
		else
			print_list(current->next);
	}

}
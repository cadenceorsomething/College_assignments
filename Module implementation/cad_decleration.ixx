export module cad;   // <- declare the module name
import std;
import <cmath>;

// namespace to not confuse functions with others

export namespace cad {
	namespace arr {
		void square_array();
		void find_element();
		void num_to_array();
	}
	namespace functions {
		// empty lol
	}
	namespace structs {
		struct distance;
	}
	namespace math {
		bool is_prime(int n);
	}
}

export namespace KD {
	extern const int MAX_COUNT;
	struct node {
		int data;
		node* next;

		node(int in_data) : data(in_data), next(nullptr) {}
	};
	
	bool dead_end	(node*);
	void push_back	(node*&, int);
	void push_front	(node*& , int);
	void print_list(node* current) {
		if (current == nullptr) return;
		std::cout << current->data << " ";
		if (dead_end(current))
			return;
		else
			print_list(current->next);
	}
}

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
	namespace pointer_testing {
		using std::cout, std::endl;	// i will use them a ton

		void demonstration1() {
			// here we have a variable and a dynamically allocated pointer
			int* ptr = new int;
			*ptr = 5;
			// if we dont delete it, it will take space in the memory as long as the program is running
			cout << "Pointer number: " << *ptr << endl;
			cout << "Address:" << ptr << endl;
			ptr = nullptr;
			cout << endl;
			cout << "Address after deletion:" << ptr << endl;
			delete ptr;


		}
	}
	namespace structs {
		struct distance;
	}
	namespace math {
		void check_prime_emirp(int);
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
	void print_list	(node*);
}

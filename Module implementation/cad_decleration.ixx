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
}

import std;
import cad; // THIS IS WHERE I PUT MY CODE

using namespace std;

int main() {
	using namespace KD;

	node* head = new node(9);
	
	push_back(head, 10);

	cout << head->next->data << endl;

	push_front(head, 8);
	
	cout << head->next->data << endl;
	cout << head->data << endl;

	print_list(head);

	for (int i = 0; i < 3; i++)
		push_back(head, 11 + i);

	for (int i = 0; i < 3; i++)
		push_front(head, 7 - i);


	cout << endl;


	print_list(head);


	delete head;

	return 0;
}

#include <bits/stdc++.h>
using namespace std;
class Node {
	public:
		int data;   // data
		Node *next; // pointer to next node
		Node *prev; // pointer to previous nodel
};
void append(Node **head_ref, int new_data) {
	Node *new_node = new Node();
	Node *last = *head_ref;
	new_node->data = new_data;
	new_node->next = NULL;
	// if the list is empty
	if (*head_ref == NULL) {
		new_node->prev = NULL;
		*head_ref = new_node;
		return;
	}
	while (last->next != NULL) {
		last = last->next;
	}
	last->next = new_node;
	new_node->prev = last;
	return;
}
void printList(Node *node) {

	Node *last;
	cout << "\nTraversal in forward direction \n";
	while (node != NULL) {
		cout << " " << node->data << " ";
		last = node;
		node = node->next;
	};

	cout << "\nTraversal in reverse direction \n";
	while (last != NULL) {
		cout << " " << last->data << " ";
		last = last->prev;
	}
}

void search(Node *node, int key) {

  Node *last;
  cout << "\n SEARCHING...FOR...Elements...IN THIS material... \n";
  int index, flag = 0;
  while (node != NULL) {

    if (node->data == key) {
      cout << "the element " << key << " is in the list at index = " << index
           << endl;
           flag =1;
      break;
    }
    last = node;
    node = node->next;
    index++;
  };
  if (flag == 0){
  cout << "\n";
  cout << "THE ELEMENT IS NOT IN THE LIST\n";
}
};

int main() {
	Node *head = NULL;

	while (true) {
		cout << "--------------------------\n";
		cout << "WELCOME TO LINKED LIST \n";
		cout << "[1] APPEND TO THE LIST.\n";
		cout << "[2] Print the LIST.\n";
		cout << "[3] Search an item in  the LIST.\n";
		cout << "[4] EXIT. \n";

		cout << "Enter a choice:- \n";
		int choice = 0;
		cin >> choice;
		if (choice == 1) {
			int data;
			cout << "ENTER THE DATA:-";
			cin >> data;
			append(&head, data);
			cout << data << " has been added to the list\n";
		} else if (choice == 2) {

			cout << "PRINTING THE LIST...  >_< \n\n";

			printList(head);


		} else if (choice == 3) {
			int key;
			cout << "ENTER THE ITEM YOU WANT TO SEARCH:- \n";
			cin >> key;
			search(head, key);
		} else if (choice == 4) {
			break;
		};
	}

	return 0;
}

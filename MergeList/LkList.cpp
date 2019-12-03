#include <iostream>
#include "LkList.h"

using namespace std;

void LkList::merge(LkList& src) {

	// this is what you need to write.....

	//Plan
	//1: Start at head of src and *this
	//2: Iterate src pointer until *this pointer is bigger
	//3: Take group and merge, reassign the head of src to new value.
	//4: Iterate *this pointer
	//5: repeat until *this.hasMore() == false

	if (!src.hasMore()) {
		cout << "The source list is empty! There is nothing to merge!\n";
		return;
	}

	resetIterator();

	//Need to check if head is nullptr
	if (head == nullptr){
		head = src.head;
		tail = src.tail;
		return;
	}

	while(hasMore()) { //Ensures that there is a value to compare within *this
		src.resetIterator();

		while (src.next() > it->data) {
			if (!src.hasMore()) { //Everything within src is smaller than iterator in *this
				//Move everything from head to tail to before *this iterator
				if (it == head) {

				}
				else {

				}
				return;
			}
		}
		//Everything between src head and scr pointer is smaller than *this iterator
		if (it == head) {

		}
		else {

		}
		next();
	}
	//*This has no more nodes, meaning everything in src is bigger than *this's tail
	//No need to check if tail is null, as head covers that possibility above
	//Therefore, move all of src to end of *this

	return;
}  // end of merge function


LkList::LkList() {
	head = nullptr;
	tail = nullptr;
	it = nullptr;
	count = 0;
}

//LkList::~LkList(){}                      
//LkList::LkList(const LkList& other){}
//LkList& LkList::operator=(const LkList& rhs){}

int LkList::size() {
	return count;
}

bool LkList::insert(int num) {
	if (count == 0) {                      // empty list
		head = tail = new Node(num);
	}
	else {                                   // >1 count, then add back
		Node* temp = new Node(num);
		tail->next = temp;
		temp->prev = tail;
		tail = temp;
	}
	count++;
	return true;
}

void LkList::insert(const initializer_list<int>& il) {
	for (int ele : il) {
		insert(ele);
	}
}


void LkList::clear() {
	if (count == 0)
		return;

	while (tail != head) {
		tail = tail->prev;
		delete tail->next;
	}
	delete head;
	head = tail = nullptr;
	count = 0;
}

void LkList::resetIterator() {
	it = head;
}

bool LkList::hasMore() {
	return (it != nullptr);
}

int LkList::next() {
	int num = it->data;
	it = it->next;
	return num;
}

ostream& operator << (ostream& outStr, LkList& lst) {
	lst.resetIterator();
	while (lst.hasMore())
		outStr << lst.next() << "  ";
	return outStr;
}


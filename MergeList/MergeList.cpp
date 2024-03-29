// Class Name: LKString: Program 5: MergeList 
// Author: Liam Kikuchi
// Section: S
// Description: Uses a ordered doubly linked list
// and merges one into the othert in as few
// operations as possible. This program tests
// different cases of the merge to make sure that
// it works.
#include <iostream>
#include <iomanip>
#include "LkList.h"

using namespace std;

int main() {

	LkList list, list2;

	
	list.insert( { 0, 10, 20, 30, 40} );
	list2.insert( { 1, 2, 3, 5, 11, 12, 13, 26, 27, 28, 29, 34, 35, 36, 37, 44, 45, 46, 47} );
	
	list.merge(list2);
	
	cout << "Merge #1 (source overlaps destination): \n" << list << endl;
	cout << "List size after merge: " << list.size() << endl;
	cout << endl << endl;
	
	list.clear();
	list2.clear();
	//------------------------


	list.merge(list2);
	
	cout << "Merge #2 (empty merge): \n" << list << endl;
	cout << "List size after merge: " << list.size() << endl;
	cout << endl << endl;

	list.clear();
	list2.clear();
	//------------------------

	list2.insert( { 0, 10, 20, 30, 40 } );

	list.merge(list2);

	cout << "Merge #3 (into an empty list): \n" << list << endl;
	cout << "List size after merge: " << list.size() << endl;
	cout << endl << endl;

	list.clear();
	list2.clear();
	//------------------------

	
	list.insert( { 0, 5, 10, 15, 20, 25, 30, 35, 40} );
	
	
	list.merge(list2);
	
	cout << "Merge #4 (from an empty list): \n" << list << endl;
	cout << "List size after merge: " << list.size() << endl;
	cout << endl << endl;
	
	list.clear();
	list2.clear();
	//------------------------


	list.insert( { 40, 47, 54, 61, 68 } );
	
	list2.insert( { 0, 3, 6, 9, 12, 15, 18 } );


	list.merge(list2);

	cout << "Merge #5(source before destination): \n" << list << endl;
	cout << "List size after merge: " << list.size() << endl;
	cout << endl << endl;
	
	list.clear();
	list2.clear();
	
	//------------------------

	list.insert( { 10, 17, 21, 28 } );
	
	list2.insert( { 50, 53, 56, 59, 62, 65 } );	
	
	list.merge(list2);
	
	cout << "Merge #6(source after destination): \n" << list << endl;
	cout << "List size after merge: " << list.size() << endl;
	cout << endl << endl;
	
	list.clear();
	list2.clear();
	//------------------------

	list.insert( { 0, 9, 18, 27 } );
	
	list2.insert( { -6, -4, -2, 0, 2, 4, 6, 8, 10, 12, 16, 
	                 18, 20, 22, 24, 26, 28, 30, 32, 34 } );	
	
	list.merge( list2 );
	
	cout << "Merge #7(source overlaps destination):\n" << list << endl;
	cout << "List size after merge: " << list.size() << endl;
	cout << endl << endl;
	
	list.clear();
	list2.clear();
	//------------------------

	list.insert( { -6, 2, 10, 18, 26, 34 } );
	
	list2.insert( { 10, 13, 16, 19, 22, 25 } );	
	
	list.merge( list2 );
	
	cout << "Merge #8(source within destination):\n" << list << endl;
	cout << "List size after merge: " << list.size() << endl;
	cout << endl << endl;
	
	list.clear();
	list2.clear();


	//------------------------


	system("pause");
	return 0;
}

/*
Merge #1 (source overlaps destination):
0  1  2  3  5  10  11  12  13  20  26  27  28  29  30  34  35  36  37  40  44  45  46  47
List size after merge: 24


The source list is empty! There is nothing to merge!
Merge #2 (empty merge):

List size after merge: 0


Merge #3 (into an empty list):
0  10  20  30  40
List size after merge: 0


The source list is empty! There is nothing to merge!
Merge #4 (from an empty list):
0  5  10  15  20  25  30  35  40
List size after merge: 9


Merge #5(source before destination):
0  3  6  9  12  15  18  40  47  54  61  68
List size after merge: 12


Merge #6(source after destination):
10  17  21  28  50  53  56  59  62  65
List size after merge: 10


Merge #7(source overlaps destination):
-6  -4  -2  0  0  2  4  6  8  9  10  12  16  18  18  20  22  24  26  27  28  30  32  34
List size after merge: 24


Merge #8(source within destination):
-6  2  10  10  13  16  18  19  22  25  26  34
List size after merge: 12


Press any key to continue . . .
*/

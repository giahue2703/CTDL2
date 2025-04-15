#include "AbstractLinkedList.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Term {
	int coef;//He so
	int exp;//Bac
};

/*ostream&: Hàm trả về một tham chiếu (&) tới ostream để có thể xâu chuỗi
nhiều lệnh cout << term1 << term2; liên tiếp.*/
ostream& operator<< (ostream& out, const Term t) {
	/*operator<< là một toán tử được nạp chồng cho phép 
	sử dụng << để xuất đối tượng Term ra màn hình hoặc file.*/
	out << t.coef << "x^" << t.exp << "\t";
	return out;
}

int main() {
	LinkedList<Term> l;
	init(l);
		
	Term t1;
	t1.coef = 4;
	t1.exp = 3;
	Term t2;
	t2.coef = 2;
	t2.exp = 2;
	
	insertFirst(l, t1);
	insertLast(l, t2);

	printList(l);
	destroyList(l);

	return 0;
}
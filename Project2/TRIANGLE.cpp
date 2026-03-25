#include <iostream>


//표준라이브럴리에서 가져와서 사용할 이름을 언급
using std::cin;
using std::cout;
using std::endl;

//* 삼각형 만들기
int main(void) {

	cout << "what size TRI ?";
	int size;
	cin >> size; //10
	/*
	*******
	 *****
	  ***
	   *
	 */
	//행 출력
	for (int i = 0; i < size; i++) {
		//열 출력
		for (int j = 0; j < size; j++) {
				cout << " "; 
		}
		for (int j = 0; j < (2 * size) - 1 - (i * 2); j++) {
			cout <<  "*";
		}
		// 행 끝 줄 바꿈
		cout << endl;

	}


	return 0;
}
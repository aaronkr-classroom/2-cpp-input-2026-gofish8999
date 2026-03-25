#include <iostream>


//표준라이브럴리에서 가져와서 사용할 이름을 언급
using std::cin;
using std::cout;
using std::endl;


//* 네모 만들기
int main(void) {
	cout << "1. Square OR 2. Rect? >>>";
	int option;
	cin >> option;
	cout << "what size ?";
	int size;
	cin >> size; //10



	//행 출력
	for (int i = 0; i < size; i++) {
		//열 출력
		for (int j = 0; j < size; j++) {
			if (option == 1) {
				cout << "*"; // 10x10 네모
			}
			else if (option == 2) {
				cout << "**"; // 10x20 직사각형
			}
			else {
				cout << "Error : only choose 1 or 2!";
				return 0x34AF;// 16진법 (hex)
			}
		}
		// 행 끝 줄 바꿈
		cout << endl;

	}


	return 0;
}
#include <iostream>
#include <string>

//표준 라이브러리에서 가져와서 사용할 이름을 업급
using std::cin; using std::cout;
using std::endl; using std::string;

int main(void) {
	// 이름을 물음
	cout << "first name : >>";
	// 이름을 읽어 들임
	string name;
	cin >> name;

	// 출력하려는 메세지를 구성
	const string greeting = "hello," + name + "!";

	/*
	 ******************* => 1st
	 *                 * => 2nd
	 *   hello kimin   * => 3rd
	 *                 * => 4th
	 ******************* => 5th
	 */
	// 인사말을 둘러싼 공백의 개수 
	const int pad = 3;

	// 출력할 행과 열 개수 
	const int rows = pad * 2 + 3; // 행
	const string::size_type cols = greeting.size() + pad * 2 + 2; // 열 개수

	// 입력부분과 출력 부분을 구분하려고 한 행을 건너뜀
	cout << endl;

	// rows개 행을 출력합니다.
	// 불변성: 지금까지 r개 행을 출력
	for (int r = 0; r != rows; ++r) {
		string::size_type c = 0;
		//불변성: 현재 행에서 c개 문자를 출력
		while (c != cols) { // 열 줄력
			//인사말 출력 여부 판별
			if (r == pad + 1 && c == pad + 1) {
				cout << greeting;
				c += greeting.size();


			}
			else {
				//테두리 출력 여부를 판별
				if (r == 0 || r == rows - 1 || //첫 행이나 마지막행
					c == 0 || c == cols - 1)
					cout << "*";
				else
					cout << " ";
				++c;
			} // if-elsr 끝
		} // for 끝
		cout << endl;
	}
	return 0;
}
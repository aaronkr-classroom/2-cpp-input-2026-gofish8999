#include <iostream>
#include <string>
int main(void) {
	// 이름을 물음
	std::cout << "first name : >>";
	// 이름을 읽어 들임
	std::string name;
	std::cin >> name;

	// 출력하려는 메세지를 구성
	const std::string greeting = "hello," + name + "!";

	/*
     ******************* => 1st
	 *                 * => 2nd
	 *   hello kimin   * => 3rd
	 *                 * => 4th
	 ******************* => 5th
	 */

	// 인사말의 2번째 행과 4번째
	const std::string spaces(greeting.size(), '-');
	const std::string second = "* " + spaces + " *";

	// 인사말의 1번쨰 행과 5번째 행
	const std::string first(second.size(), '*');

	//모두 출력
	std::cout
		<< std::endl //줄 바꿈
		<< first << std::endl
		<< second << std::endl
		<< "* " << greeting << " *" << std::endl
		<< second << std::endl
		<< first << std::endl
		<< std::endl;

	return 0;
}
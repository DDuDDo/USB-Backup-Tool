#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void help_msg();			 // 도움말 출력
void usb_check();			 // 현재 USB 마운트 여부 확인
string progress_bar(int); // Progress bar
void sleep(int);			// delay sleep()


int main(int argc, char* argv[]) {

	if (argc == 1 || (sizeof(argv)/sizeof(argv[0])) < 3) {
		help_msg();
	}
	if (argc == 1) {
		fputs("에러! 옵션을 입력하지 않으셨군요...\n", stderr);
		//exit(1);
	}

	// 옵션 개수 출력
	printf("%d 개의 옵션을 입력하셨군요\n\n", argc - 1);


	// 옵션 배열의 요소들을 하나씩 출력
	for (int i = 1; i < argc; i++)
		printf("argv[%d] = %s\n", i, argv[i]);




	/*
	cout << "Sleep() 함수 테스트 - 3초 시작!" << endl;
	sleep(3000);
	cout << "3초 끝" << endl;
	*/

	return 0;
}

void help_msg() {
	cout << "Help:" << endl;
	cout << "   Win : > USBackup [Source_Path] [Destination_Path]" << endl;
	cout << "   Linux : > ./USBackup [Source_Path] [Destination_Path]" << endl;
	cout << "   example : > USBackup E:\ D:\Backup" << endl;
	//exit(1);
}

void usb_check() {
	
}

string progress_bar(int value) {

	return 0;
}

void sleep(int value) { // cross - platform sleep function
	clock_t time_end;
	time_end = clock() + value * CLOCKS_PER_SEC / 1000;
	while (clock() < time_end) {}
}
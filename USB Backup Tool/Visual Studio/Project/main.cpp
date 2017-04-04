#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void help_msg();			 // ���� ���
void usb_check();			 // ���� USB ����Ʈ ���� Ȯ��
string progress_bar(int); // Progress bar
void sleep(int);			// delay sleep()


int main(int argc, char* argv[]) {

	if (argc == 1 || (sizeof(argv)/sizeof(argv[0])) < 3) {
		help_msg();
	}
	if (argc == 1) {
		fputs("����! �ɼ��� �Է����� �����̱���...\n", stderr);
		//exit(1);
	}

	// �ɼ� ���� ���
	printf("%d ���� �ɼ��� �Է��ϼ̱���\n\n", argc - 1);


	// �ɼ� �迭�� ��ҵ��� �ϳ��� ���
	for (int i = 1; i < argc; i++)
		printf("argv[%d] = %s\n", i, argv[i]);




	/*
	cout << "Sleep() �Լ� �׽�Ʈ - 3�� ����!" << endl;
	sleep(3000);
	cout << "3�� ��" << endl;
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
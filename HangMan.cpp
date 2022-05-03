// 현재는 단어를 정해줘야 함. 단어 리스트(txt) 파일에서 단어를 받아올 수 없음

#include <iostream>
#include <string>
#include <time.h>

using namespace std;

int main() {
	string wordlist[] = { "c++","python","javascript" };
	string answer; char w;
	srand(time(NULL));
	int n = rand() % 3;
	answer = wordlist[n];
	string guess(answer.length(), '_');
	while (true) {
		cout << guess << endl;
		cout << "enter a letter: "; cin >> w;
		for (int i = 0; i < answer.length(); i++) {
			if (w == answer[i])
				guess[i] = w;
		}
		if (guess == answer) {
			cout << answer << endl << "성공!!";
			break;
		}
			
	}
	return 0;
}

// 현재는 단어를 정해줘야 함. 단어 리스트(txt) 파일에서 단어를 받아올 수 없음

cout << "Hang-man";
cout << "1) play 2) quit\n";
int game;cin >> game;
    if (game == 1) {
        cout << "playing game..\n";
        string word = "bronze";
        string uword=word;
        for (int i = 0; i < word.size(); i++)
            uword[i] = '-';
        do{
            char guess;
            cout << "TODAY'S WORD : " << uword << endl;
            cout << "Your guess: "; cin >> guess;
            for (int i = 0; i < word.size(); i++) {
                if (word[i] == guess)
                    uword[i] = guess;
            }
        } while (uword != word);
        cout << uword;
    }
    cout <<endl<<"end of the game.";
return 0;

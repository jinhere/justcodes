string roles[2] = { "성진","희영" };
    cout << "---------------\n";
    cout << "상황극" << endl;
    cout << "---------------\n";
    
    cout << "1) 대본 작성하기 \n";
  
    string script[20]; int n = 0;
    string line;
    do {
        getline(cin, line);
        script[n] = line;
        n++;

    } while (line!="그만하자" && n<20);
    cout << "---------------\n";
    cout << "2) 완성된 대본 - 성진,희영 주연" << endl;
    cout << "---------------\n";
    for (int i = 0; i < 20; i++) {
        
        cout << roles[i%2]<<" : "<<script[i]<<'\n';
        if (script[i] == "그만하자")
            break;
    }
return 0;

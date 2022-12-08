#include <iostream>
#include<vector>

using namespace std;

int main(){
	string word1 = "word";
	string word2 = "localization";
	string word3 = "internationalization";
	string word4 = "pneumonoultramicroscopicsilicovolcanoconiosis";

	int inputs = 0;
	cin >> inputs;

	vector<string> words;

	for(int i=0; i<inputs; i++){
		string word;
		cin >> word;
		words.push_back(word);
	}

	for(int i=0; i<inputs; i++){
		if(words[i].length() > 10){
			cout << words[i][0];
			cout << words[i].length() - 2;
			cout << words[i][words[i].length() - 1] << endl;
		}else{
			cout << words[i] << endl;
		}
	}

	return 0;
}

#include <iostream>
#include<vector>

using namespace std;

int main(){
	int problems = 0;

	cin >> problems;

    problems = problems * 3;

    vector<int> answers;

    for(int i=0; i<problems; i++){
		int answer;
		cin >> answer;
		answers.push_back(answer);
	}

    int implements = 0;
    int friend_answers = 0;
    int counter = 0;

    for(int i=0; i<answers.size(); i++){
		//cout << answers[i];
        friend_answers = friend_answers + answers[i];
        counter++;
        if(counter == 3){
            if(friend_answers >= 2){
                implements++;
            }
            counter = 0;
            friend_answers = 0;
        }
	}

    cout << implements << endl;

	return 0;
}

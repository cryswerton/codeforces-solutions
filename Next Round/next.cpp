#include <iostream>
#include<vector>

using namespace std;

int main(){
	vector<int> options;
	vector<int> scores;

    for(int i=0; i<2; i++){
		int option;
		cin >> option;
		options.push_back(option);
	}

    for(int i=0; i<options[0]; i++){
		int score;
		cin >> score;
		scores.push_back(score);
	}

    int participants = 0;
    int count = 0;

    for(int i = 0; i<options[1]; i++){
        if(scores[i] > 0){
            count++;
        }        
    }

    if(count > 0){
        participants = count;
    }

    int kth = 0;

    for(int i=options[1] - 1; i<scores.size(); i++){
        if(count > 0 && i < scores.size() - 1){
            kth = scores[i];
            if(scores[i+1] >= kth && scores[i+1] > 0){
                participants++;
            }else{
                break;
            }
        }else{
            break;
        }       
	}

    cout << participants << endl;

	return 0;
}

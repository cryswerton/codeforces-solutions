#include <iostream>

using namespace std;

int main(){
	int w = 0;

	cin >> w;

	int part1 = w / 2;
	int part2 = w - part1;

	int temp = 0;

	while(part1 % 2 != 0){
		temp = 1;
		part1 = part1 - temp;
	}

	part2 = part2 + temp;

	if(part1 % 2 == 0 && part2 % 2 == 0 && w > 2){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}

	return 0;
}

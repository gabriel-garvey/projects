#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
	string text;
	cout << "Enter Sample Text." <<endl;
	cin >> text;
	vector<char> vowels = {'a', 'e', 'i', 'o', 'u'};
	vector<char> result;
	
	for(int t = 0; t < text.size(); t++) {
		for(int v = 0; v < vowels.size(); v++) {
			if(text[t] == vowels[v]) {
				result.push_back(text[t]);
			}
		}
	}
	for(int o = 0; o < result.size(); o++) {
		cout << result[o];
	}
}

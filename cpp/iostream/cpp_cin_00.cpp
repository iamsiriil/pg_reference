#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	vector<string> svec;

	for (string s; cin>>s;) {
		if (s.compare("quit") == 0) break;
		svec.push_back(s);
	}

	for (auto s : svec)
		cout << s << endl;

	cout << svec[1] << endl;
}

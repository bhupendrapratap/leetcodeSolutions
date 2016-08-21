#include<cstdlib>
#include<vector>
#include<string>
using namespace std;

void addSpace(string & line, int num){
	while (num--)  line = line + ' ';
}

vector<string> fullJustify(vector<string> &words, int L) {
	vector<string> ans;
	int n = words.size();
	if (n == 0) return ans;
	for (int i = 0; i < n;){
		int cur = i, curL = 0;
		while (cur < n){
			if (curL + words[cur].length() + cur - i > L) break;
			curL += words[cur].length();
			cur++;
		}
		int tail = cur;
		string line;
		//last Line
		if (tail == n){
			for (int cur = i; cur < tail; cur++){
				line = line + words[cur];
				if (cur != tail - 1){
					curL++;
					line = line + ' ';
				}
			}
			addSpace(line, L - curL);
		}
		else{
			int totBlank = L - curL;
			if (tail - i - 1 != 0)
			{
				int avg = totBlank / (tail - i - 1);
				int remain = totBlank % (tail - i - 1);
				for (int cur = i; cur < tail - 1; cur++){
					line = line + words[cur];
					if (remain > 0)
						addSpace(line, avg + 1);
					else
						addSpace(line, avg);
					remain--;
				}
				line = line + words[tail - 1];
			}
			else{
				line = line + words[tail - 1];
				addSpace(line, totBlank);
			}
		}
		ans.push_back(line);
		i = tail;
	}
	return ans;
}

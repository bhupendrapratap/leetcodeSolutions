#include"Header.h"
int compareVersion(string version1, string version2) {
	vector<int>ver1, ver2;
	int i = 0, n1 = version1.size(), n2 = version2.size(), start = 0;
	while (i < n1)
	{
		if (version1[i] == '.'){
			ver1.push_back(stoi(version1.substr(start, i++ - start))); start = i;
		}
		i++;
	}
	ver1.push_back(stoi(version1.substr(start, i - start)));
	i = 0, start = 0;
	while (i < n2)
	{
		if (version2[i] == '.'){
			ver2.push_back(stoi(version2.substr(start, i++ - start))); start = i;
		}
		i++;
	}
	ver2.push_back(stoi(version2.substr(start, i- start)));
	int len1 = ver1.size(), len2 = ver2.size();
	int min_length = min(len1, len2);
	i = 0;
	for (; i < min_length; ++i)
	{
		if (ver1[i]>ver2[i])return 1;
		else if (ver1[i] < ver2[i])return -1;
	}
	if (len1 == len2)return 0;
	if (len1 < len2){
		while (i <len2)
		{ 
			if (ver2[i] != 0)return -1;
			i++;
		}
		return 0; 
	}
	else if (len1 > len2){ while (i < len1){ if (ver1[i++] != 0)return 1; }return 0; }
	return 0;
}
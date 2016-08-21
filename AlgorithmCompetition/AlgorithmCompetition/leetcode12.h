#include<vector>
#include<algorithm>
#include<string>
#include<unordered_map>
using namespace std;

string intToRoman(int num) {
	unordered_map<int, char>small_part = {{ 1, 'I' }, { 5, 'V' }, { 10, 'X' }, { 50, 'L' }, { 100, 'C' }, { 500, 'D' }, { 1000, 'M' } };
	unordered_map<int, string>big_part = { { 4, "IV" }, { 9, "IX" }, { 40, "XL" }, { 90, "XC" }, { 400, "CD" }, { 900, "CM" }};
	string res = "";
	int qian=0, bai=0, shi = 0,ge=0;
	if (num / 1000){ qian = num / 1000; while (qian--)res.push_back(small_part[1000]); num -= (num / 1000) * 1000; }
	if (num / 100){ bai = num / 100;
	if (bai == 4 || bai == 9)res+=big_part[bai * 100]; 
	else if (bai <= 3)while (bai--)res.push_back('C');
	else{ res.push_back('D'), bai -= 5; while (bai--)res.push_back('C'); } 
	num -= (num / 100) * 100; }
	if (num / 10){ shi = num / 10; if (shi == 4 || shi == 9)res+=big_part[shi * 10]; else if (shi <= 3)while (shi--)res.push_back('X'); else{ res.push_back('L'), shi -= 5; while (shi--)res.push_back('X'); } num -= (num / 10) * 10; }
	if (num % 10){ ge = num % 10; if (ge == 4 || ge == 9)res+=big_part[ge]; else if (ge <= 3)while (ge--)res.push_back('I'); else{ res.push_back('V'), ge -= 5; while (ge--)res.push_back('I'); } }
	return res;
}

string intToRoman_neater(int num)//shortest baoli some solution
{
	vector<vector<string>>roman{ { "", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX" }, { "", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC" },
	{ "", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM" }, { "", "M", "MM", "MMM" } };
	string res = "";
	int x = 4;
	while (--x>=0)
	res += roman[x][num /int(pow(10,x))%10];
	return res;
}
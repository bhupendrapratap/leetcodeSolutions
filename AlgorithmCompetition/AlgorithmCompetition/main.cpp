#include<iostream>
#include<vector>
#include<numeric>
#define INF 1000000000
#include"Header.h"
//#include"Josephus.h"
//#include"bound.h"
//#include"leetcode1.h"
//#include"leetcode2.h"
//#include"leetcode3.h"
//#include"leetcode4.h"
//#include"leetcode6.h"
//#include"leetcode7.h"
//#include"leetcode8.h"
//#include"leetcode9.h"
//#include"leetcode11.h"
//#include"leetcode12.h"
//#include"leetcode13.h"
//#include"leetcode14.h"
//#include"leetcode15.h"
//include"leetcode16.h"
//#include"leetcode17.h"
//#include"leetcode18.h"
//#include"leetcode19.h"
//#include"leetcode20.h"
//#include"leetcode21.h"
//#include"leetcode22.h"

//#include"leetcode29.h"
//#include"leetcode43.h"
//#include"leetcode50.h"
//#include"leetcode66.h"
//#include"leetcode69.h"

/*
2016-6-9
*/
//#include"leetcode60.h"
//#include"leetcode168.h"
//#include"leetcode169.h"
//#include"leetcode171.h"
//#include"leetcode172.h"
//#include"leetcode326.h"
//#include"leetcode231.h"
//#include"leetcode342.h"


/*
2016-6-10
*/
//#include"leetcode202.h"
//#include"leetcode204.h"
//#include"leetcode233.h" hard
//#include"leetcode258.h"
//#include"leetcode279.h"

/*
2016-6-11
*/
//#include"leetcode31.h"
//#include"leetcode263.h"
//#include"leetcode264.h"
//#include"leetcode313.h"
//#include"leetcode268.h"
//#include"leetcode338.h"
//#include"leetcode187.h"
//#include"leetcode319.h"
//#include"leetcode191.h"
//#include"leetcode136.h"
//#include"leetcode137.h"
//#include"leetcode190.h"
//#include"leetcode260.h"
//has been reivewed 2016-6-12



/*
2016-06-12
*/
//#include"leetcode24.h"
//#include"leetcode26.h"
//#include"leetcode27.h"
//#include"leetcode28.h"
//#include"leetcode36.h"
//#include"leetcode38.h"
//#include"leetcode58.h"
//#include"leetcode67.h"
//#include"leetcode70.h"
//#include"leetcode83.h"
//#include"leetcode88.h"
//#include"leetcode100.h"

/*
2016-06-13
*/

//#include"leetcode101.h"
//#include"leetcode102.h"
//#include"leetcode104.h"
//#include"leetcode111.h"
//#include"leetcode107.h"
//#include"leetcode110.h"
//#include"leetcode118.h"
//#include"leetcode119.h"
//#include"leetcode112.h"
//#include"leetcode121.h"
//#include"leetcode53.h"
//#include"leetcode122.h"
//#include"DynamicProgramming.h"
//#include"leetcode300.h" **nlgn LIS
//#include"leetcode141.h"

/*
2016-06-14
*/

//#include"leetcode155.h"//there are solutions with one stack
//#include"leetcode160.h" //another concise solution
//#include"leetcode165.h" // int i,redefine i is not allowed
//include"leetcode189.h" //try another solution ,right  k wei for all elements
//#include"leetcode198.h" //dynamic programming
//#include"leetcode203.h"
//#include"leetcode205.h" //have not done
//#include"leetcode206.h"  create list in two ways
//#include"leetcode217.h"
//#include"leetcode219.h"
//#include"leetcode220.h"
//#include"complex.h"
//#include"leetcode225.h"

/*
2016-6-15
*/
//#include"leetcode226.h"
//#include"leetcode232.h"// the brother problems with leetcode225
//#include"leetcode234.h"
//#include"leetcode235.h"
//#include"leetcode237.h"
//#include"leetcode344.h"
//#include"leetcode345.h"
//#include"leetcode242.h"
//#include"leetcode257.h" //if else
//#include"leetcode278.h"
//#include"leetcode283.h"
//#include"leetcode292.h"
//#include"leetcode303.h"


/*
2016-6-16 dynamic programming
*/
//#include"leetcode72EditDistance.h"//the problem about word1[i-1] && word2[j-1]
//#include"leetcode322CoinChange.h" //the edge case of -1
//#include"leetcode304RangeSumQuery2D.h"
//#include"leetcode322CoinChange.h"
//#include"leetcode213HouseRobberII.h"
//#include"leetcode115DistinctSubsequences.h"

/*
2016-6-23
*/

//review the code of dynamic programming
//#include"leetcode318MaximumProductofWordLengths.h"
//#include"leetcode120Triangle.h"
//#include"leetcode334IncreasingTripletSubsequence.h"
//#include"leetcode324WiggleSortII.h"
//#include"leetcode96UniqueBinarySearchTrees.h"
//#include"leetcode95UniqueBinarySearchTreesII.h"


/*
2016-6-24
*/

//#include"leetcode347TopKFrequentElements.h"
//#include"leetcode343IntegerBreak.h"

/*
2016-6-25
*/

//#include"leetcode341FlattenNestedListIterator.h"
//#include"leetcode337HouseRobberIII.h"


/*
2016-6-26
*/

//#include"leetcode332ReconstructItinerary.h"//focus on dfs
//#include"leetcode331VerifyPreorderSerializationofaBinaryTree.h" //failure
//#include"leetcode367ValidPerfectSquare.h"


/*
2016-6-27
*/

//#include"HUFFMAN.h"

/*
2016-6-30
*/
//#include"leetcode371sumoftwointegers.h"
//#include"FenwickTree.h"
//#include"leetcode306additivenumber.h"//dfs

/*
2016-7-2
*/
//#include"leetcode289gameoflife.h"
//#include"leetcode284peekingiterator.h"


/*
2016-7-3
*/

//#include"leetcode274H-index.h"
//#include"leetcode275H-indexII.h"
//#include"leetcode74Searcha2DMatrix.h"
//#include"leetcode240Searcha2DMatrixII.h"


/*
2016-7-4
*/
//#include"leetcode241DifferentWaystoAddParentheses.h"
//#include"leetcode230KthSmallestElementinaBST.h"
//#include"leetcode238ProductofArrayExceptSelf.h"
//#include"leetcode116PopulatingNextRightPointersinEachNode.h"
//#include"leetcode117PopulatingNextRightPointersinEachNodeII.h"


/*
2016-7-5
*/
//#include"countersort.h"
//#include"leetcode236LowestCommonAncestorofaBinaryTree.h"
//#include"leetcode229MajorityElementII.h"
//#include"leetcode227BasicCalculatorII.h" //there is no need to consider delete space first
//#include"leetcode224BasicCalculator.h"
//#include"leetcode222CountCompleteTreeNode.h"
//#include"leetcode221MaximalSquare.h"

/*
2016-7-6
*/
//#include"review.h"
//#include"leetcode216CombinationSumIII.h"
//#include"leetcode215KthLargestElementinanArray.h"
//#include"leetcode208ImplementTrie.h"
//#include"leetcode211AddandSearchWordDatastructuredesign.h"
//#include"leetcode207CourseSchedule.h"//graph,toological sort.dfs,bfs
//#include"leetcode201BitwiseANDofNumbersRange.h"
//#include"leetcode199BinaryTreeRightSideView.h"
//#include"leetcode200NumberofIslands.h"//dfs


/*
2016-7-7
*/

//#include"review.h"
//#include"leetcode173BinarySearchTreeIterator.h"
//#include"leetcode179LargestNumber.h"
//#include"leetcode166FractiontoRecurringDecimal.h"
//#include"leetcode162findpeekelements.h" //binary search
//#include"leetcode153FindMinimuminRotatedSortedArray.h"// descending order;
//#include"leetcode151ReverseWordsinaString.h"
//#include"leetcode150EvaluateReversePolishNotation.h"
//#include"leetcode144BinaryTreePreorderTraversal.h"
//#include"leetcode148sortlist.h"
//#include"leetcode147.h"

/*
2016-7-8
*/

//#include"leetcode372superpow.h"
//#include"leetcode142LinkedListCycleII.h"
//#include"leetcode143reorderlist.h"
//#include"leetcode139wordbreak.h"
//#include"leetcode133clonegraph.h"
//#include"leetcode134gasstation.h"
//#include"leetcode129SumRoottoLeafNumbers.h"
//#include"leetcode131PalindromePartitioning.h"
//#include"leetcode113pathsumII.h"


/*
2016-7-9
@taobupt
*/

//#include"leetcode127wordladder.h" //typical BFS
//#include"leetcode126WordLadderII.h"
//#include"leetcode130SurroundedRegions.h"
//#include"leetcode114FlattenBinaryTreetoLinkedList.h"
//#include"leetcode108ConvertSortedArraytoBinarySearchTree.h"
//#include"leetcode109ConvertSortedListtoBinarySearchTree.h"
//#include"leetcode103BinaryTreeZigzagLevelOrderTraversal.h"
//#include"leetcode98ValidateBinarySearchTree.h"
//#include"leetcode94BinaryTreeInorderTraversal.h"
//#include"leetcode106ConstructBinaryTreefromInorderandPostorderTraversal.h"
//#include"leetcode105ConstructBinaryTreefromPreorderandInorderTraversal.h"



/*
@taobupt
2016-7-10
*/
//#include"leetcode92ReverseLinkedListII.h"
//#include"leetcode86PartitionList.h"
//#include"leetcode91decodeways.h"
//#include"leetcode80RemoveDuplicatesfromSortedArrayII.h"
//#include"leetcode62UniquePaths.h"
//#include"leetcode63uniquePathsII.h"
//#include"leetcode61RotateList.h"
//#include"leetcode54SpiralMatrix.h"
//#include"leetcode59SpiralMatrixII.h"
//#include"leetcode48RotateImage.h"
//#include"leetcode73setmatrixzeroes.h"





/*
@taobupt
2016-7-11
*/


//#include"leetcode79wordsearch.h"
//#include"leetcode81SearchinRotatedSortedArrayII.h"
//#include"leetcode33searchinroatedsortedarray.h"
//#include"leetcode78subsets.h"
//#include"leetcode64MinimumPathsum.h"
//#include"leetcode90subsetsII.h"
//#include"leetcode82RemoveDuplicatesfromSortedListII.h"
//#include"leetcode89Graycode.h"
//#include"leetcode46permutattions.h"
//#include"leetcode47permutationsII.h"  //important



/*
@taobupt
2016-7-12

all medium done!
*/
//#include"leetcode49GroupAnagrams.h"
//#include"leetcode71simplifypath.h"
//#include"leetcode34searchforArange.h"
//#include"leetcode75sortcolor.h"
//#include"leetcode39combinationSum.h"
//#include"leetcode40combinationsumII.h"
//#include"leetcode55jumpgame.h"
//#include"leetcode35searchInsertPosition.h"
//#include"leetcode5.h"    



/*
@taobupt
2016-7-13

start the hard mode
*/

//#include"leetcode374GuessNumberHigherorLower.h" //easy
//#include"leetcode316removeduplicateletters.h"
//#include"leetcode295FindMedianfromDataStream.h"
//#include"leetcode315countofSmalllerNumbersAfterself.h"
//#include"leetcode287findtheduplicatenumber.h"




/*
2016-7-28
@taobupt
*/

//#include"leetcode377combinationSumIV.h"


/*
@taobupt
2016-8-1
*/
//#include"leetcode378KthSmallestElementinaSortedMatrix.h"





/*
@taobupt
2016-8-2
*/
//#include"leetcode373findKpairswithSmallestSums.h"
//#include"print-permutation.h"
#include"print_subsets.h"


//#include"leetcode51.h"
//#include"leetcode93.h"

//#include"4.h"
//#include"5.h"
//#include"6.h"
//#include<sstream>
//#include<time.h>
//#include<cstdlib>
//#include"leetcode321.h"
//#include"tree.h"
//#include"leetcode68.h"
//#include"leetcode77.h"
//#include"topk.h"

#include<string>
//using namespace std;
//#define maxn 1000005
//int lastpos, curpos, nextpos[maxn];
////char s[maxn];
//#define maxt 1010
//typedef set<int> Set;
//
//map<Set, int>IDcache;
//vector<Set>Setcache;



//int ID(Set x)
//{
//	if (IDcache.count(x))return IDcache[x];
//	Setcache.push_back(x);
//	return IDcache[x] = Setcache.size() - 1;
//}

#define ALL(x) x.begin(),x.end()
#define INS(x) inserter(x,x.begin())
//int a[maxn][maxn];
//int a[maxn];

template<typename T>
void traverse_vector(vector<T>& nums)
{
	for (vector<T>::iterator it = nums.begin(); it != nums.end(); ++it)
	{
		cout << *it << endl;
	}
}

//void printList(ListNode* head)
//{
//	while (head)
//	{
//		cout << head->val << endl;
//		head = head->next;
//	}
//}

void swap1(int& a, int& b)
{
	/*int temp = a;
	a = b;
	b = temp;*/
	/*a = a + b;
	b = a - b;
	a = a - b;*/
	a = a^b;
	b = a^b;
	a = a^b;

}



double getapproximate()
{
	double ans = 0.0, term = 1.0;
	int i = 0;
	do{
		term = 1.0 / (2 * i + 1);
		if (i%2==0)ans += term;
		else ans -= term;
		++i;
	} while (term >= 1e-6);
	return ans;
}


int lesschar(const char*s, int p, int q)
{
	int n = strlen(s);
	for (int i = 0; i < n; i++)
	{
		if (s[(p + i) % n] != s[(q + i) % n])return s[(p + i) % n] < s[(q + i) % n];
	}
	return 0;
}


//double dist(Point a, Point b)
//{
//	return hypot(a.x - b.x, a.y - b.y);
//}




string repr(const string& s)
{
	string ans = s;
	for (int i = 0; i < s.size(); ++i)
	{
		ans[i] = tolower(ans[i]);
	}
	sort(ans.begin(), ans.end());
	return ans;
}

int main()
{
	freopen("output.txt", "w", stdout);
	freopen("input.txt", "r", stdin);
	//srand(static_cast<unsigned int>(time(NULL)));
	//printf("%d", RAND_MAX);

	// test dist
	/*cout << dist(1.0, -1.0, -1.0, 1.0)<<endl;
	Point a(1.0, -1.0), b(-1.0, 1.0);
	cout << dist(a, b) << endl;*/

	//test C

	//cout << C_Refined(21, 2) << endl;

	//int a = 1, b = -1;
	//swap_cite(a, b);
	//swap_pointer(&a, &b);

	//cout << a << endl;

	/*Point<double>a(1, -1),b(-1, 1);
	swap(a, b);
	cout << a << endl;*/

	/*string line;
	while (getline(cin, line))
	{
		int sum = 0, x;
		stringstream ss(line);
		while (ss >> x)sum += x;
		cout << sum << "\n";
	}*/



	/*Point<double> a[] = { Point<double>(1, 2), Point<double>(3, 4), Point<double>(-5, -6) };
	int length = sizeof(a) / sizeof(a[0]);
	sort(a, a + length, [](Point<double>x1, Point<double>x2){return x1.x > x2.x; });
	cout << sum(a, a + length) << endl;*/

	/*for (int i = 0; i < 10;++i)
	cout << pow_quick(2, i) << endl;
	GetPrime();*/

	//test ugly

	/*clock_t start = clock();
	cout << getUgly(1500) << endl;
	cout << (clock() - start / CLOCKS_PER_SEC) << endl;*/

	//tobinary
	//cout << pow_quick(2, 30) << endl;
	//cout << tobinary(42949672961, 16) << endl;
	//cout << binaryto("111111101111111111111111101111111111", 2) << endl;

	//test Biginteger

	/*string s = "111";
	BigInteger b(s);
	s = "12";
	BigInteger c(s);
	cout << (c-b) << endl;*/

	/*vector<int>nums{ 7, 1, 9, 5, 8, 3 };
	traverse_vector(GetMaxSubArray(nums, 3));*/

	//vector<int>nums{ 1, 3, 4, 5, 6, 8, 9, 10, 12, 13, 14, 15, 16, 17, 18 };
	//vector<int>res;
	//Tree t(nums);
	//t.inorder(t.GetRoot(),res);
	////t.levelorder(t.GetRoot(), res);
	//traverse_vector(res);
	//cout << "the minimum number " << t.minimum(t.GetRoot())->val << endl;
	//cout << "the maximum number " << t.maximum(t.GetRoot())->val << endl;
	//cout << "the successor number " << t.successor(t.GetRoot())->val << endl;
	//cout << "the predecessor number " << t.predecessor(t.GetRoot())->val << endl;
	//t.insert(t.GetRoot(), 11);
	//res.clear();
	//t.inorder(t.GetRoot(), res);
	//traverse_vector(res);
	//cout << "-------Remove------" << endl;
	//t.removeAt(t.GetRoot(),10);
	//res.clear();
	//t.inorder(t.GetRoot(), res);
	//traverse_vector(res);
	//solve63();

	//vector<string>nums{ "This", "is", "an", "example", "of", "text", "justif","icat." };
	//traverse_vector(fullJustify(nums,16));



	//combine(5, 2);

	//vector<int>v{ -1, 9, 5, 4, 3, 2, -4, -6, -7 };
	//topk(v, 4,Big);



	//test leetcode3

	//cout << lengthOfLongestSubstring1("pwwkew") << endl;

	//leetcode1

	//vector<int>v{ 3, 3, 11, 15 };
	//traverse_vector(twoSum(v,6));


	//leetcode2 successful

	/*int arr[] = { 9,9,9 };
	int arr1[] = { 5, 6, 4 };
	int length = sizeof(arr) / sizeof(int);
	List lis1(arr, length);
	List lis2(arr1, length);
	List lis3;
	lis3.addTwoNumbers(lis1.GetHead()->next, lis2.GetHead()->next);
	lis3.print();*/


	//leetcode 4

	/*vector<int>nums1{ 1};
	vector<int>nums2{ 1 };
	cout << findMedianSortedArrays(nums1, nums2);*/


	//cout << reverse_check(147483647) << endl;
	//cout << INT_MIN - 2 << endl;


	//leetcode 6
	//string text = "PAYPALISHIRING";
	//cout << convert(text, 3) << endl;
	//cout << convert_neater(text, 3) << endl;

	/*string s = "       +";
	cout << myAtoi(s) << endl;
	cout << s[8] << endl;*/

	//leetcode9

	//cout << isPalindrome1(12110) << endl;


	//leetcode 13

	//string roman = "MMMCMXCIX";
	//cout << romanToInt_neater(roman) << endl;
	//cout << intToRoman_neater(1976) << endl;


	//leetcode 14
	/*vector<string>v{ "flight", "flower", "flow" };
	cout << longestCommonPrefix(v) << endl;*/

	//leetcode 17
	//string phone = "";
	//traverse_vector(letterCombinations(phone));

	//leetcode93
	/*string ip = "010010";
	traverse_vector(restoreIpAddresses_neater(ip));*/


	//leetcode 51

	//solveNQueens(11);


	//leetcode20
	/*string parenthese = "(()){}{}}";
	cout << isValid_neater(parenthese) << endl;*/

	//leetcode15

	/*vector<int>v{ -1, 0, 1, 2, -1, -4 };
	threeSum(v);*/

	//leetcode16
	/*vector<int>v{ 0, 2, 1, -3 };
	cout << threeSumClosest(v,1) << endl;*/

	//getallpop(3);
	/*vector<int>seq{ 1, 2, 3 };
	vector<int>res{ 3,1,2};
	cout << isvalidpop(seq, res);*/
	//int n = -2147483647;// int n=-2147483648 is not allowed
	////unsigned int abs_n = n <0 ? unsigned int(n) : unsigned int(n);
	//cout << unsigned int(n)<< endl;
	/*int res = -2147483647 - 1;
	cout << llabs(res) << endl;*/




	//leetcode 29
	/*int x = -2147483647-1;
	cout << divide(x, -1) << endl;*/


	//leetcode 43

	/*string num1 = "140";
	string num2 = "721";
	cout << multiply(num1, num2);*/

	//leetcode 50
	/*int x = -INT_MAX - 1;
	cout << myPow(x, 3) << endl;*/

	//leetcode 66

	/*for (int i = 0; i <= 100;++i)
	cout <<i<<"  "<< mySqrt(i) << endl;*/

	//leetcode 169

	/*vector<int>nums{ 3, 2, 3 };
	cout << majorityElement(nums);*/

	//leetcode171

	/*cout << titleToNumber("AAABBC") << endl;*/

	//leetcode 168

	/*for (int i = 1; i < 100; ++i)
	{
		cout << convertToTitle(i) << endl;
	}*/

	//leetcode 326

	/*for (int i = 2; i < 513; ++i)
	{
		cout << i << "  " << isPowerOfTwo(i) << "  " << isPowerOfTwo1(i) << "  " << isPowerOfTwo2(i) << endl;
	}*/

	/*for (int i = 1; i <= 81; ++i)
	{
		cout << i << "  " << isPowerOfThree(i) << "  " << isPowerOfThree1(i) << "  " <<isPowerOfThree2(i)<< endl;
	}*/
	/*string x = to_string(12);
	cout << to_string(1) << endl;
	cout << x << endl;*/

	//leetcode202
	/*for (int i = 20; i <= 59;++i)
	cout <<i<<"   "<<ishappy(i) << endl;*/

	//leetcode 204
	/*for (int i = 3; i <= 100;++i)
	cout << i<<"   "<<countPrimes(i) << endl;*/

	/*for (int i = 10; i <= 100; ++i)
	{
		cout << i<<"  "<<countDigitOne(i) << endl;
	}*/
	/*for (int i = 1; i <= 120;++i)
	cout << i<<"  "<<getPermutation1(5, i) << endl;*/
	//getPermutation1(4, 24);
	//cout << roman.find('2') << endl;

	//vector<int>v1{1,3,3,3,5,7};
	////nextPermutation(v);
	//cout << lower_bound(v1.begin(), v1.end(), 2)-v1.begin() << endl; the first index of the same element or insert the
	//cout << upper_bound(v1.begin(), v1.end(), 5) - v1.begin() << endl;// insert later



	//for (int i = 1; i <= 20; ++i)
	//{
		//cout << nthUglyNumber(11) << endl;
	//}


	//leetcode313
	//cout << nthSuperUglyNumber();

	//leetcode268
	/*vector<int>v{ 0, 1,2,3,4,5 };
	cout << binary_missingnumber1(v) << endl;*/

	/*string test = "AAAAACCCCCAAAAACCCCCCAAAAAGGGTTT";
	traverse_vector(findRepeatedDnaSequences(test));*/

	//cout << bulbSwitch(5) << endl;


	// leetcode 191


	//leetcode137
	/*vector < int > v{ 1, 2, 1, 2, 1, 2, 3, 3, 4, 4, 4, 5, 5, 5 };
	cout << singleNumber_neater(v);*/

	//leetcode190
	/*for (int i =0; i < 120;++i)
	cout << i<<"   "<<reverseBits(i) << endl;*/


	//leetcode260
	/*vector<int>v{ 1, 1, 2, 3, 3, 4, 5, 5, 6, 6 };
	singleNumberIII(v);*/

	//int n = 4;
	//while (n-->0)cout << n << endl;
	//while (--n>0 )cout << n << endl;

	//test
	/*vector<int>vec{ 1, 2, 3, 4 };
	cout << accumulate(vec.begin(), vec.end(), 42) << endl;;*/

	//leetcode26
	/*vector<int>v{ 1, 1, 2 };
	cout << removeDuplicates(v) << endl;;*/

	//leetcode27
	/*vector<int>v{ 3, 2, 2, 3 };
	cout << removeElement(v, 3) << endl;*/


	//leetcode 36
//	vector < vector<char> >board{
//{ '.', '8', '7', '6', '5', '4', '3', '2', '1' }, { '2', '.', '.', '.', '.', '.', '.', '.', '.' }, { '3', '.', '.', '.', '.', '.', '.', '.', '.' },
//{ '4', '.', '.', '.', '.', '.', '.', '.', '.' }, { '5', '.', '.', '.', '.', '.', '.', '.', '.' }, { '6', '.', '.', '.', '.', '.', '.', '.', '.' },
//{ '7', '.', '.', '.', '.', '.', '.', '.', '.' }, { '8', '.', '.', '.', '.', '.', '.', '.', '.' }, { '9', '.', '.', '.', '.', '.', '.', '.', '.' } };
//	cout << isValidSudoku(board);


	//leetcode38
	/*for (int i = 1; i < 20; ++i)
	{
		cout << countAndSay(i) << endl;
	}*/

	//leetcode58
	/*string text = "wangtao xx you arae a bitch";
	cout << lengthOfLastWord(text) << endl;
	cout << lengthOfLastWord1(text) << endl;*/

	//leetcode 67
	/*string a = "1111111", b = "";
	cout << addBinary(a, b) << endl;*/

	//leetcode108
	//generate(5);


	//leetcode119
	/*traverse_vector(getRow(3));*/

	//leetcode53
	/*vector<int>v{ -2, 1, -3, 4, -1, 2, 1, -5, 4 };
	cout << maxSubArray(v) << endl;*/

	//vector<int>price{ 0, 1, 5, 8, 9, 10, 17, 17, 20, 24, 30 };
	//cout << bottom_up_cut(price, 8)<<endl;


//	vector<int>v{ 0, 8, 4, 12, 2, 10, 6, 14, 1, 9, 5, 13, 3, 11, 7, 15 };
//lengthOfLIS_neater(v);



	//leetcode160
	//ListNode* head = new ListNode(0);
	/*ListNode* first = new ListNode(1);
	ListNode* second =new ListNode(2);*/
	//first->next = second;
	/*ListNode* second = new ListNode(3);
	second->next = new ListNode(4);
	second->next = new ListNode(5);
	first->next->next = second;
	head->next = first;
	ListNode* headb = new ListNode(-1);
	headb->next = second;*/
	/*cout<<getIntersectionNode(second, first)->val;*/
	/*string number = "0124";
	cout << stoi(number) << endl;*/

	//leetcode165


	/*string version1 = "1", version2 = "1.1";
	cout<<compareVersion(version1, version2)<<endl;*/


	/*int a = 1, b = 2;
	swap1(a, b);
	cout << "a: " << a << "  b: " << b << endl;*/

	/*Complex a(1.0,1.0);
	Complex v(1.0, 1.0);
	Complex c=a + v;
	*/


	//leetcode344

	//string input = "12345";
	//cout << reverseString(input) << endl;

	//leetcode242
	/*string s = "", t = "";
	cout << isAnagram(s, t) << endl;*/

	//leetcode257
	/*TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->right = new TreeNode(5);
	binaryTreePaths(root);*/

	//vector < int >nums {0, 1, 0, 3, 12};
	//moveZeroes(nums);

	//test leetcode318
	/*vector < string > x{ "a", "aa", "aaa", "aaaa" };
	cout << maxProduct(x);*/

	//test leetcode120
	/*vector < vector<int> >triangle {{2}, { 3, 4 }, { 6, 5, 7 }, { 4, 1, 8, 3 }};
	cout << minimumTotal(triangle) << endl;*/

	//test leetcode324
	//vector<int>v{ 5, 4, 5, 6 };
	//wiggleSort(v);

	//test leetcode96
	//for (int i = 3; i <= 10;i++)
	//cout << 10<<"      "<<numTrees(5) << endl;

	//generateTrees(3);


//vector<int>res{ 2, 2, 3, 4, 5 ,1,1,1};
//topKFrequent(res, 2);

	//test leetcode331 failure
//string x = "9,#,92,#,#";
//cout << isValidSerialization(x) << endl;

	//test leetcode367 successful
	//for (int i = 0; i <= 100; ++i)
	//cout << i << "    " << isPerfectSquare(i) << endl;
	//cout<<isPerfectSquare(2147483647);

	//test huffman
	/*string x = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaabbbbbbbbbbbbbccccccccccccddddddddddddddddeeeeeeeeefffff";
	HUFFMAN(x);*/
	//test_priority();

	//test frentree
	/*vector<int>v{ 1, 3, 5 };
	FenwickTree f(v);
	cout<<f.sumRange(0, 2)<<endl;
	f.update(1, 2);
	cout << f.sumRange(0, 2) << endl;*/
	/*vector<vector<int>>matrix{ { 1, 3, 5, 7 }, { 10, 11, 16, 20 }, { 23, 30, 34, 50 } };
	for (int i = 1; i <= 50;++i)
	cout << i<<"   "<<searchMatrix(matrix, i) << endl;*/

	//string x = "21*311-411*51";
	//traverse_vector(diffWaysToCompute(x));


	//test leetcode238
	/*vector<int>v{ 1, 2, 3, 4 };
	traverse_vector(productExceptSelf(v));*/

	/*int a[] = { 5, 4, 3, 0, 10, 6, 7 };
	countsort(a, 7, 10);*/

	/*string x = " 32 - 55 / 2";
	cout << calculateII(x) << endl;*/
	//cout << isdigit(' ') << endl;
	//cout << isdigit(x[13]) << endl;

	//traverse_vector(Parenthesis(3));


	//leetcode224
//string expression =  "(1 + (4 + 5 + 2) - 3) + (6 + 8)" ;
//	cout << calculateII(expression) << endl;


	/*WordDictionary word;
	word.addWord("word");
	word.addWord("dad");
	word.addWord("mad");
	cout << word.search(".ad") << endl;*/



	//leetcode207
	/*vector<pair<int, int>> prerequisites{ { 2, 0 }, { 2, 1 }, { 3, 1 }, { 4, 1 }, { 3, 2 }, { 5, 2 }, { 5, 3 }, {5,4}
};
	cout << canFinish(6, prerequisites)<<endl;*/

	//cout << rangeBitwiseAnd(5, 7) << endl;

	/*TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	root->left->right = new TreeNode(5);
	root->right->right = new TreeNode(4);
	rightSideView(root);*/

	/*Tire t;
	t.addWord("english");
	t.addWord("china");
	t.addWord("england");
	cout << t.search("chia") << endl;
	cout <<t.startswith("eng") << endl;*/
	//cout << fractionToDecimal(1, 7) << endl;

	/*vector<int>nums{1};
	cout << largestNumber(nums) << endl;*/



	/*vector<int>v{ 1 };
	cout << findPeakElement(v) << endl;*/

	/*vector<int>v{ 2, 1, 6, 5, 4, 3 };
	cout << findMin_neater(v) << endl;
	cout << findMin1(v) << endl;
	cout << findMin2(v) << endl;*/


	//leetcode150

	//ListNode* head = new ListNode(9);
	//head->next = new ListNode(6);
	/*head->next->next = new ListNode(7);
	head->next->next->next = new ListNode(5);
	head->next->next->next->next = new ListNode(-5);
	head->next->next->next->next->next = new ListNode(10);
	head->next->next->next->next->next->next = new ListNode(2);*/
	//printList(insertionSortList(head));

	//solve(144);
	/*unordered_set < string > wordDict{"leet", "codex"};
	string x = "leetcode";
	cout << wordBreak(x, wordDict) << endl;*/

	/*TreeNode* root = new TreeNode(1);
	root->left = new TreeNode(2);
	root->right = new TreeNode(3);
	cout << sumNumbers(root) << endl;*/

	/*string x = "a";
	partition(x);*/


	//TreeNode* root = new TreeNode(-2);
	//root->left = new TreeNode(4);
	//root->right = new TreeNode(-3);
	/*root->left->left = new TreeNode(11);
	root->left->left->left = new TreeNode(7);
	root->left->left->right = new TreeNode(2);
	root->right->right = new TreeNode(4);
	root->right->left = new TreeNode(13);
	root->right->right->right = new TreeNode(1);
	root->right->right->left = new TreeNode(5);*/
	//pathSumII(root,-5);

	/*unordered_set<string>worddic{ "hot", "dot", "dog", "lot", "log" };
	string beginword = "hit", endword = "cog";
	cout << ladderLength(beginword, endword, worddic)<<endl;*/
	/*vector < vector<char> >board{ { 'X', 'X', 'X', 'X' }, { 'X', 'O', 'O', 'X' }, {'X', 'X', 'O', 'X' }, { 'X', 'O', 'X', 'X' }
};
	solve(board);*/



	/*ListNode* head = new ListNode(1);
	head->next = new ListNode(4);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(2);
	head->next->next->next->next = new ListNode(5);
	head->next->next->next->next->next = new ListNode(2);*/
	//printList(reverseBetween(head,1,1));
	//printList(partition(head,3));

	/*vector < int >v {1, 1, 1, 2, 2, 3};
	cout << removeDuplicatesII(v) << endl;*/

	//cout << uniquePaths(3, 7) << endl;

	/*ListNode* head = new ListNode(1);
	head->next = new ListNode(2);
	head->next->next = new ListNode(3);
	head->next->next->next = new ListNode(4);
	head->next->next->next->next = new ListNode(5);
	printList(rotateRight(head, 7));*/

	//vector<vector<int>>matrix{ { 3,4 }};
	//vector<vector<int>>matrix{ { 1, 2, 3, 4, 5 }, { 6, 7, 8, 9, 10 }, { 11, 12, 13, 14, 15 }, { 16, 17, 18, 19, 20 }, {21,22,23,24,25} };

	//traverse_vector(spiralOrder(matrix));
	//solve();
	//generateMatrix(0);
	/*vector<vector<int>>matrix{ { 1, 2, 3, 4, 0 }, { 6, 7, 0, 9, 10 }, { 11, 12, 13, 14, 15 }, { 16, 0, 18, 19, 20 }, { 21, 22, 23, 24, 25 } };
	setZeroes(matrix);*/


	//vector<int>v{ 1,2,3,3};
	//combinations(v, 2);
	//subsets(v);
	//combine(3, 2);

	//subsetsWithDup(v);
	
	//ListNode* head = new ListNode(1);
	//head->next = new ListNode(1);
	//head->next->next = new ListNode(4);
	//head->next->next->next = new ListNode(4);
	//head->next->next->next->next = new ListNode(5);
	//head->next->next->next->next->next = new ListNode(5);
	////head->next->next->next->next->next = new ListNode(4);
	////head->next->next->next->next->next->next = new ListNode(5);
	//printList(deleteDuplicates(head));

	//grayCode(2);
	/*vector<int>res{ 1,1};
	for (int i = 0; i <= 8; ++i)cout << i << "   " << search(res, i) << endl;*/
	


	/*vector<vector<char>>board{ { 'A', 'B', 'C', 'E' }, { 'S', 'F', 'C', 'S' }, { 'A', 'D', 'E', 'E' } };
	vector<string>word{ "ABCCED", "SEE", "ABCB" };
	for (auto n : word)
	{
		cout<<n<<"   "<<exist(board, n)<<endl;
	}*/

	//vector<int>res{ 2,2,1,1};
	//permute(res);
	//permuteUnique(res);
	//permuteUniqueII(res);
	//vector<int>v{ 2, 3, 6, 7 };
	//combinationSum(v, 7);

	//vector<int>v{ 2, 3, 6, 7};
	/*for (int i = 0; i <= 7; ++i)
		cout << i << "    " << searchInsert(v, i) << endl;*/

	//searchRange(v, 1);


	/*for (int i = 0; i <= 8; ++i)
	cout << i << "    " <<my_lower_bound(v, i) << endl;

	cout << "--------------------------" << endl;

	for (int i = 0; i <= 8; ++i)
		cout << i << "    " << lower_bound(v.begin(),v.end(), i)-v.begin() << endl;*/


	//for (int i = 0; i <= 8; ++i)
	//	cout << i << "    " << my_upper_bound(v, i) << endl;

	//cout << "--------------------------" << endl;

	//for (int i = 0; i <= 8; ++i)
	//	cout << i << "    " << upper_bound(v.begin(), v.end(), i) - v.begin() << endl;
	//return 0;

	/*string path = "/home//foo/";
	cout << simplifyPath(path) << endl;*/

	


	//leetcode49
	/*vector<string>v1{ "eat", "tea", "tan", "ate", "nat", "bat" };
	groupAnagrams(v1);*/

	//cout << guessNumber(10) << endl;

	/*string x = "feabvggvacf";
	cout<<removeDuplicateLetters(x);*/

	//leetcode315
	//vector<int>v{ 5, 2, 6, 1 };
	//traverse_vector(countSmaller(v));
	//generateTrees(4);

	/*vector<int>v{ 1, 2, 3 };
	permute(v, 4);*/
	


	//printf("%lf", getapproximate());




	/*@taobupt
	2016-7-28
	*/

	/*int x, n = 0, kase = 0;
	while (scanf("%d", &n) == 1 && n)
	{
		int s = 0, min1 = INF, max1 = -INF;
		for (int i = 0; i<n; ++i)
		{
			scanf("%d", &x);
			s += x;
			min1 = min(min1, x);
			max1 = max(max1, x);
		}
		if (kase)printf("\n");
		printf("Case %d: %d %d %.3f\n", ++kase, min1, max1, (double)s / n);
	}*/

	


	/* 2.3*/
	//int n;
	//scanf("%d", &n);
	//for (int i = 0; i < n; ++i)
	//{
	//	for (int j = 0; j < i; ++j)printf(" ");
	//	for (int j = i; j < 2 * n - 1 - i; ++j)printf("#");
	//	//for (int j = 2 * n - 1 - i; j<2 * n - 1; ++j)printf(" ");
	//	printf("\n");
	//}



	/*2.2                          */
	/*int x, y, z,kase=0;
	while (scanf("%d%d%d", &x, &y, &z) == 3)
	{
		if (kase)printf("\n");
		int i = 10;
		for (i = 10; i <= 100; ++i)
		{
			if (i % 3 == x && i % 5 == y && i % 7 == z)
			{
				printf("Case %d: %d\n", ++kase, i);
				break;
			}
		}
		if(i>100)printf("Case %d: No answer", ++kase);
	}*/
	/*double i;
	for (i = 9; i != 10; i += 0.1)
	{
		printf("%.1f\n", i);
	}*/
	//cout <<(10.0 != 10) << endl;
	
	





	/*2.5*/
	//int x, y, z,kase=0;
	//while (scanf("%d%d%d", &x, &y, &z) == 3 && (x != 0 || y != 0 || z != 0))
	//{
	//	int i = 0;
	//	string res;
	//	res = (x >= y ? to_string(x / y) : "0") + ".";
	//	x = x%y;
	//	while (i <z)
	//	{
	//		i++;
	//		x *= 10;
	//		res += to_string(x / y);
	//		x = x%y;
	//	}
	//	if (double(x) / y >= 0.5)
	//	{
	//		++res.back();
	//	}
	//	printf("Case %d: %s\n", ++kase, res.c_str());//not recommend
	//}



	//

	/*int a[5] = { 1, 2, 3, 4, 5 };
	int b[5] = {0};
	memcpy(b, a, sizeof(int) * 3);
	for (int i = 0; i < 5; ++i)cout << b[i] << endl;*/

	//int n, k, first = 1;
	//memset(a, 1, sizeof(a));
	//scanf("%d%d", &n, &k);
	//for (int i = 2; i <= k; ++i)
	//{
	//	for (int j = 1; j <= n; ++j)
	//	{
	//		if (j%i == 0)a[j] = !a[j];
	//	}
	//}
	//for (int i = 1; i <= n; ++i)
	//{
	//	if (a[i])
	//	{
	//		if (first) first = 0;
	//		else printf(" ");
	//		printf("%d", i);
	//	}
	//}
	//printf("\n");


	/*int n, x=0, y=0, tot = 0;
	scanf("%d", &n);
	memset(a, 0, sizeof(a));
	tot = a[x][y = n - 1] = 1;
	while (tot < n*n)
	{
		while (x + 1 < n && !a[x + 1][y])a[++x][y] = ++tot;
		while (y- 1>=0 && !a[x][y-1])a[x][--y] = ++tot;
		while (x - 1>=0 && !a[x -1][y])a[--x][y] = ++tot;
		while (y + 1 < n && !a[x][y+1])a[x][++y] = ++tot;
	}
	for (x = 0; x < n; ++x)
	{
		for (y = 0; y < n; ++y)
		{
			printf("%3d", a[x][y]);
		}
		printf("\n");
	}*/
	


	/*int count = 0;
	char s[20], buf[99];
	scanf("%s", s);
	for (int abc = 111; abc <= 999; abc++)
	{
		for (int de = 11; de <= 99; de++)
		{
			int x = abc*(de % 10), y = abc*(de / 10), z = abc*de;
			sprintf(buf, "%d%d%d%d%d", abc, de, x, y, z);
			int ok = 1;
			for (int i = 0; i < strlen(buf); i++)
			{
				if (strchr(s, buf[i]) == NULL)ok = 0;
			}
			if (ok)
			{
				printf("<%d>\n", ++count);
				printf("%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n", abc, de, x, y, z);
			}
		}
	}
	printf("the number of solutions = %d\n", count);*/





	/*2016-7-29
	@taobupt
	*/


	/*int T, n;
	memset(a, 0, sizeof(a));
	for (int m = 1; m < maxn; ++m)
	{
		int x = m, y = m;
		while (x > 0){ y += x % 10; x /= 10; }
		if (a[y] == 0 || m < a[y])a[y] = m;
	}
	scanf("%d", &T);
	while (T--)
	{
		scanf("%d", &n);
		printf("%d\n", a[n]);
	}*/



	/*int T;
	char s[maxn];
	scanf("%d", &T);
	while (T--)
	{
		scanf("%s", s);
		int ans = 0, n = strlen(s);
		for (int i = 1; i < n; ++i)
		{
			if (lesschar(s, i, ans))ans = i;
		}
		for (int i = 0; i < n; ++i)
		{
			putchar(s[(i + ans) % n]);
		}
		putchar('\n');
	}


	int c, q = 1;
	while ((c = getchar())!=EOF)*/



	/*int n, q, x, a[maxn], kase = 0;
	while (scanf("%d%d", &n, &q) == 2 && n)
	{
		printf("CASE# %d:\n", ++kase);
		for (int i = 0; i < n; ++i)scanf("%d", &a[i]);
		sort(a, a + n);
		while (q--)
		{
			scanf("%d", &x);
			int p = lower_bound(a, a + n, x) - a;
			if (a[p] == x)printf("%d found at %d\n", x, p + 1);
			else printf("%d not found\n", x);
		}
	}*/



	/*set<string>dict;
	string s, buf;
	while (cin >> s)
	{
		for (int i = 0; i < s.size(); ++i)
		{
			if (isalpha(s[i]))s[i] = tolower(s[i]);
			else s[i] = ' ';
		}
		stringstream ss(s);
		while (ss >> buf)dict.insert(buf);
	}
	for (set<string>::iterator it = dict.begin(); it != dict.end(); ++it)
	{
		cout << *it << "\n";
	}*/


	/*string s = "abcd efg hi",buf;
	stringstream ss(s);*/
	

	

	/*int n = 0;
	string s;
	map<string, int>cnt;
	vector<string>words;
	while (cin >> s)
	{
		if (s[0] == '#')break;
		words.push_back(s);
		string r = repr(s);
		if (!cnt.count(r))cnt[r] = 0;
		cnt[r]++;
	}
	vector<string>ans ;
	for (int i = 0; i < words.size(); ++i)
	{
		if (cnt[repr(words[i])] == 1)ans.push_back(words[i]);
	}
	sort(ans.begin(), ans.end());
	traverse_vector(ans);*/

	//
	//stack<int>s;
	//int n;
	//cin >> n;
	//for (int i = 0; i < n; ++i)
	//{
	//	string op;
	//	cin >> op;
	//	if (op[0] == 'P')s.push(ID(Set()));
	//	else if (op[0] == 'D')s.push(s.top());
	//	else
	//	{
	//		Set x1 = Setcache[s.top()]; s.pop();
	//		Set x2 = Setcache[s.top()]; s.pop();
	//		Set x;
	//		if (op[0] == 'U')set_union(ALL(x1), ALL(x2), INS(x));
	//		if (op[0] == 'I')set_intersection(ALL(x1), ALL(x2), INS(x));
	//		if (op[0] == 'A'){ x = x2, x.insert(ID(x1)); }
	//		s.push(ID(x));
	//	}
	//	cout << Setcache[s.top()].size() << endl;
	//}


	/*int t, kase = 0;
	while (scanf("%d", &t) == 1 && t)
	{
		printf("Scenario #%d\n", ++kase);
		map<int, int>team;
		for (int i = 0; i < t; ++i)
		{
			int n, x;
			scanf("%d", &n);
			while (n--){ scanf("%d", &x); team[x] = i; }
		}
		queue<int>q, q2[maxt];
		for (;;)
		{
			int x;
			char cmd[10];
			scanf("%s", cmd);
			if (cmd[0] == 'D')
			{
				int t = q.front();
				printf("%d\n", q2[t].front()); q2[t].pop();
				if (q2[t].empty())q.pop();
			}
			else if (cmd[0] == 'E')
			{
				scanf("%d", &x);
				int t = team[x];
				if (q2[t].empty())q.push(t);
				q2[t].push(x);
			}
		}
		printf("\n");
	}*/
	


	/*while (scanf("%s", s + 1) == 1)
	{
		int n = strlen(s + 1);
		lastpos = curpos = 0;
		nextpos[0] = 0;
		for (int i = 1; i <=n; ++i)
		{
			char ch = s[i];
			if (ch == '[')curpos = 0;
			else if (ch == ']')curpos = lastpos;
			else
			{
				nextpos[i] = nextpos[curpos];
				nextpos[curpos] = i;
				if (curpos == lastpos)lastpos = i;
				curpos = i;
			}
		}
		for (int i = nextpos[0]; i != 0; i = nextpos[i])
		{
			printf("%c", s[i]);
		}
		printf("\n");
	}*/



	/*2016-7-30
	@taobupt*/
	/*int I, D;
	while (scanf("%d%d", &D, &I) == 2)
	{
		int k = 1;
		for (int i = 0; i < D - 1; i++)
		{
			if (I % 2){ k = k * 2; I = (I + 1) / 2; }
			else { k = k * 2 + 1; I /= 2; }
		}
		printf("%d\n", k);
	}*/

	/*vector<int>inorder;
	vector<int>postorder;
	while (read_list(inorder))
	{
		read_list(postorder);
		TreeNode* node = contruct_tree(inorder, postorder);
		best_sum = INT_MAX;
		if (node == NULL)printf("No Answer\n");
		else
		{
			dfs(node, 0);
			printf("best_sum: %d leaf: %d", best_sum, best);
		}

	}*/


	/*int T, W;
	scanf("%d", &T);
	while (T--)
	{
		if (isbalance(W))printf("YES\n"); else printf("NO\n");
		if (T)printf("\n");
	}*/


	/*while (scanf("%d%d", &m, &n) == 2 && m && n)
	{
		for (int i = 0; i < m; ++i)scanf("%s", pic[i]);
		memset(idx, 0, sizeof(idx));
		int cnt = 0;
		for (int i = 0; i < m; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				if (idx[i][j] == 0 && pic[i][j] == '@')dfs_graph(i, j, cnt++);
			}
		}
		printf("%d\n", cnt);
	}*/





	//leetcode126
	//string beginWord = "hit", endWord = "hit";
	//unordered_set<string>wordList{ "hot", "dot", "dog", "lot", "log" };
	//findLadders(beginWord, endWord, wordList);

	/*while (read_case()) {
		solve();
	}*/


	//vector<vector<int>>matrix{ {1, 3, 5, 7, 9 }, { 2, 4, 6, 8, 10 }, { 11, 13, 15, 17, 19 }, { 12, 14, 16, 18, 20 }, { 21, 22, 23, 24, 25 } };
	////for (int i = 1; i <= 25;++i)
	//printf("%d\n", kthSmallest(matrix, 25));



	/*printf("%d\n", JosephusProblem(1, 1));
	printf("%d", JosephusProblem_Solution4(1, 1));*/

	/*vector<int>nums1{ };
	vector<int>nums2{  };
	kSmallestPairs1(nums1, nums2, 10);*/


	/*vector<vector<int>>matrix{ { 1, 5, 9 }, { 10, 11, 13 }, { 12, 13, 15 } };
	cout<<kthSmallest1(matrix, 7);*/

	//vector<int>ans{1,2,3};
	//print_permutation1(4, ans, 1);
	//permuteUnique(ans);
	//print_nextpermutation();
	vector<int>nums{ 4,7,9 };
	vector<int>res;
	int a[] = { 1, 2, 3 };
	//print_subset(nums, res);
	//print_subset(nums, res);
	//print_subset1(3, res, 0);


	print_subsets();

	return 0;
}






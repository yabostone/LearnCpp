//============================================================================
// Name        : LearnCplusplus.cpp
// Author      : hrl
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string>
#include<vector>

using namespace std;

//  可以通过输入EOF的方式 终止  使用cin。。。速度慢
/*
int main() {
	//学习C++的一些基本特性
	int sum = 0;
	int value = 0;
	while (std::cin >> value)
		sum += value;
	std::cout << "Sum is : "  << sum << std::endl;

	return 0;
}
*/
//-----------------------------------使用struct
/*
struct Sales_item {
	int ISBN;
	int number ;
	int price;
}item;//item 可做为一个赋值

int main()
{
	//Sales_item item;  赋值方法
	std::cin >> item.ISBN;
	std::cout << item.ISBN << std::endl;
	return 0 ;
}

*/
//这里注意那个&s 没有 &  ， 还有，  使用char ISBN   ，后面就不用[]
/*
struct Sales_item {
	char ISBN[101];
	int number ;
	int price;
}item;//item 可做为一个赋值

int main() {


	scanf("%s %d" , item.ISBN , &item.number) ;
	printf("%s %d" , item.ISBN , item.number);

}

*/
/*
struct Sales_item {
	int ISBN;
	int number ;
	int price;
	bool Isout;//使用 bool 不使用boolean,,boolean是java 再用。。。

}item;//item 可做为一个赋值

int main()
{
	//Sales_item item;  赋值方法

	Sales_item moreitem;
	moreitem.Isout = true;//这里需要使用小写的方式。。。。
	std::cin >> item.ISBN;
	std::cout << item.ISBN << "   " <<moreitem.Isout << std::endl;
	return 0 ;
}

*/

/*
struct Sales_item {
	int ISBN;
	int number ;
	long long price;
	char16_t name;//0x400b58  像这样的才是合适的类型赋值
}item;//item 可做为一个赋值

int main()
{
	//Sales_item item;  赋值方法
	std::cin >> item.name;
	std::cout << item.name << std::endl;
	return 0 ;
}

*/
/*
struct Sales_item {
	int ISBN;
	int number ;
	long long price;
	char name[101];//c++11的
}item;//item 可做为一个赋值

int main()
{

	//item.name = 'one world use single ';  这种方式是错误的的。。单引号表示一个字符，双引号才是char[]字符串
	// item.name = "one sgnle!!";  还是错误，这里的字符串是const char[12]  固定且定长！！！！



	std::cout << item.name << "\7\40\115\0\\" << std::endl;
	std::cout << "\x61\x40\x41\x31\n\12" << std::endl;//16进制和ascii码需要注意。。。
	std::cout << L'a'  << u8"hi!"  <<  1E-3F << "\n" << std::endl;
	std::cout <<  u"aaaa"  << endl;
	return 0 ;
}
*/
/*
struct Sales_item {
	int ISBN;
	int number ;
	long long price;
	float name;
}item;

int main()
{

	scanf("%f",&item.name);
	printf("%6.2f",item.name);  //注意输入和出的方式，只是输出才对精确度要求，输入不要。
	return 0 ;
}
*/
/*
 *
struct Sales_item {
	int ISBN;
	int number ;
	long long price;
	//string name;  //使用string这个定义，注意！！需要使用std::string
	std::string name;
	std::string book;
	std::string tax;
	char bingo[101];
};

int main()
{
	Sales_item item;

	std::string book("wowowowowowowo using book");//可以这样初始化，但是不能这样的赋值
	item.book = "sadfsadfsadf";  //这是赋值的方法
	//item.bingo = "rilsdfsdf";
	//只要是到了结构里面，就不能直接赋值了。
	//tax 默认为空串

	scanf("%s" , item.bingo);
	printf("%s" , item.bingo);

	std::cin >> item.name;
	std::cout << item.name << " \12  "<<  item.book <<std::endl;

	//printf("%s");
	//当使用了string这个的时候，只能用cout的方式进行输出了，这就是所用string的代价
  //
	return 0 ;
}
*/
//----------------------------------------------
/*
typedef int ElemType ;  //使用Typedef进行ElemType。。。
extern int other ; //只是将其他的地方的定义other用了，这里只是声明other不是定义other
int j ; //!!!!声明并定义j ，

struct Sales_item {
	ElemType ISBN;
	int number ;
	int price;
};

int main()
{
	Sales_item item;
	int _ ;   // you  can use _
	int  i = 1012;
	int &out = i ;
	//std::cin >> item.ISBN >> _ ;
	//std::cout << item.ISBN << std::endl;
	//std::cin >> out ;
	std::cout  << out << std::endl;
	i =2342342;//引用的特点
	std::cout  << out << std::endl;

	int *pi ;// *声明的一部分

	*pi = out ; // *  一个解引用符
	double *ptr = nullptr;
	double *ptr2 = NULL; // using cstdlib!!!
	//赋值永远改变的是等号左边的对象！！
	return 0 ;
}

*/

//自定义数据结构
/*
struct Sales_data {
	std::string bookNo;
	unsigned units_sold = 0 ;
	double revenue = 0.0 ;
};

*/
//-----------------------------------------------------
//使用string
/*
int main(){
	string s1 ;
	string s2(s1);
	string s3 = s2 ;
	string s4("value");
	string s5 = "value2" ;
	string s6(3, 'd');  //分清拷贝初始化和直接初始化的关系

	string word1 , word2 ;

//	while(cin >> word1 ) //一直读，空格结束，直到文件末尾，EOF没有用！！
	//	cout << "tag "  <<  word1 << endl;

	//   cout << "\12   " << endl;
	//string 字符串的比较和Y型拉链字符串比较，合并！
	 // cin >> s5  不能cin 之后没有endl ， 除非使用while的方式

	 //   s5 =  "baodu" + "vallll" + s4  ; //错误，这里不能字符串直接相加，两个qian面的。。需要有s4放在前面作为一个转换的方式来解决
	    s5 = s4 + "agfas" +  "baodu" + "vallll"; //正确

	while(getline(cin, word2)){ //getline 保留空白符，在换行符凑腿《停止（读进来后丢弃），直接getline，有返回
		if(!word2.empty())  // line.empty 如果字符串为空，就返回true,此处，这里加上后，直接enter就不会显示tag。
			cout <<  "tag2 "  << word2 << endl;
		cout << word2.size() << endl;
		//有size就不使用int ， 是一个无符号整形数！！
	}//end while
	 //直接enter ，还是有tag2出来，后面没有了。

	while(cin >> s5){
		if(s5 == "book")
			cout << "book start " << s5 << endl;
		else if(s5 == "perfume")
			cout << "perfume sdfsdf "  << s5 << endl;
		else
			cout << "Error!" << endl;
		}

	return 0 ;

}

*/

//-----------------------------------vector=================
/*
int main() {
string val;
vector<int> ivec;
vector<string> istring;
vector<vector<string>> file;




vector<string> s1;
vector<string> s2(s1);
vector<string> s5 = {"ballll"};  //至少要用大括号将其括起
vector<string> s3{3,"fa"};  //注意，这里的可用的部分使用大括号的，不是小括号，小括号是拷贝的时候使用
vector<string> s4 = {"a,b,b," , "asdfsadf " , "sadf ba"};

//  for(vector<string> i  = 0 ; i < 20 ; i++)
// 如果不是int的话，要使用专门的iterator才行，int的话，可以直接加到vector<int>的值上

for (int i = 0 ; i != 20 ; i++)
{
	ivec.push_back(i);
}
cout << ivec << endl;

cout << "me <<"  << endl;
cout << s4[0] << endl; //cout 的时候，不能直接cout s4 ， 需要下标输出单个内部的值
auto e = s4.end();
for(auto it = s4.begin();it != e ;++it){  //auto 省时省力，，，不过是一个迭代器， 相当于从一个位置移动到另一个位置的方法
	// < 使用较少，但是 ！= 是所有的定义的数据结构都是会使用

	cout << *it << endl;  // 使用指针的方式才能正确的输出
}
for(vector<string>::iterator it = s4.begin();it != s4.end() ;++it){  //auto 省时省力，，，不过是一个迭代器， 相当于从一个位置移动到另一个位置的方法
	// < 使用较少，但是 ！= 是所有的定义的数据结构都是会使用

	cout << *it << endl;  // 使用指针的方式才能正确的输出
}

}

*/

//指针数组
/*
int main() {
int ia[3][4] = {{1,2,3,9}, {23 ,24, 243,2} , {2345,25,78,211}};

for (int i = 0 ; i < 3 ; i++)
	for(int j = 0 ; j < 4 ; j++)
		cout << ia[i][j] << endl;
cout << "----"  << endl;


for(size_t i = 0 ; i != 3 ; ++i)
	for(size_t j  = 0 ; j != 4 ; ++j ) {
		cout << ia[i][j]  << endl;
	}
cout <<  "下面的是等价的"  << endl;
//输出用的col，，这是一个类似迭代器的东西，模式
for(auto &row : ia)
	for(auto &col : row ) {
		cout << col  << endl;
	}

cout << "使用见了鬼的指针，一定要做，像这个cin cout  多用后就知道方向使用了。。。" << endl;

for(auto p = ia ; p != ia + 3 ; ++p)
	for(auto q = *p  ; q != *p + 4 ; ++q)
		cout << *q << endl;

cout << "使用标准库函数begin and end `````"  <<  endl;
for(auto p = begin(ia) ; p != end(ia) ; ++p)
	for(auto q = begin(*p)  ; q != end(*p) ; ++q)
		cout << *q << endl;
return 0;

}
*/

//位运算
/*
int main() {
	unsigned long quiz1 = 0 ;
	unsigned long luz = 1;

	quiz1 |= luz << 27;//等价于下面的
	quiz1 = quiz1 | luz << 27 ;
	cout << quiz1 <<endl;

	quiz1 &= ~(luz << 27); //& 与运算 ， ～ 按位取反  ， 结果就是将27的那个变成0  ，其他的不变。
	bool status27 = quiz1 & (luz << 27);
	cout << status27 << endl;

	return 0;

}
*/
/*
struct Sales_item {
	char ISBN[101];
	double number ;
	int price;
	string me ;
}item;

int main(){
	Sales_item *p ;
	cout << sizeof(Sales_item) << "    "
		<< sizeof(item) << "   "
	//	<< sizeof(ISBN) << "    "  错误哦，要调用的是item。ISBN
		<< sizeof(item.ISBN) << "     "
	//	<< sizeof(item.ISBN[]) << "    " << endl;  错误， 不能有[]
		<< sizeof(item.ISBN[4]) << "   " << endl;

	cout 	<< sizeof(item.me)  << "     "  << sizeof(item.number) << endl;
	return 0;

}
//前四章完毕！！
*/
/*
int main() {
	const vector<string>  scores = {"F" , "D" , "C" ,"B" , "A" ,"A++"};
	auto s = 0 ;
	string letters ;
	auto  sought = 999;  //使用auto需要添加需要的初始值
while(cin >> s  && s != sought){  // 发现想要的值之后，循环终止，否则就是看。。
//	; //空语句
	if(s < 60 )
		letters = scores[0];
	else{
		letters = scores[(s - 50)/10];
		if(s % 10 > 7)  //这里注意了。。。。没有括号，结果F的部分也苦啦啦啦。
			letters += '+' ; //注意这里的string 添加++ 需要使用的是单引号
		else if(s % 10 < 3)
			letters += '-';
	}
	cout << letters << endl;
}

}

*/

// switch 什么的，还有try那些，下面看函数部分。
/*
int fact(int val) {
		int ret = 1;
		while(val > 1){
			//后置算法，和ret *= val--; 等价
			ret *= val;
			val--;
		}
		return ret;
	}//fact
int main() {

	int t = 5;
	cout << fact(6)  << endl;
	return 0;

}
*/
/*
size_t count_calls(){
	static size_t ctr = 0;//static
	++ctr;
	return ctr;
}
int main() {
	for(size_t i =0 ; i < 10 ; ++i){
		cout << count_calls() <<endl;
		//output 1 2 3 4 5 6 7 8 9 10
	}
	return 0 ;
}
*/
/*
//-------------------------------------------------
// 改进的Sales-data类
struct Sales_data {

	std::string isbn() const  //std::string Sales_data::isbn(const Sales_data *const this)
	//  Sales_data::isbn(&total);传递了total的地址
	{return  bookNo;}
	//Sales_data& combine(const Sales_data&);
	// 等价于  Sales_data& Sales_data::combine(const Sales_data &rhs)
	Sales_data& combine(const Sales_data &rhs){
		units_sold += rhs.units_sold;  //this->units_sold
		revenue += rhs.revenue;  //this.revenue
		return *this;  //返回一个Sales_data  参数
	}
	double avg_price() const
	{
		if(units_sold)
			return revenue/units_sold;
		else
			return 0;
	}
	//这三个可以写在后面，编译时进行的是两步编译，先编译值，再编译函数！！！
		std::string bookNo;//书的编号
		unsigned units_sold = 0;  // 卖出的数量
		double revenue = 0.0;  //财务收入

};


//Sales_data add(const Sales_data& , const Sales_data&);
//std::ostream &print(std::ostream& , const Sales_data&);
//std::istream &read(std::istream& , Sales_data&);


//接受了IO类型的引用  ， 由于IO类属于不能被拷贝的类型， 于是只能使用引用来进行传递，
istream &read(istream &is , Sales_data &item){
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price ;
	item.revenue = price * item.units_sold;
	return is;
}

ostream &print (ostream &os , const Sales_data &item ){
	os << item.isbn()  << "  "  << item.units_sold << "   "
			<< item.revenue  << "   " << item.avg_price()  ;
	return os;
}

Sales_data add(const Sales_data &lhs , const Sales_data &rhs){
	Sales_data  sum = lhs;
	sum.combine(rhs);
	return sum;
}
*/

//-----------------------------------------

/*
 * 构造函数， 构造函数没有返回类型， 构造函数和类名相同，不能被声明为const，
 * 构造过程中可以对其写值
 * 使用vector或者string能够避免分配和释放内存带来的复杂性！！！！
 *class和struct 仅仅在默认的访问权限上表示不同！！！ class 偏 private ， struct 偏 public
 *class和struct
 *
 */
/*
class Sales_data{
public :
	Sales_data() = default ;
	Sales_data(const std::string &s , unsigned n , double p):
		bookNo(s) , units_sold(n) , revenue(p*n) {   }
	Sales_data(const std::string &s):bookNo(s) {   }
	Sales_data(std::istream&) ;
	std::string isbn() const {return bookNo ;}
	Sales_data &combine(const Sales_data&) ;
private:
	double avg_price() const
	{return units_sold ? revenue/units_sold : 0 ; }
	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;

friend	istream &read(istream &is , Sales_data &item){
		double price = 0;
		is >> item.bookNo >> item.units_sold >> price ;
		item.revenue = price * item.units_sold;
		return is;
	}

friend	ostream &print (ostream &os , const Sales_data &item ){
		os << item.isbn()  << "  "  << item.units_sold << "   "
				<< item.revenue  << "   " << item.avg_price()  ;
		return os;
	}

friend	Sales_data add(const Sales_data &lhs , const Sales_data &rhs){
		Sales_data  sum = lhs;
		sum.combine(rhs);
		return sum;



};
*/

//C++的书籍！！！！
/*
int main() {
	double in ;
	double sum;
	//cout << sum << endl;
	while(cin >> in){
		sum += in;
		cout << sum << endl;
	}
	cout << "end "  << endl;

}
*/
int main() {
unsigned u = 075 , u2 = 42 ;
//wchar_t me = 'a' ;

cout << u2 - u << endl;
cout << u - u2 << endl;
return 0;

}


//------------------------------------------------------------------------------------------------------------
//============================================================================
// Name        : PracticeC++1-20.cpp
// Author      : hrl
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
//#include "Sales_item.h"

/*
int main() {

	Sales_item book;
	std::cout << "输入销售记录：  "
			<<  std::endl;
	while(std::cin >> book ) {
		std::cout << "ISBN , 售出数  销售额  平均售价为:  "  << book  << std::endl;
	}
	return 0;
}
*/
/*
#include <iostream>
#include <string>

using namespace std;

int main() {
	string word , line;
	cout << " 1按词读取， 2 为 整行读取  " <<  endl;
	char ch ;

	cin >> ch;
	if(ch == '1' ) {
		cout << "输入字符串：   Welcome to C++  family  "  << endl;
		cin >> word;
		cout <<  word << endl;
		return 0 ;
	}
	cin.clear();
	cin.sync();
	if(ch == '2')  //字符串的输入！！
	{
		getline(cin  ,line)  ;
		cout << line << endl;
		return 0 ;
	}
	cout << "输入有误";
	return -1;

}

*/

#include<iostream>
#include <string>
#include <vector>
#include<cstring>
#include<cstdlib>
#include<ctime>
#include<stdexcept>
using namespace std;
/*
int main() {
	string s , result;
	char confirm = 'y';
	cout << "输入第一个字符串！！"  <<  endl;

	while(cin >> s){
	result +=  s;  //result.size()
	cout << "是否接着输入(y or n)" << endl;
	cin >> confirm  ;
	if(confirm == 'y'  ||  confirm == 'Y'){
		cout << "The next  is" << endl;
	}else
		break;
  }

	cout << "输出拼接～～～" << result << endl;
	return 0 ;
}
*/
/*
int main() {
	vector<string>  vstring;
	string s , result;
	char confirm = 'y';
	cout << "vector部分输入第一个字符串！！"  <<  endl;

	while(cin >> s){
	vstring.push_back(s);
	//result.size()
	cout << "是否接着输入(y or n)" << endl;
	cin >> confirm  ;
	if(confirm == 'y'  ||  confirm == 'Y'){
		cout << "The next  is" << endl;
	}else
		break;
  }

	//cout << "输出拼接～～～" << result << endl;
	for(auto  mem : vstring)
		cout << mem << "   ";
	for(auto it = vstring.cbegin() ;it != vstring.cend() ; it ++)
		cout << *it << endl;
	for(auto it2 = vstring.cbegin() ; it2 != vstring.cend() ; it2 ++)
		cout << *it2 << endl;

	cout << endl;
	return 0 ;
}
*/

//3.24
/*
int main() {
	vector<int>  vInt ;
	int iVal;
	cout << "输入一组数字"  << endl;
	while (cin >> iVal)  {
		vInt.push_back(iVal);
		if(vInt.cbegin() == vInt.cend()){
			cout << "无元素"  << endl;
			return -1;
		}
	}
	cout << "相邻的和" << endl;
	for(auto it = vInt.begin()  ; it != vInt.end() ; ++it){
		cout << (*it + *(++it))  << "   ";
		if((it - vInt.cbegin() + 1)  % 10 == 0 )
			cout << endl;
	}
	if(vInt.size() % 2 != 0)
		cout << *(vInt.cend() - 1);

	return 0 ;
}

*/

//vector 的复制的部分
/*
int main() {
	const int sz = 10 ;
	vector<int>  vInt , vInt2;
	for(int i = 0 ; i != sz ; ++i)
		vInt.push_back(i);
	for(int j = 0 ; j != sz ; ++j)
		vInt2.push_back(vInt[j]);
	for(auto it = vInt2.begin() ; it != vInt2.end() ; it++)
		cout << *it  << "   "   << endl;  //这就是下面的为什么两行写的原因
	for(auto val : vInt2)
		cout << val << "   ";
	cout << endl;

	return 0 ;
}
*/

//试下使用数组的部分的begin和end
/*
int main()  {
	const int sz = 10 ;
	int ap[sz]  , i = 0;
	for(i = 0 ; i != sz ;i++)
		ap[i] = i;
	cout << "ori   is "  << endl;
	for(auto val : ap)
		cout << val << "   ";
	cout << endl;
	int *p = begin(ap) ;
	while(p != end(ap)){
		*p = 0 ;
		p++;
	}
	cout << "after is "  << endl;
	for(auto val : ap)
		cout << val << "   ";
	cout << endl;
	return 0 ;
}

*/
/*
int main() {
	char str1[]  =  "Welcome to ";
	char str2[]  =  "C++ family ";

	char result[strlen(str1) + strlen(str2) - 1 ];
	strcpy(result , str1);
	strcat (result , str2);
	cout << "str1 is   "  << str1 << endl;
	cout << "str2 is   "  << str2 << endl;
	cout << "result is   "  << result << endl;
	return 0 ;
}

*/
//using int_array = int[4];
/*
int main() {
	int ia[3][4]  = { 0, 1 ,2,3,4,5,6,7,8,9,10,11};
	cout << "1 way  "  << endl;
	//for(int (&row)[4]  : ia){
	//  for(int_array &row : ia) {
	for(auto &row : ia){
		for( int &col : row)
			cout << col  << "   ";
		cout << endl;
	}

	cout << "2  way   "  << endl;
	for(int i = 0 ; i != 3 ; i++)
	{
		for(int j = 0 ; j != 4 ; j++)
			cout << ia[i][j]  << "    "  ;
		cout << endl;
	}
	cout << "3 way    "   << endl;
	//for(int (*p)[4]  = ia ; p != ia + 3; p++)
	//for(int_array *p = ia  ; p != ia +  3  ; p++)
	for( auto *p = ia ; p != ia + 3 ; p++)
	{
		for(int *q = *p ; q != *p + 4 ; q++)
			cout << *q << "    ";
		cout << endl;
	}
	return 0;
}

*/


//5.25
/*
int main() {
	cout << "input words as ival1 ival2   " << endl;
	int ival1 , ival2 ;
	while(cin >> ival1 >> ival2 )
	{
		try {
			if(ival2 == 0 ){
				throw runtime_error("除数不能为零");
			}
			cout << "answer -----"  << ival1 / ival2 << endl;
		}catch(runtime_error  err) {
			cout << err.what() << endl;
			cout << "(y or no)   --- "  << endl;
			char ch;
			cin >> ch ;
			if(ch != 'y'  && ch != 'Y')
				break;
		}
	}
	return 0 ;
}
*/
/*
void SwapPointer1(int *&p , int *&q ) {
	int *tmp = *q  ;
	p = q ;
	q = tmp;
}
void SwapPointer2(int *p , int *q ) {
	int *tmp = *p  ;
	p = q ;
	q = tmp;
}
void SwapPointer3(int *p , int *q ) {
	int *tmp = *p;
	*p = *q ;
	*q = *tmp;
}
*/

int main(int argc , char **argv) {
	string str ;
	for(int i = 0; i != argc ; ++i){
		str += argv[i];
	}
		cout << str << endl;
		return 0 ;
}







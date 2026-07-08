#include<iostream>
 using namespace std; 
 void myswap1(int a,int b){
 	int temp=a; //值传递 
 	a=b;
 	b=temp;
 } 
   int &test1(){
	   int c=13;
	   return c;
 } 
 void myswap2(int *a,int *b)
 {
 	int temp=*a; //地址传递 
 	*a=*b;
 	*b=temp;
 }
 void myswap3(int &a,int &b){
 	int temp=a; //引用传递 
 	a=b;
 	b=temp;
 } 
 int &test2(){
 	static int a=10;//静态变量 
 	return a; 
 }
 int main(){
 //	int a=10;//引用要初始化 
 //	int b=30;
 	//int &b=a;//引用 数据类型 &引用名 =引用对象 
 	//a=30;
 	//int &ref=test1();//局部变量不能被引用  
 //	myswap2(&a,&b);
 	//myswap3(a,b);
 //	myswap1(a,b);
 	//cout<<a<<endl;
 //	cout<<b<<endl;
 //cout<<ref<<endl;
 int &ref=test2();   //引用的实质是指针常量 
 cout<<ref<<endl;
  cout<<ref<<endl;
   test2()=123;//如果函数的返回值是引用，这个函数可以作为左值 
   cout<<ref<<endl;
 cout<<ref<<endl;
 	system("pause");
 	return 0;
 } 

#include<iostream>
 using namespace std;
 int func1(int a,int b,int c=10,int d=20){
 	return a+b+c+d;//函数默认参数 
 }//如果某个位置有了默认参数，那么这个位置之后都得有默认参数 
 void showvalues(const int &c){ 
 	cout<<c<<endl;
 }
 int func2 (int A=10,int B=20);//函数的声明 
  int main(){
  	  int a=10;
  	  cout<<func1(20,30,20)<<endl;//如果没有自己传入的参数，就用默认的参数 
  	  showvalues(a);
  	  cout<<a<<endl;
  	  cout<<func2()<<endl;
	  system ("pause");
	  return 0; 
	    } 
	int func2(int A,int B){//函数声明有默认值则函数实现不能有默认值 
		return A+B;
	} 
	//函数占位参数  函数返回值类型 函数名 （数据类型）{}
	void func3(int a,int =10){//占位参数也可以有默认值 
	} 
	//函数重载
	//条件函数的作用域不同
	//函数名相同
	//函数的参数数量不同 void xxx(int a) void xxx() 
	//函数的数据类型不同void xxx(int a) void xxx (float a) 
	//函数的返回值不能作为条件 
	 

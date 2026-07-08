#include <iostream>
 using namespace std;
//  class person{
//  	public:
//  	person(){  //构造函数 类名(){} 初始化操作 
//  		cout<<"person构造函数的调用"<<endl;
//	  }
//	person(int a){
//		 age =a;
//		cout<<"person有参构造函数的调用"<<endl;
//	} 
//	  ~ person(){ //析构函数 ~ 类名(){} 清理操作 
//	  	cout<<"person析构函数的调用"<<endl; //对象在销毁前会自动调用一次 
//	  }
//	  person( const person &p){
//	     age=p.age;
//	  	cout<<"person拷贝函数的调用"<<endl; 
//	  }
//	  int age;
//  };
//   void test1(){
//   	//括号法调用 
//   	//person p1(10);
//   	//显示法
//	 // person p1=person(10); 
//	 //隐式转换法   person (10)匿名对象：当前行执行后立马销毁 
//	 person p1=10; 
// 	person p;
// 	person p3(p1); //栈区的数据运行完会自动销毁 
// 	cout<<"p1的年龄为："<<p1.age<<endl;
// 	cout<<"p3的年龄为："<<p3.age<<endl;
//}
// int main(){
// 	test1();
// 	system("pause");
// 	return 0;
// } 
// class person{
// 	public:
// 		person(){
// 			cout<<"person的默认构造函数"<<endl;
//		 }
//		 person(int age){
//		 	m_age=age;
//		 	cout<<"person的有参构造函数"<<endl; 
//		 }
//		 person(const person & p){
//		 	cout<<"person的拷贝函数的构造"<<endl; 
//		 	m_age=p.m_age;
//		 }
//		 ~person(){
//		 	cout<<"person的析构函数的调用"<<endl;
//		 }
//		 int m_age;
// };
// void test1(){
// 	person p2(10);
// 	person p3(p2);
// 	cout<<"p2的年龄"<<p2.m_age<<endl;
//	 cout<<"p3的年龄"<<p3.m_age<<endl; 
// }
// void dowork(person p){
// }
// void test2(){
// 	person p1;
// 	dowork(p1);
// }
//  person dowork1(){
//  	person p1;
//	return p1;  
//  } 
// void test3(){
//     person p =dowork1();
//}
 class person{
 	public:
 	//person(int a,int b)
 	person(int a,int b):m_a(a),m_b(b)//初始化列表初始化属性 
	 {
	 	//传统初始化操作 
// 	   	m_a=a;  
// 	   	m_b=b;
 	   //cout<<"m_a="<<a<<" m_b="<<b<<endl;
	 }
	 int m_a;
	 int m_b;
 };
   void test1(){
   	person p(21,23);
   	cout<<"m_a="<<p.m_a<<" m_b="<<p.m_b<<endl; 
   }
int main(){
      test1();
	system("pause");
	return 0;
	   
}

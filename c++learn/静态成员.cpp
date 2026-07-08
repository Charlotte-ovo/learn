#include <iostream>
 using namespace std;
 class people{
 	public:
 	people(int age){
 		this->age=age;//this指针：1、解决名称参数和类的数据类型冲突 
	 }
	  	people & personage(people &p){
 		this->age+=p.age;
 		return *this;
	 } 
	 	int age;
 };
 void test2(){
 	people p2(24);
 	people p3 (20);
 	p3.personage(p2).personage(p2);
 	cout<<"p3的年龄为："<<p3.age<<endl; 
 	cout<<"p2的年龄为："<<p2.age<<endl;
 }
 class person{
 	public:
 		static int number;// 静态成员  类内声明 
 	 static void man(){ //静态成员函数  
 		   number =100;  //静态函数不能访问非静态成员变量 
	   	 cout<<"man函数的调用"<<endl;
	   }
	    int a;
    private:                   //编译阶段分配内存 
	   static int number1;	
 };
   int person::number1=200; //静态成员有作用域限制 
   int person::number=100; // 类外初始化 
   void test1 (){
   	   person v1;
   	    v1.man();
   	   
//   	  person p1; 访问方式 对象访问 
//   	 cout<<p1.number<<endl; 
     cout<<person::number<<endl; //类名访问 
   }
   int main(){
   	 person p2;
		p2.number=3000; //静态成员数据共享  大家共用一个值 
		cout<<p2.number<<endl; 
   	 test1();
   	 test2();
   	system("pause");
   	return 0;
   } 

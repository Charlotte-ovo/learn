#include <iostream>
 using namespace std;
 class person{
 	public:
 		int *m_height;
 		int m_age;
 	person(){
 		cout<<"person的默认构造函数"<<endl;
	 }
	person(int age,int height){
		m_age =age;
		m_height =new int (height);
		cout<<"person的有参构造函数"<<endl; 
	}
	person(const person&p){
	     m_age=p.m_age;
	     m_height=p.m_height;
	     //m_height=new int(*p.m_height);
	     cout<<"person的拷贝函数"<<endl;
	}
	~person(){
		if(m_height!=NULL){
			delete m_height;
			m_height=NULL;
		}
		cout<<"persond的析构函数"<<endl; 
	} 
 };
  void test1(){
  	person p1(20,170);
  	cout<<"p1的年龄"<<p1.m_age<<"  p1的身高"<<*p1.m_height<<endl;
	 person p2(p1);
	 cout<<"p2的年龄"<<p2.m_age<<"  p2的身高"<<*p2.m_height<<endl;  
  }
 
  int main (){
  	test1(); 
  	system("pause");
  	return 0;
  } 

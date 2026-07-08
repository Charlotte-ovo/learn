#include<iostream>
 using namespace std;
 class phone{
 	public:
 		phone(string pname){
 			m_pname=pname;
		 }
 	string m_pname;
 };
  class person{
  	public:
  		person(string name,string pname):m_name(name),m_phone(pname) 
		  {

		  }
  	string m_name;
  	phone m_phone;
  };
  void test1(){
  	person p("Ð¡Ã÷","Æ»¹û");
  	cout<<p.m_name<<p.m_phone.m_pname<<endl; 
  }
  int main(){
  	test1();
  	system("pause");
  	return 0;
  }

#include <iostream>
 using namespace std;
// int main(){
//    int a, b, c;
//	for(a=1;a<=10;a++){
//	for(b=1;b<=13;b++){
//		c=20-a-b;
//		if(5*a+4*b+2*c==50){
//			cout<<"¹«ºï"<<a<<"Ä¸ºï"<<b<<"Ð¡ºï"<<c<<endl; 
//			}
//		
//	} 
//	}
// 	system ("pause");
// 	return 0;
// } 
   class person{
   	public:
   		
       void showperson(){
       	cout<<"ÄêÁä"<<endl; 
	   }
	   
	   void showage(int age){
	   	m_age=age;
	   	cout<<"age="<<m_age<<endl;
	   }
	   int m_age;
   }; 
   
     void test1(){
     	person p;
    	p.showage(12);
    	p.showperson();
	 }
	 int main(){
	 	test1();
	 	system("pause");
	 	return 0;
	 }

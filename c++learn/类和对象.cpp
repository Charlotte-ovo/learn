//类和对象
#include<iostream>
 using namespace std;
/* const double PI=3.14;
 class Circle{//封装一个类 
//访问权限 
public:
	//属性 
   int m_r;
   //行为
   double calculateZC(){
   	return 2*PI*m_r;
   } 
}; 
 int main(){
 	Circle cl;//创建一个具体的圆（对象） 
 	cl.m_r=10;//给圆对象的属性赋值  实例化 
 	cout<<"圆的周长："<<cl.calculateZC()<<endl; 
 	system("pause");
 	return 0;
 }
 */
 /*class student{
 	public://公共权限 
	 string n_name;//属性 
	 int n_age;
	 void studentMS(){//行为 
	 	cout<<n_name<<endl;
	 	cout<<n_age<<endl;
	 } 
	 void setname(string name){
	 	n_name=name;
	 } 
	 void setage(int age){
	 	n_age=age;
	 }
 }; 
  int main(){
  	student st;
  	st.setname("小王"); //赋值 给函数setname (string name) 
  	//st.n_name="小王"; 赋值 
	  st.n_age=21;
	 st.studentMS();
	student st1;
	st1.n_name="小红";
	st1.setage(23);
	st1.studentMS();
  	system("pause");
  	return 0;
  }
  */
 
 
 //访问权限 public公共权限 protected保护权限 private 私有权限
   //类内类外都可以访问     只有类内可以访问
  
// class person{
// 	public:
// 		string m_name;
// 	protected:
//	    string m_car;
//	private:
//	     int m_password;
//	public:
//	  void func(){
//	  	m_name ="小王";
//		m_car="宝马";
//		m_password=12345; 
//	  }		
// }; 
//  int main(){
//  	person p1;
//  	p1.m_name="小李"; 
//	  cout<<p1.m_name<<endl; 
//     system("pause");
//	 return 0;	
//  } 
//stract 和class的区别stract是默认公共 class默认私有； 
// class student{
// 	 	private:
//
// 			string n_name;
// 			int n_age;
// 			int birthday=1224;
// 	public:
// 		void setname(string name){
// 			n_name=name;
//		 }
//		 string getname(){
//		 	return n_name;
//		 }
//		void setage(int age){
//			if(age>=1||age<=100){
//			n_age=age;
//			}
//				cout<<"输入错误"<<endl; 	
//		} 
//		int getbirthday(){
//			return birthday;
//		}
//
// }; 
// int main(){
// 	student st1;
// 	st1.setname("小王");
// 	st1.setage(293);
//	 cout<<st1.getname()<<endl; 
//	 cout<<st1.getbirthday()<<endl;
// 	system("pause");
// 	return 0;
// }
 class cube{
 	public:
 		void setl(int l){
 		  	m_l=l;
		 }
 		int getl(){
 			return m_l;
		 }
		void setw(int w){
 		  	m_w=w;
		 }
		  		int getw(){
 			return m_w;
		 }
		  		void seth(int h){
 		  	m_h=h;
		 }
		  		int geth(){
 			return m_h;
		 }
		 int square(){
		 	int s;
		 	s=m_l*m_w*2+m_l*m_h*2+m_h*m_w*2;
		 	return s;
		 }
		 int volume(){
		 	int v;
		 	v=m_l*m_w*m_h;
		 	return v;
		 } 
		 bool issameByclass(cube &ex){
		 	if(m_h==ex.geth()&&m_l==ex.getl()&&m_w==ex.getw())
		 	{
		 		return true;
			 }
			 return false;
		 }
 	private:
 		int m_l;
 		int m_h;
 		int m_w;
 }; 
 	 bool issame(cube &ex1,cube &ex2){
      if(ex1.geth()==ex2.geth()&&ex1.getl()==ex2.getl()&&ex1.getw()==ex2.getw()){
      	return true;
	  }
	  return false;
	 } 
 int main(){
 	cube ex1;
 	ex1.seth(10);
 	ex1.setl(10);
 	ex1.setw(10);
 	cube ex2;
 	ex2.seth(10);
 	ex2.setl(11);
 	ex2.setw(10);
 	cout<<"立方体的长为:"<<ex1.getl()<<endl;
	 cout<<"立方体的宽为:"<<ex1.getw()<<endl;
	 cout<<"立方体的高为:"<<ex1.geth()<<endl; 
	 cout<<"立方体的面积为:"<<ex1.square()<<endl;
	 cout<<"立方体的体积为："<<ex1.volume()<<endl;
	 bool ret=issame(ex1,ex2);
	 if (ret){
	 	cout<<"立方体是相同的"<<endl; 
	 }
	 else{
	 	cout<<"立方体是不同的"<<endl; 
		                      }
		ret=ex1.issameByclass(ex2);
			 if (ret){
	 	cout<<"成员函数立方体是相同的"<<endl; 
	 }
	 else{
	 	cout<<"成员函数立方体是不同的"<<endl; 
		                      }
 	system("pause");
 	return 0;
 } 

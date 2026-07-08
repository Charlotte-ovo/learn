#include<iostream>
 using namespace std;
 struct student{
 	string name;
 	int age;
 };
 struct teacher{
 	struct student st;
 	string sex;
 };
 void exam(teacher*te){
   string sex;
   te->st.name="Àî°×";
  cout<<te->st.name<<endl;;
 } 
 
 int main(){

 	teacher te;
 	string sex;
 	 sex="º«ĞÅ"; 
	exam(&te);
	 cout<<sex<<endl;
 	system("pause");
 	return 0;
 } 

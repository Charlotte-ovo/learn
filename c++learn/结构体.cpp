#include "sy.h"

  
 /*int main (){
   student s1={
	   "小明",21,"男" 
  };
  student s2;
 s2.name="小文";
 s2.age=23;
 s2.sex="女"; 
 cout<<s2.name<<s2.age<<s2.sex<<endl;
  cout<<s1.name<<s1.age<<s1.sex<<endl;	
 s3.name="小王";
 s3.age=23;
 s3.sex="男"; 
  cout<<s3.name<<s3.age<<s3.sex<<endl;	
  student s4[3]={
  {"韩信",30,"男" },
  {"赵云",29,"男" },
  {"蔡文姬",20,"女" }
  } ;
  for(int i=0;i<3;i++){
  
  	cout<<s4[i].age<<" "<<s4[i].name<<" "<<s4[i].sex<<endl;;
	  }
 } 
 */
  /*int main (){
  	//teacher te={"李雷",21,"男"};
  	//student  stu={"李华",21,80};
	  //student *p=&stu;
	  //cout <<p->name<<p->age<<p->score;
	  teacher te;
	  te.name="李雷"; 
	  te.age=22;
	  te.sex="男";
	  te.stu.name= "小红";
	  te.stu.age=22;
	  te.stu.score=99; 
	  cout <<te.name<<"  "<<te.age<<"  "<<te.sex<<endl;
	  cout <<te.stu.name<<"  "<<te.stu.age<<"  "<<te.stu.score<<endl;	  	   
  } 
 */
 /*int main(){
 	student s;
 	s.name="李华";
	 s.age=22;
	 s.score=94;
	 printf(&s);
	   	cout<<"姓名："<<s.name<<"年龄："<<s.age<<"分数："<<s.score<<endl;
	   	cout<<&s;
 
 } 
 */
#include <stdlib.h>
#include <ctime>
 /*struct Student{
 	string name;
 	int score;
 }; 
 struct teacher {
 	string name ;
 	struct Student stu[5]; 
 };
 void TS(struct teacher Tea[],int len)
 {
 	for(int i=0;i<len;i++){
 	    string nameSeed="ABCDE"; 
 		 Tea[i].name="Teacher_";
 		 Tea[i].name +=nameSeed[i];
	 }
 }
  void printfTS(struct teacher Tea[],int len){
  	for (int i=0;i<len;i++){
  		cout<<Tea [i].name<<endl;
		  	  }
  }
 int main (){
 	struct teacher Tea [3];
	 int len=sizeof(Tea)/sizeof(Tea[0]);
	 TS(Tea,len);
	 printfTS(Tea,len); 
 }
 */
 struct hero{
 	string name;
 	int age;
 	string sex;
 }; 
 
 void test(struct hero people[],int len){
 	for (int i=0;i<len-1;i++){
 		 for(int j=0;j<len-1-i;j++){
 		 	if(people[j].age>people[j+1].age){
 		 		struct hero temp =people[j];
 		 		people[j]=people[j+1];
 		 		people[j+1]=temp;
 		 		/*string sname=people[j].name;
 		 		people[j].name=people[j+1].name;
 		 		people[j+1].name=sname;
 		 		string ssex=people[j].sex;
 		 		people[j].sex=people[j+1].sex;
 		 		people[j+1].sex=ssex;*/
			  }
		  }
   }
 }
 void printfInfo(struct  hero people[],int len){
 	for (int i=0;i<len;i++){
 		cout<<people[i].name<<"  "<<people[i].age<<"  "<<people[i].sex<<endl;
	 }
 }
 int main(){
 	struct hero people[5]=
	 {
 		{
 			"李白",23,"男"
		 },
		 {
		 	"韩信",21,"男" 
		  },
		  {
		  	"貂蝉",22,"女" 
		   } ,
		   {
		   	"黄忠",30,"男"
		   },
		   {
		   	"蔡文姬",19,"女"
		   }
		   
	 };
	 int len=sizeof(people)/sizeof(people[0]);
	 test(people,len);
	 printfInfo(people,len); 
 }

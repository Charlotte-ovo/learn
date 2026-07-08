#include <iostream>
#include <stdlib.h>
#include <ctime>
 using namespace std;
 struct Student{     //构造结构体Student 
 	string sName;
 	int score;
 };
 struct Teacher{     //构造结构体Teacher 
 	string tName;
 	struct Student sArray[5]; //包含 构造体Student 
 };
 void allocateSpace(struct Teacher tArray[],int len){
 	string nameSeed="ABCDE";   //创建一个函数给Teacher tArray[] 
 	for (int i=0;i<len;i++){   //的类赋值 
 		tArray[i].tName ="Teacher_"; 
 		tArray[i].tName +=nameSeed[i]; //+=：给上面的string继续加内容 
 		for (int j=0;j<5;j++)
 		{   
 			tArray[i].sArray[j].sName="Student_";
 		    tArray[i].sArray[j].sName +=nameSeed[j];
 		    int num1=rand()%71+30;//0+30~70+30最小值由0加到了30 
 		    tArray[i].sArray[j].score=num1;//随机数 
	    }		 
	 }
 	
 }
 void printInfo(struct Teacher tArray[], int len){
 	for(int i=0;i<len;i++){
 		cout<<"老师姓名："<<tArray[i].tName<<endl;
 		for (int j=0;j<5;j++){
 			cout<<"\t学生姓名："<<tArray[i].sArray[j].sName<<
			 "考试分数："<<tArray[i].sArray[j].score<<endl;
		 }
	 }
 }
   
 int main()
 {
 	 srand((unsigned int)time(NULL));
 	 struct Teacher tArray[3];
 	 //srand((unsigned int )time (NULL));
 	 //int num1=rand()%41-100;
 	int len =sizeof(tArray)/sizeof(tArray[0]);
 	allocateSpace(tArray,len);
 	printInfo(tArray,len);
 	   system("pause");
 	   return (0); 
		 }

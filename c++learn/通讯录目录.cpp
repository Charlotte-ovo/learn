#include <iostream>
#define MAX 1000
 using namespace std;
 struct person 
 {
 	string pname;
 	string psex;
 	int page;
 	string pphone;
 	string paddress;
 };
struct addressbooks{  //通讯录构造体 
	struct person personArray[MAX];
	int psize;
};
 void addperson (addressbooks*ABC){ //输入联系人信息 
 	if(ABC->psize==MAX){
 		cout<<"通讯录已满，无法添加！"<<endl;
		 return; 
	 }
	 else{
	 	string name;
	 	cout<<"请输入姓名："<<endl;
	 	cin>>name;
	 	ABC->personArray[ABC->psize].pname=name;
	 	string sex;
	 	cout<<"请输入性别："<<endl;
	 	cin>>sex;
	 	ABC->personArray[ABC->psize].psex=sex;
	 	int age ;
	 	cout<<"请输入年龄："<<endl;
	 	cin>>age;
	 	ABC->personArray[ABC->psize].page=age;
		string phone;
		cout<<"请输入电话："<<endl;
		 cin>>phone;
		 ABC->personArray[ABC->psize].pphone=phone;
		string address; 
		cout<<"请输入地址："<<endl; 
		cin>>address;
		ABC->personArray[ABC->psize].paddress=address;
		ABC->psize++;
		cout<<"添加成功"<<endl;	  
	 }
	 	system("pause"); 
		system("cls");//清屏
 }
 void showperson(addressbooks*ABC){ //添加联系人 
 	if(ABC->psize==0){
 		cout<<"当前记录为空"<<endl;
 	}
		 else{
		 	for(int i=0;i<ABC->psize;i++){
		 		cout<<"姓名："<<ABC->personArray[i].pname<<"\t";
		 		cout<<"性别："<<ABC->personArray[i].psex<<"\t";
		 		cout<<"年龄："<<ABC->personArray[i].page<<"\t";
		 		cout<<"手机："<<ABC->personArray[i].pphone<<"\t";
		 		cout<<"地址："<<ABC->personArray[i].paddress<<endl;
			 }
		 } 
		 	 	system("pause"); 
		system("cls");//清屏 
 }
 int isexist(addressbooks*ABC,string name){//判断信息是否存在 
 	 for(int i=0;i<ABC->psize;i++){
	  
 	if(ABC->personArray[i].pname==name)
 	{          
	  return i;
	 }
 
  } 
  return -1; 
 }
void deleteperson(addressbooks*ABC){
	 string name;
	 cin>>name;
	 int ret =isexist(ABC,name);
	 if(ret !=-1){
	 	for (int i=ret;i<ABC->psize;i++){
	 		ABC->personArray[i]=ABC->personArray[i+1]; 
		 }
		 ABC->psize--;
		 cout<<"删除成功！"<<endl; 
	 } 
	 else{
	 	cout<<"查无此人"<<endl;
	 }
	 	 	system("pause"); 
		system("cls");//清屏
 } 
void findperson(addressbooks*ABC){
	string name;
	cin>>name;
	int ret =isexist(ABC,name);
	if (ret !=-1){
		 	cout<<"姓名："<<ABC->personArray[ret].pname<<endl;
		 	cout<<"性别："<<ABC->personArray[ret].psex<<endl;
		 	cout<<"年龄："<<ABC->personArray[ret].page<<endl;
		 	cout<<"手机："<<ABC->personArray[ret].pphone<<endl;
		 	cout<<"地址："<<ABC->personArray[ret].paddress<<endl;
}
 else{
 	cout<<"查无此人"<<endl;
 }
 	 	system("pause"); 
		system("cls");//清屏
}
  void redactperson(addressbooks*ABC){
  	string name;
  	cin>>name;
  	int ret =isexist(ABC,name);
	  if(ret !=-1){
	  	cout<<"请输入姓名："<<endl;
		   cin>>name;
	  	ABC->personArray[ret].pname=name;
	  	string sex;
	  	cout<<"请输入性别："<<endl;
	  	 cin>>sex;
	  	ABC->personArray[ret].psex=sex;
	  	int age;
	  	cout<<"请输入年龄："<<endl;
	  	cin>>age;
	  	ABC->personArray[ret].page=age;
	  	string phone;
		cout<<"请输入电话："<<endl;
		cin>>phone;
		ABC->personArray[ret].pphone=phone;
		string address;
		cout<<"请输入地址："<<endl;
		cin>>address;
		ABC->personArray[ret].paddress=address;
		cout<<"修改完成"<<endl; 
	  }
	  else{
	  	cout<<"查无此人"<<endl;
	  } 
	   	 	system("pause"); 
		system("cls");//清屏
  }
  void clearperson(addressbooks*ABC){
     ABC->psize=0;
  	cout<<"联系人已清空"<<endl; 
  }
  void showmenu(){
  	cout<<"*************************"<<endl;
  	cout<<"***** 1、添加联系人 *****"<<endl;
  	cout<<"***** 2、显示联系人 *****"<<endl;
  	cout<<"***** 3、删除联系人 *****"<<endl;
  	cout<<"***** 4、查找联系人 *****"<<endl;
	cout<<"***** 5、修改联系人 *****"<<endl;
	cout<<"***** 6、清空联系人 *****"<<endl;
	cout<<"***** 0、退出通讯录 *****"<<endl;
	cout<<"*************************"<<endl; 
  }
 int main()
 { 
    addressbooks ABC;
    ABC.psize=0; //清空通讯录 
   while (true)
   { 
      showmenu();
 	 cout <<"请输入你要进行的操作数字(0~7)：";
	 int select=0;
	 cin>>select;
	 switch (select)
	 {
	 	case 1:
		 cout<<" 1、添加联系人 "<<endl;
		 addperson(&ABC); 
		 break;
		case 2:
		 cout<<" 2、显示联系人 "<<endl;
		 showperson(&ABC); 
		 break;
		case 3:
		cout<<" 3、删除联系人 "<<endl;
		cout<<"请输入你要删除的联系人："<<endl;
		deleteperson(&ABC);
	 	 break;
		 case 4:
		cout<<" 4、查找联系人 "<<endl;
		cout<<"请输入你要查找的联系人："<<endl; 
		findperson(&ABC);
		 break;
		 case 5:
		cout<<" 5、修改联系人 "<<endl;
		 cout<<"请输入要修改的联系人："<<endl;
		 redactperson(&ABC);
		 break;
		 case 6:
		 cout<<" 6、清空联系人 "<<endl;
		 clearperson(&ABC);
		  break;
		case 0:
		 cout<<"欢迎下次使用"<<endl;
		  system("pause");
		   return 0; 
			break;
		 default:
		cout<<"请重新输入："<<endl;
		 break; 
	 }
	}
 	system("pause");
 	return 0;
  } 

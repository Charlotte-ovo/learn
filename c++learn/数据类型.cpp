/*
//导入头文件 
#include <iostream>
//宏常量 不可变 常量名 常量 
#define Day 7 
//使用标准的标识符可见范围 
 using namespace std;
//整型 主函数 
 	int main ()
 	{
 //输出语句输出hell world
// const 修饰的变量为常量 不可修改 

      
       const int month = 12;
        int a =10;
        cout<<"a=" <<a << endl; 
        cout<<"一个星期有"<<Day<<"天"<<endl; 
 		cout <<"一年有"<<month<<"个月"<< endl;
// 程序终止运行按任意键继续	
 		system("pause");
 		//返回值，0代表程序能正常运行 
 			return 0;
	 }
	 */
	 /*
#include <iostream>	 
 using namespace std;
 int main ()
 {  
    int e =66;
 	char ch = 'd'; 
 	float c =3e-2;//科学计数法表示10 
 	float a =3.1415926f;//f表示单精度 
 	double b =3.1415926;
	 cout <<"short类型占内存大小："<<sizeof(a) <<endl;//sizeof求数据类型占用内存大小sizeof(数据类型/变量名) 
	 cout<<(char)e<<endl; 
	 cout<<(int)ch<<endl;//转换数据类型（要转换的类型）定义的数据类型 
	 system("pause");
	 return (0);
}
*/

#include <iostream>
#include <string> 
 using namespace std;
 int main()
 {
 	string str2 = "hello world1" ;//c++ 字符串 
 	char str1 [] = "hello world" ;//字符串  c语言 
 	cout<<"aaa\t hellow"<<endl;//水平制表符 \t代表8字符位置 
 	cout<<str2<< endl;
 	cout<<str1<< endl;
 	bool x = true;
	 cout <<x<<endl;//bool类型代表真假 1表示真0代表假 
	 x =false;
	 cout << x<<endl; 
 	system ("pause");
 	return (0);
  } 
/*
#include <iostream>
#include <string> 
 using namespace std;
 int main ()
 {
 	float f =0;
 	cout<<"请输入f的值:"<<endl;
	  cin>>f;// 输入语句 cin >>变量名 
	  cout<<"f的值为："<<f<<endl;
	string str = "？？";
	cout<<"请输入str的值："<<endl; 
	cin>>str;
	cout<<"str的值为："<<str<<endl; 
	  system ("pause");
	  return (0); 
  } 
  */

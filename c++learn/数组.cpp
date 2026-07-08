//#include <iostream>
// using namespace std;
// int main(){
// 	 long long x[6] ={10,20,30,40};//数组 数据类型 数组名 []={, ,} ； 
//     int sum =0;
// 	for(int i=0;i<6;i++)   //数组类型 数组名[]; 数组名[0] =值； 
// 	{
// 		
// 	cout<<x[i]<<endl;
// 	sum=sum+x[i];
//	 } 
//	 cout <<x<<endl;//输出数组存在的位置 (转换的类型)数组 16进制 
//	 cout << (long long)&x[1]<<endl;
//	 cout<<"数组和为："<<sum<<endl; 
//	 char a []="项目";
//	 string b="小明";
//	 char c='c';
//	 cout << sizeof (x [0])<<endl; 
//	 cout << b<<endl; 
//	 cout << c<<endl; 
// 	system ("pause");
// 	return (0);
// }
/*#include <iostream>
 using namespace std;
  int main (){
  	int max =0;
  	int arr []={230,150,234,197,211};
  	for(int i=0;i<5;i++){
  		if(arr [i]>=max){
  			 max=arr[i];
		  }
	  }
	  cout<<"最大的猪有"<<max<<"kg"<<endl;
	  system("pause");
	  return (0); 
  } 
  */
#include <iostream>
 using namespace std;
 int main (){
      int arr []= {3,5,2,6,1,7,9,8,4};
      int length =sizeof (arr)/sizeof(arr[0]);
      for (int i=0;i<length-1;i++){
      	for(int j=0;j<length-i-1;j++){
      		if(arr[j]>arr[j+1]){
      			int temp = arr[j];
      			arr[j]=arr[j+1];
				  arr[j+1]=temp	;		  
		   }
		  }
	  }
	  for (int i=0;i<9;i++){
	  	cout<<arr[i]<<endl;
	  }

 }

/*#include <iostream>
 using namespace std;
 int main (){
 	string x []={"张三","李四","王五"}; 
 	int arr [][3]={100,100,100,90,50,100,60,70,80};
 	for (int i=0;i<3;i++){
 		int sum=0;
 		for(int j=0;j<3;j++){		 
 		 sum +=arr[i][j];
		 }
		 cout <<x[i]<<"的成绩："<<sum<<endl; 
	 }
	 
 }
 */
/*#include <iostream>
 using namespace std;
 int max (int a,int b){
 	   return a>b?a:b;
 }
 int add(int num1,int num2) ;//函数声明 函数类型 函数名（函数列表）; 
  int main(){
  	int a=10;
  	int b=20;
  	int c=add(a,b);
  	cout<<c<<endl;
  	cout<<max(a,b);
  }
   int add(int num1,int num2){//函数的定义 函数类型 函数名 （函数列表）{函数内容} 
  	int sum = num1+num2;
  	cout<<"你好啊"<<endl; 
  	return sum;
  }
  */


#include <iostream>
 using namespace std; 
 int main()
 {
    int A ;
	int B ;
	int C;
    cout<<"请分别输入三只小猪的体重"<<endl;
	cin>>A;
	cin>>B;
	cin>>C; 
	cout<<"小猪的A体重为："<<A<<"kg"<<endl; 
	cout<<"小猪的B体重为："<<B<<"kg"<<endl; 
	cout<<"小猪的C体重为："<<C<<"kg"<<endl; 
	if(A>B)
	{
	if(A>C){
		cout<<"小猪A最重"<<endl;//if条件语句if(条件){运行内容}else{}; 
	} 
	else{
		cout<<"小猪C最重"<<endl;
	}
	}
	else {
		if(B>C)
		{
			cout<<"小猪B最重"<<endl; 
		}
		else
		{
			cout<<"小猪C最重"<<endl; 
		}
	} 
	 system ("pause");
	 return (0); 
  } 

/*#include <iostream>
#include <stdlib.h>
#include <ctime>
 using namespace std;
 int main (){
 	/*int a=10;
 	int b=20;
 	//int c =50;
 	//int x;
 	//x=(a>b?c:b)=100;//三目运算符 条件表达式 ？ 返回值1 ：返回值2； 
 	//cout<<x<<endl;
 	//cout<<c<<endl;
 	//cout<<b<<endl;
 	int c;
	 cout<<"请输入日期："<<endl;
	 cin>>c;
	 switch(c){
	 	case 1:
	 		cout<<"星期一"<<endl;
			 break ;
		case 2:
	 		cout<<"星期二"<<endl;
			 break ;
		case 3:
	 		cout<<"星期三"<<endl;
			 break ;
		case 4:
	 		cout<<"星期四"<<endl;
			 break ;
		case 5:
	 		cout<<"星期五"<<endl;
			 break ;
		case 6:
	 		cout<<"星期六"<<endl;
			 break ;
		case 7:
	 		cout<<"星期日"<<endl;
			 break ;
			 default :
			 	cout<<"错误"<<endl; 
			 	break;
			 }*/
/*#include <iostream>
#include <stdlib.h> //标准函数库 
#include <ctime>   //时间头文件 
  using namespace std;
  int main (){
   
 	        srand((unsigned int)time (NULL));//随机数种子使随机数在一直变化 
			  int num1 =  rand()%100; //生成随机数 
			 int num2;
			 cout<<"请输入猜测的数："<<endl; 
			 cin>>num2;
			 while(num2!=num1){    //while循环 whil(循环条件){循环体} 
			 	if(num2>num1){
			 		cout<<"猜测的数过大" <<endl;
					 cout<<"请继续猜测"<<endl;
					 cin>>num2; 
				 }
				 else {
				 	cout<<"猜测的数过小"<<endl; 
				 	cout<<"请继续猜测"<<endl;
				 	cin>>num2;
				 }
			   	
			 }
			 cout<<"猜对了"<<endl;	 
 	system ("pause");
 	return (0);
 }
 */
 /*
#include <iostream>
#include <stdlib.h>
 using namespace std;
 int main(){
 
 int num =100;
 cout<<"水仙花数有："<<endl;
 do {                       //do while 语句 do{循环体}while{循环条件} 
 	int a=num%10;//个位数取余    //先循环再判断 
 	int b=num/10%10;//十位数取余 
 	int c=num/100;
 	if(a*a*a+b*b*b+c*c*c==num){  
 	cout<<num<<endl;
   }
 	num++;
 }
 while(num<1000);
 system ("pause");
 return (0);
}*/
/*
#include <iostream>
#include <stdlib.h> 
using namespace std;
int main (){
	
	for(int a=1;a<101;a++){ //for 循环 for(初始表达式；条件表达式；末尾循环体){循环内容} 
		int num1=a%10;
		int num2=a/10;
		int num3=a%7;
		if(num1==7||num2==7||num3==0){ //逻辑或运算 
		
		cout<<"拍桌子"<<endl;}
		else{
			cout<<a<<endl;
		}
	}
	system ("pause");
	return (0);
}*/
/*#include <iostream>
using namespace std;
int main (){
	for (int i=9;i>0;i--){//嵌套循环 外循环走一次，内循环走一个周期 
		for(int j=9;j>=i;j--){
			cout<<j<<"*"<<i<<"="<<i*j<<"  ";
		}
		cout<<endl;
	} 
	system("pause");
	return(0);
} 
*/
/*#include <iostream>
using namespace std;
 int main (){
    for(int a=1;a<10;a++)
    {
    	if(a%2==0){
    		continue;//跳出循环 执行下面的 
		}
		cout<<a<<"  ";
		cout<<endl; 
	}
	cout<<100<<endl;
	goto flag;    //goto 标记 goto 命名；当程序运行到goto标记位置	               
	cout<<101<<endl;  //代码会运行标记行； 
	cout<<102<<endl;
	flag:
	cout<<103<<endl;
	system ("pause");
	return(0);
	
}*/

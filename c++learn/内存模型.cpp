#include<iostream>
 using namespace std;
 /*int g_a=10;//全局变量 
 int g_b=10;
 const int c_g_a=10;//全局常量
 const int c_g_b=10; 
 int main(){
 	int a=10;//局部变量 
 	int b=20;
 	cout<<"a地址为："<<(long long)&a<<endl;
	cout<<"b地址为："<<(long long)&b<<endl;
	cout<<"g_a地址为："<<(long long)&g_a<<endl; 
	cout<<"g_b地址为："<<(long long)&g_b<<endl; 
    static int s_a=10;//静态变量 static
    static int s_b=10;
    const int c_a=10;//局部常量 
    const int c_b=10;
    cout <<"s_b地址为："<<(long long)&s_b<<endl; 
	cout<<"s_a地址为："<<(long long)&s_a<<endl; 
	cout<<"字符串地址为："<<(long long)&"hello world"<<endl;
	cout<<"c_g_a地址为："<<(long long)&c_g_a<<endl;
	cout<<"c_g_b地址为："<<(long long)&c_g_b<<endl;
	cout<<"c-a地址为："<<(long long)&c_a<<endl;
	cout<<"c-b地址为："<<(long long)&c_b<<endl; 
 	system("pause");
 	return 0;
 } */
 /*int *func(int b){//形参 数据也会放在栈区 
 	 b=100;
 	int a=10;//局部变量存放在栈区，栈区的数据在函数执行完后自动释放 
 	return &a;//返回局部变量的地址 
 } 
 int main(){
 	int *p=func(1);
 	cout<<*p<<endl;//第一次可以打印，编译器做了保留 
 	cout<<*p<<endl;//第二次函数被执行过已释放 
 } */
 int*func() {
    int*p=new int(11);//new关键字可以将数据开发到堆区 
    return p;          //堆区的数据由程序员管理释放 
 }
 int main(){
 	int*p=func();
 	cout<<*p<<endl;
 	cout<<*p<<endl;
 	delete p;//delete关键字释放堆区数据 
	cout<<*p<<endl; 
	int *arr=new int [10]; //堆区数组的创建 
	for(int i=0;i<10;i++){
	   arr[i]=100+i;	
	} 
	for(int i=0;i<10;i++){
		cout<<arr[i]<<endl;
	}
	delete [] arr; //堆区数组的释放	
 }
 
 

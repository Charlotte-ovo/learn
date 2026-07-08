#include "sy.h"
  int main()
  {
  	int a=10;
  	int b=20;
	  	 // int *p =(int *) 00x11;//野指针不可访问  
  	 	//int *p =NUll;//空指针不可访问；
  	int *p;  //指针 数据类型 * 指针变量名； 
  	p =&a;    //记录a的地址 
   *p =100;   //给指针所在的地址赋值； 
  	cout<<"a的地址为"<<&a<<endl;
  	cout<<"指针占内存："<<sizeof(int *)<<endl; //x64 的指针占内存8位 x32 占 4位； 
  		cout<<"a的值为"<<a<<endl;
  	cout<<"*p的地址为"<<p<<endl;
	  system ("pause");
	  return (0); 
   } 
   
  /* int main ()
   {
   	int a=10;
   	int b=1000;
   	 //const int * p;//const 修饰指针 常量不能更改，只能改指向 
   	// p=&b;
   	 int * const  p =&a; //const修饰常量 常量可以改，指向不能改 
   	 * p=900;         //const 修饰常量指针则都不能修改； 
   	 cout<<*p;
	} 
	*/
    /*int main ()
	{
		int arr []={1,2,3,4,5,6,7,8,9};
		 int * p=arr;
		 for (int i=0;i<9;i++){
		 	 cout<<*p<<endl;
		 	 *p++;
		 }
		
		 }
		 */
		/* void swap (int *p1,int *p2){
		 	int temp = *p1;
		 	*p1=*p2;
		 	*p2= temp;
		 }
		 int main (){
		 	int a=20;
		 	int b=30;
		 	swap(a,b);
		 	cout<<a<<endl;
		 	cout<<b<<endl;
		 }	 */

/* void arr(int * p,int learn){
 	for (int i=0;i<learn-1;i++){
 		for(int j=0;j<learn-i-1;j++){
 			if(p[j]>p[j+1]){
 				int tmpe =p[j];
 				 p[j]=p[j+1];
 				 p[j+1]=tmpe;
			 }
		 }
	 }
 } 
 void printf(int * p,int learn){
 	for(int i=0;i<learn;i++){
 		cout<<p[i]<<endl; 
	 }
 }
 
  int main(){
  	int arr1 []={3,1,5,6,2,9,7,8,4};
  	int len =sizeof(arr1)/sizeof(arr1[0]);
  	arr(arr1,len);
    printf(arr1,len);
  }*/

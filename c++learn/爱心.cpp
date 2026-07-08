#include <iostream>
 using namespace std;
  int main(){
//  
//    	float x=-1.3;
//  	float y=1.3;
//      float a=x*x+y*y-1;
//  	if(y>-1.1){
//  		y-=0.1; 
//  		if(x<1.3){
//  			x+=0.05;
//  			if(a*a*a-x*x*y*y*y<=0){
//  				cout<<"*";
//			  }
//			  else{
//			  	cout<<" ";
//			  }
//		  }
//        cout<<endl;  
//	  }
  float a;
  float x;
  float y;
  for(y=1.3;y>-1.1;y-=0.1){
  	for(x=-1.3;x<1.3;x+=0.05){
  		a=x*x+y*y-1;
  		if(a*a*a-x*x*y*y*y<0){
  			cout<<"*";
		  }
		  else{
		  	cout<<" ";
		  }		  
	  }
	  cout<<endl;
  }
  	system("pause");
  	return 0;
  } 


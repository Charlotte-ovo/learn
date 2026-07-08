#include <iostream>
 using namespace std;
  int main(){
  	int arr1[]={2,4,6,7,1,7};
  	int arr2[]={4,6,7,2,4,7};
	int a=0,c=0;	
  	for(int i=0;i<6;i++){
  		
  		for(int j=0;j<6;j++){
  			int b=1;
  			if(arr1[i]==arr2[j]){
  		  for(int k=1;k<6;k++){
  		  	if(arr1[i+k]!=arr2[j+k]){
  		  		break;
				} 
				b++; 
			}
			
			}
			if(c<b){
				a=i;
				c=b;
			}
		  }
	  }
	  
	  for(int z=0;z<c;z++){
	  	cout<<arr1[a+z];
	  }
  
  	return 0;
  } 

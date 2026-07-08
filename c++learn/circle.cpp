#include "circle.h"


 	void circle::setr(int r){  //circle::表示circle作用域 下的setr函数 
 		m_r=r;
	 }
	 int circle::getr(){
	 	return m_r;
	 }
	  		void circle::setcenter(point cen){
 			m_center=cen;
		 }
		 point circle::getcenter(){
		 	return m_center;
		 }	
 

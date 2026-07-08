#pragma once
#include "point.h"
#include <iostream>
 using namespace std;
 class circle{
 	public:
 	void setr(int r);
	 int getr();
	  		void setcenter(point cen);
		 point getcenter();
 	private:
 	int m_r;
	 point m_center;  
 };
   

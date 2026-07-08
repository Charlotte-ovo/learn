#pragma once //防止头文件被重复包括
#include <iostream>
 using namespace std;
  class point{
 	public:
 		void setx(int x);
		 int getx();
		void sety(int y);
		 int gety();		 
 	private:
 	int m_x;
 	int m_y;
 }; 

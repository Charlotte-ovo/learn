#include "point.h"
#include "circle.h"
#include <iostream>
  using namespace std;
//  class point{
// 	public:
// 		void setx(int x){
// 			m_x=x;
//		 }
//		 int getx(){
//		 	return m_x; 
//		 }
//		void sety(int y){
// 			m_y=y;
//		 }
//		 int gety(){
//		 	return m_y; 
//		 }
// 	private:
// 	int m_x;
// 	int m_y;
// }; 
// class circle{
// 	public:
// 	void setr(int r){
// 		m_r=r;
//	 }
//	 int getr(){
//	 	return m_r;
//	 }
//	  		void setcenter(point cen){
// 			m_center=cen;
//		 }
//		 point getcenter(){
//		 	return m_center;
//		 }	
// 	private:
// 	int m_r;
//	 point m_center;  
// };
    void isincircle(circle &c,point &p){	
    int distance=
    (c.getcenter().getx()-p.getx())*(c.getcenter().getx()-p.getx())
    +
    (c.getcenter().gety()-p.gety())*(c.getcenter().gety()-p.gety());
    int rdistance=c.getr()*c.getr();
	 
    if(distance==rdistance){
    	cout<<"点在圆上"<<endl; 
	}
	
	else if(distance>rdistance){
		cout<<"点在圆外"<<endl; 
	}
	else{
    	cout<<"点在圆内"<<endl; 
	}	
}
 int main (){
 	circle c1;
 	c1.setr(10);
 	point center1;
 	center1.setx(10);
 	center1.sety(0);
 	c1.setcenter(center1);
 	point p1;
 	p1.setx(10);
 	p1.sety(9);
 	isincircle(c1,p1);
 	system("pause");
 	return 0;
 } 

#include <stdio.h>
#include <iostream>
#include <stdlib.h>
#define NUM 100
int m;//背包容量
int n;//物品数量
int w[NUM];//物品重量数组
int p[NUM];//物品价值数组
int bagw;//当前背包重量
int bagp;//当前背包总价
int x[NUM];//当前解
int maxp;//最优总价值
int maxx[NUM];//最优解
int r;//可用的物品价值
/*初始化函数*/
using namespace std;
void init(){
	int i;
	for(i=0;i<NUM;i++){
		w[i]=0;//初始化物品重量
		p[i]=0;//初始化物品价值
		x[i]=0;//初始化当前解
		maxx[i]=0;//初始化最优解
	}
	bagw=0;//初始化当前背包重量
	bagp=0;//初始化当前背包总价值
	maxp=0;//初始化最优总价值
	r=0;//初始化可用物品价值
}
/*输入函数*/
void input(){
	int i;
    printf("录入背包容量:");
    cout<<"qeeqeq"<<endl;
	scanf("%d",&m);
	printf("录入物品数量:");
	scanf("%d",&n);
	printf("录入各个物品重量（空格为间隔符）:");
	
	for(i=1;i<=n;i++){//号空间不用
		scanf("%d",&w[i]);
	}
	printf("录入各个物品价值（空格为间隔符）:");
	for(i=1;i<=n;i++){//号空间不用
		scanf("%d",&p[i]);
		r=r+p[i];//可用物品价值r最开始为全部物品价值
	}
}

/*递归*/
void bag(int i){
	int j;
	if(i>n){
		if(bagp>maxp){//如果当前的背包总价值是目前最优，更新最优解
			maxp=bagp;
			for(j=1;j<=n;j++){
				maxx[j]=x[j];
			}
		}
		return;
	}
	r=r-p[i];//对第i层进行搜索，那么可用物品价值r相应减少
	//搜索左子树，对应x[i]=1的情况.
	if(bagw+w[i]<=m){//满足约束
		x[i]=1;
		bagw=bagw+w[i];
		bagp=bagp+p[i];
		bag(i+1);
		bagw=bagw-w[i];//回溯回来后，恢复bagw为原来的值
		bagp=bagp-p[i];//回溯回来后，恢复bagp为原来的值
	}
	//搜索右子树
	if(bagp+r>maxp){//当前的背包价值加上剩余的物品价值表示接下来可处理物品价值的上界
		//如果这个上界都没有超过当前的最优解，则剪枝
		x[i]=0;
		bag(i+1);
	}
	r=r+p[i];//	对第i层进行搜索回来，恢复r
}

/*输出函数*/
void output(){
	int i;
	printf("最大载重为：%-5d\n最优解为：",maxp);
	for(i=1;i<=n;i++){//录入各个物品重量,0号空间不用
		printf("%-5d",maxx[i]);
	}
	printf("\n");
}

int main()
{
	init();//初始化
	input();//录入背包重量、物品数量、重量和价值
	bag(1);//递归回溯法求解
	output();//输出结果
	return 0;
}
 

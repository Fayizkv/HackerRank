#include<iostream>
using namespace std;
int minCost(int rows,int cols,int initR,int initC,int finalR,int finalC,int costRow[],int costCols[]){
    int i,j,cost = 0;
    for(i=initR;i<finalR;i++){
        cost+=costRow[i];
    }
    for(j = initC;j<finalC;j++){
        cost+=costCols[j];
    }
    return cost;
}
int main(){
    int rows,cols,initR,initC,finalR,finalC,i;
    int costRows[10000],costCols[10000];
    cin>>rows;
    cin>>cols;
    cin>>initR;
    cin>>initC;
    cin>>finalR;
    cin>>finalC;
	
	int x = 1;
	
	if ( initR > finalR ) x = -1;
    for(i=0;i<rows -1;i+=x){
        cin>>costRows[i];
    }
	if ( initC > finalC ) x = -1; else x = 1;
    for(i=0;i<cols-1;i++){
        cin>>costCols[i];
    }
    cout<<endl<<"Output : "<<minCost(rows,cols,initR,initC,finalR,finalC,costRows,costCols);
    return 0;
}
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int inf = INT_MAX;	

int segment[100]={0};

void constructTree(int number[],int start, int end, int pos){
	
	segment[pos]=0;
	
	if(start == end){
		
		segment[pos] = number[start];
		return;
	}

	int mid = (start+end) / 2;
	
	constructTree(number, start, mid, pos*2);
	constructTree(number, mid+1, end, pos*2+1);
	
	segment[pos] = min(segment[pos*2],segment[pos*2+1]);
	
	
	
	}


int query(int start, int end, int qstart, int qend, int pos){
	
	
		if(start >= qstart && end<=qend)
			return segment[pos];
		
			
		if(start > qend || end<qstart)
			return inf;
			
	int mid = (start + end) /2;
	int x = query(start,mid, qstart, qend, pos*2);
	int y = query(mid+1, end, qstart, qend, pos*2+1);
	
	return min(x,y);
	
}


int main(int argc, char **argv)
{
	

	/*                 0  1   2    3   3 5 6  7  */
	int number[8] = {-11,-1,-100,-400,-2,6,7,-1111};
	
	int size = sizeof(number)/sizeof(number[0])-1;
	

	constructTree(number,0,size, 1);
	
	
	//for(int  i=0; i<20; i++)
	
		//cout<<i<<":"<<segment[i]<<" \n";
	
	
	cout<<query(0, size, 0, 7,1)<<"\n";
	cout<<query(0, size, 0, 3,1)<<"\n";
	cout<<query(0, size, 4, 7,1)<<"\n";
	cout<<query(0, size, 1, 3,1)<<"\n";
	
	
	
	
	
	return 0;
}
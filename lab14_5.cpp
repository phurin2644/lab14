#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void shuffle(int *a,int *b, int *c, int *d); 

int main(){
	int a = 50, b = 100, c = 500, d = 1000;
	
	srand(time(0));	
	
	for(int i = 0;i < 10;i++){
	    shuffle(&a,&b,&c,&d); 
	    cout << a << " " << b << " " << c << " " << d << "\n";
	}
	
	return 0;
}

void shuffle(int *a,int *b,int *c,int *d)
{
	int v=0;
	v=((rand()%4)+1);
	switch(v){
		case 1: swap(*a,*b);
		        swap(*c,*d);
		        break;
		case 2: swap(*a,*c);
		        swap(*b,*d);
				break;
		case 3: swap(*a,*d);
		        swap(*b,*c);
				break;
		default: break;				        
	}
}
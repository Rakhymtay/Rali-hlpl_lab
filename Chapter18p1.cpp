#include "std_lib_facilities.h"
// Question 1
int ga [10] = {1,2,4,8,16,32,64,128,256,512};
// Question 2
void f(int a[], int n)
{
	// Question 3a
	int la[10];
	// Question 3b
	for (int i = 0; i<10; i++)
		la[i] = ga[i];
	
	// Question 3c
	cout << "elements of the array are: " << endl;
	for (int i = 0; i<10; i++)
		cout << la[i] << ' ' << endl;
	
	// Question 3d
	int *p = new int [n];
	// Question 3e
	//copy(p, a, n*sizeof(int));
	memcpy(p, a, n*sizeof(int));
		
		
		// Question 3f
		cout << "elements of the array are: " << endl;
		for (int i = 0; i < n; ++i)
		cout << p[i] << " " << endl;
		// Question 3g
		delete[] p;
	

}
int fac (int n)
{
	int x = 1;
	for( int i=1; i<n; i++)
		x*= i;
		
		
	return x;


}

int main ()
{
	// Question 4a
	f (ga,10);
	int n;
	// Question 4b
	int aa [10] = {fac(1), fac(2), fac(3), fac(4), fac(5), fac(6), fac(7), fac(8), fac(9), fac(10)};
	
	/*cout << " the factorial araay : " << endl;
	for (int i = 0; i < 10; ++i)
		cout << aa[i] << " " << endl;*/
		
	//Question 4c
	f (aa, 10);
	
		





return 0;
}

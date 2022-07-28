#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main (){
	float raio, cord, y, x;
	int cadeiras, i = 0;
	const float PI = 3.14159265358;
	
	cin >> raio >> cadeiras;
	
	cord = 0;
	
	while(i < cadeiras){
		x = cos(0 + cord) * raio;
		y = sin(0 + cord) * raio;
		cord = cord + 2 * PI / cadeiras;
		i++;
		cout << fixed << setprecision(2) << x << " " << y << endl;
	}
	
	
	return 0;
	
}
		

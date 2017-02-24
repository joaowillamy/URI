#include <iostream>
 
using namespace std;
 
int main() {
 
    	string t;
	
	int d, h, m, s;
	int dd, hh, mm, ss;
	

	
	cin >> t >> d >> h >> t >> m >> t >> s;
	cin >> t >> dd >> hh >> t >> mm >> t >> ss;
	
	long long tseg = (dd - d) * 24 *60 *60  + (hh - h) *3600 + (mm - m) * 60 + (ss - s);
	
	//dias
	cout << tseg / (24 * 3600) << " dia(s)"<<endl;
	tseg %= 24*3600;
	
	//horas
	cout << tseg / 3600<< " hora(s)" <<endl;
	tseg  %= 3600;
	
	//min
	cout << tseg/60 << " minuto(s)" <<endl;
	tseg  %= 60;
	
	//seg
	cout << tseg << " segundo(s)" << endl ;
    return 0;
}
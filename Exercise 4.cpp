#include <iostream>
#include<math.h>

double getValue();
/**
 * @brief считывает вещественное число с клавиатуры с проверкой ввода
 * @return считанное значение
*/

double getY(const double x);
/**
 * @brief Рассчитывает функцию
 * @return значение функции
*/

using namespace std;
int main()
{
	double Val[10];
	double X[10];
	float z=0.5;
	  
	do{
		for(int i=1;i<=11;i++){
		X[i]=z;
		z=z+0.05;
		}
	}while(z<=1);

	
	 for(int i=1;i<=11;i++){
	 	Val[i]=getY(X[i]);
	 }
	 for(int i=1;i<=10;i++){
	 	cout<<"Y["<<i<<"]="<<Val[i]<<endl;
	 	
	 }
	
    return 0;
}

double getValue()
{
    double value;
    cin>>value;
    if (cin.fail())
    {
        cout<<"Incorrect value"<<endl;
        abort();
    }
    return value;
}


double getY(const double x)
{
    return x + cos((pow(x,0.52) +2)*(180/3.14) );
}


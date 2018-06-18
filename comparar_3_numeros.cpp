#include<iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char* argv[])
{
	 int a, b, c;
	 a=atoi(argv[1]);
 	 b=atoi(argv[2]);
	 c=atoi(argv[3]);
	
	
	 if (a>b && a>c)
	 {
	 	cout << "EL NUMERO MAYOR ES:  " << a;
	 }
	 else
	 {
	 	if (b>a && b>c)
	 	{
	 		cout <<"EL NUMERO MAYOR ES:  " << b;
		}
		else
		{
			if (c>a && c>b)
			{
				cout <<"EL NUMERO MAYOR ES: " << c;
			}
			else
			{
				if (a==b && a>c)
				{
					cout << "SON MAYORES A Y B:  " << a;
				}
				else
				{
					if (a==c && a>b)
					{
						cout << "SON MAYORES A Y C:  " << a;
					}
					else
					{
						if (b==c && b>a)
						{
							cout << "SON MAYORES B y C:  " << b;
						}
						else
						{
							if (a==b && a==c)
							{
								cout << "SON IGUALES A, B, y C:  " << c;	
							}
						}
					}
				
				}
			}	
		}
	 }
 return 0;
}

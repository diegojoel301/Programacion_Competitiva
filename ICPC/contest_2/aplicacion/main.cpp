#include<iostream>

using namespace std;

void mostrarMatriz(int m[3][3])
{
	for(int i = 0; i < 3; i++)
	{
		for(int j = 0; j < 2; j++)
			cout << m[i][j] << " ";
		cout << m[i][2] << "\n";
	}
}

int main()
{
	int ne = 1;

	string in;

	while(getline(cin, in))
	{
		
		int m[3][3]{0}, i = 0;

		//cin.getline(in, 200);

		cout << "Case #" << ne << ":\n";	

		if((int)in[0] != 0)

		{

			while((int)in[i] != 0)

			{

				switch((int)in[i])

				{

					case 97:

						m[0][0] = (m[0][0] + 1) % 10; m[0][1] = (m[0][1] + 1) % 10; m[1][0] = (m[1][0] + 1) % 10;

						break;

					case 98:

						m[0][0] = (m[0][0] + 1) % 10; m[1][1] = (m[1][1] + 1) % 10; m[0][1] = (m[0][1] + 1) % 10; m[0][2] = (m[0][2] + 1) % 10;

						break;

					case 99:

						m[0][2] = (m[0][2] + 1) % 10; m[0][1] = (m[0][1] + 1) % 10; m[1][2] = (m[1][2] + 1) % 10;

						break;

					case 100:

						m[0][0] = (m[0][0] + 1) % 10; m[1][0] = (m[1][0] + 1) % 10; m[2][0] = (m[2][0] + 1) % 10; m[1][1] = (m[1][1] + 1) % 10;

						break;

					case 101:

						m[1][0] = (m[1][0] + 1) % 10; m[1][1] = (m[1][1] + 1) % 10; m[2][1] = (m[2][1] + 1) % 10; m[1][2] = (m[1][2] + 1) % 10; m[0][1] = (m[0][1] + 1) % 10;

						break;

					case 102:

						m[0][2] = (m[0][2] + 1) % 10; m[1][2] = (m[1][2] + 1) % 10; m[2][2] = (m[2][2] + 1) % 10; m[1][1] = (m[1][1] + 1) % 10;

						break;

					case 103:

						m[2][0] = (m[2][0] + 1) % 10; m[1][0] = (m[1][0] + 1) % 10; m[2][1] = (m[2][1] + 1) % 10;

						break;

					case 104:

						m[2][1] = (m[2][1] + 1) % 10; m[1][1] = (m[1][1] + 1) % 10; m[2][2] = (m[2][2] + 1) % 10; m[2][0] = (m[2][0] + 1) % 10;

						break;

					case 105:

						m[2][2] = (m[2][2] + 1) % 10; m[2][1] = (m[2][1] + 1) % 10; m[1][2] = (m[1][2] + 1) % 10;

						break;

					

				}

				i++;

			}

			mostrarMatriz(m);

		}

		else

			mostrarMatriz(m);

		cout << "\n";

		ne++;

	}



	return 0;

}
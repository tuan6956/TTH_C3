#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
int a[1000];
bool check = false;
int dem = 0;
vector<string> vString;
void display(int k)
{
	cout << ++dem << " : ";
	for (int i = 1; i <= k; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
}
void Chinhhoplap(int n, int k)
{
	int i = k;
	while (a[i] == n &&i > 0)
	{
		i--;
	}
	if (i == 0)
		check = true;
	else
	{
		a[i]++;
		for (int j = i + 1; j <= k; j++)
		{
			a[j] = 1;
		}
	}
}
void XuatChinhHopLap(int k, int n)
{
	for (int i = 1; i <= k; i++)
	{
		a[i] = 1;
	}
	while (!check) {
		int flag = 0;
		for (int j = 1; j <= k; j++)
		{

			if (a[j] == 2)
			{
				flag++;
			}
		}
		if (flag >= 2)
		{
			display(k);
		}
		Chinhhoplap(n, k);
	}
}
void Bai33();
void Bai37_a();
void Bai37_b();
void Bai37_c();
void Bai39_a();
void Bai39_b();
void Bai39_c();
void Bai310();
void Bai311_a();
//3.8
void permute(string a, int i, int n);
//3.6
void permute36(string a, int i, int n);
void XuatChinhHopLap34(int k, int n);
string strError[] = { "IN","NI","IO","OI","NO","ON" };
string str36[] = { "12","34","56" };

void main()
{
	//3.1
	//XuatChinhHopLap(8, 2);
	//3.3
	//Bai33();
	//3.7
	//Bai37_a();
	//Bai37_b();
	//Bai37_c();
	//3.9
	//Bai39_c();
	//3.10
	//Bai310();
	//3.11
	//Bai311_a(); // result: 521365
	//string str = "123456";
	//permute(str, 0, 10);
	//bai3.6
	//string str = "123456";
	//XuatChinhHopLap34(5, 9);
	
	system("pause");
}

void Bai33()
{
	for (int i = 0; i < 10000; i++)
	{
		if (i % 7 == 0 || i % 2 == 0)
		{
			cout << ++dem << ": " << i << endl;
		}
	}
}
void Bai37_a()
{
	for (int i = 1; i <= 20000; i++)
	{
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0)
		{
			cout << ++dem << ": " << i << endl;
		}
	}
}
void Bai37_b()
{
	for (int i = 1; i <= 20000; i++)
	{
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 != 0)
		{
			cout << ++dem << ": " << i << endl;
		}
	}
}
void Bai37_c()
{
	for (int i = 1; i <= 20000; i++)
	{
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0 && i % 7 == 0)
		{
			cout << ++dem << ": " << i << endl;
		}
	}
}
void Bai39_a()
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			for (int x = 0; x < 8; x++)
			{
				for (int y = 0; y < 8; y++)
				{
					if (i + j + x + y == 19)
					{
						cout << ++dem << ": " << i << "\t" << j << "\t" << x << "\t" << y << endl;
					}
				}
			}
		}
	}
}
void Bai39_b()
{
	for (int i = 0; i <= 5; i++)
	{
		for (int j = 0; j <= 6; j++)
		{
			for (int x = 3; x <= 7; x++)
			{
				for (int y = 3; y <= 8; y++)
				{
					if (i + j + x + y == 19)
					{
						cout << ++dem << ": " << i << "\t" << j << "\t" << x << "\t" << y << endl;
					}
				}
			}
		}
	}
}
void Bai39_c()
{
	for (int i = -5; i < 10; i++)
	{
		for (int j = -5; j < 10; j++)
		{
			for (int x = -5; x < 10; x++)
			{
				for (int y = -5; y < 10; y++)
				{
					if (i + j + x + y == 19)
					{
						cout << ++dem << ": " << i << "\t" << j << "\t" << x << "\t" << y << endl;
					}
				}
			}
		}
	}
}
void Bai310()
{
	for (int i = 1; i <= 6; i++)
	{
		for (int j = 1; j <= 6; j++)
		{
			for (int x = 1; x <= 6; x++)
			{
				for (int y = 1; y <= 6; y++)
				{
					if (i + j + x + y == 20)
					{
						cout << ++dem << ": " << i << "\t" << j << "\t" << x << "\t" << y << endl;
					}
				}
			}
		}
	}
}
void Bai311_a()
{
	for (int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++)
			for (int x = 0; x < 10; x++)
				for (int y = 0; y < 10; y++)
					for (int z = 0; z < 10; z++)
						for (int t = 0; t < 10; t++)
							for (int w = 0; w < 10; w++)
								if (i + j + x + y + z + t + w == 31)
									cout << ++dem << ": " << i << j << x << y << z << t << w << endl;
}
bool FindElement(vector<string> vector, string str)
{
	if (std::find(vector.begin(), vector.end(), str) != vector.end())
		return true;
	return false;
}
//Bài 3.8
void permute(string a, int i, int n)
{
	int j;
	if (i == n)
	{
		for (int index = 0; index < 6; index++)
		{
			int found = -1, found2 = -1;
			found = a.find(strError[index]);
			if (found != -1)
				found2 = a.find(strError[index], found + 1);
			if (found != -1 && found2 != -1)
				return;
		}
		if (!FindElement(vString,a))
		{
			vString.push_back(a);
			cout << ++dem << ": " << a << endl;
		}

	}

	else
	{
		for (j = i; j <= n; j++)
		{
			swap(a[i], a[j]);
			permute(a, i + 1, n);
			swap(a[i], a[j]);
		}
	}
}
//Bài 3.6
void permute36(string a, int i, int n)
{
	int j;
	if (i == n)
	{
		for (int index = 0; index < 3; index++)
		{
			int found = -1, found2 = -1;
			found = a.find(str36[index]);
			if (found != -1)
			{
				cout << ++dem << ": " << a << endl;
				return;
			}
		}
		/*if (!FindElement(vString, a))
		{
			vString.push_back(a);
			cout << ++dem << ": " << a << endl;
		}*/

	}

	else
	{
		for (j = i; j <= n; j++)
		{
			swap(a[i], a[j]);
			permute36(a, i + 1, n);
			swap(a[i], a[j]);
		}
	}
}
void Bai34(int n, int r, int *arr, int sz) {
	for (int i = n; i >= r; i--) {
		// choose the first element
		arr[r - 1] = i;
		if (r > 1) { // if still needs to choose
					 // recursive into smaller problem
			Bai34(i - 1, r - 1, arr, sz);
		}
		else {
			// print out one solution
			int so1 = 0, so2 = 0, so3 = 0, so4 = 0, so5 = 0;
			for (int i = 0; i < sz; i++) 
			{
				cout << arr[i] << " ";
			}
			cout << endl;
		}
	}
}
void XuatChinhHopLap34(int k, int n)
{
	for (int i = 1; i <= k; i++)
	{
		a[i] = 1;
	}
	while (!check) {
		int flag = 0;
		int arr[10] = { 0,0,0,0,0,0,0,0,0,0 };
		for (int j = 1; j <= k; j++)
		{
			arr[a[j]]++;
		}
		for (int j = 1; j <= 10; j++)
		{
			if (arr[j] >= 3)
			{
				flag = 1;
				break;
			}
		}
		if (arr[1] == 1 && flag == 0)
		{
			display(k);
		}
		Chinhhoplap(n, k);
	}
}

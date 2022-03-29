//#include<iostream>
//using namespace std;
//
//int main() {
//
//	int v, s;
//	cin >> v >> s;
//	int x = 7;
//	int y = 50;
//	int t1 = v / s;
//	int t2 = v % s;
//	int t3;
//	if (t2 > 0)
//		t1 += 1;
//	if (t1 >= 60)
//	{
//		t3 = t1 % 60;
//		t1 /= 60;
//		x -= t1;
//		y -= t3;
//	}
//	else
//		y -= t1;
//	if (y < 0)
//	{
//		x -= 1;
//		y += 60;
//	}
//	if (x < 0)
//	{
//		x += 24;
//	}
//	if (x < 10 && y >= 10)
//		cout << "0" << x << ":" << y;
//	else if (x < 10 && y < 10)
//		cout << "0" << x << ":" << "0" << y;
//	else if (x >= 10 && y <10)
//		cout << x << ":" << "0" << y;
//	else if (x >= 10 && y >= 10)
//		cout << x << ":" << y;
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//
//int a[5010];
//int main() {
//
//	int n;
//	cin >> n;
//	int ans = 1;
//	for (int i = 1; i <= n; i++)
//		a[i] = 1;
//	for (int i = n - 1; i >= 1; i -= 2)
//		for (int j = i; j >= 1; j--)
//			ans++;
//	cout << ans;
//
//
//	return 0;
//}


//#include<iostream>
//using namespace std;
//#define X long long
//
//X n, m, mid,j;
//X a[1000000];
//X b[1000000];
//X c[1000000];
//void find(X ll, X rr)
//{
//	for (j = 0; j < m; j++)
//	{
//		while (ll <= rr)
//		{
//			mid = (ll + rr) / 2;
//			if (a[mid] > b[j])
//			{
//				rr = mid - 1;
//			}
//			else if (a[mid] < b[j])
//			{
//				ll = mid + 1;
//			}
//			else
//			{
//				if (mid != 0)
//				{
//					while (ll <= rr)
//					{
//						if (a[mid] == b[j])
//						{
//							if (a[mid - 1] == b[j])
//							{
//								rr = mid;
//								mid = (ll + rr) / 2;
//								continue;
//							}
//							else
//								break;
//						}
//						else
//							break;
//					}
//				}
//				break;
//			}
//		}
//		if (a[mid] != b[j])
//		{
//			c[j] = -1;
//			cout << c[j] << " ";
//			ll = 0;
//			rr = n;
//		}
//		else
//		{
//			c[j] = mid + 1;
//			cout << c[j] << " ";
//			ll = 0;
//			rr = n;
//		}
//	}
//}
//
//int main() {
//
//	cin >> n >> m;
//	for (X i = 0; i < n; i++)
//		cin >> a[i];
//	for (X i = 0; i < m; i++)
//		cin >> b[i];
//	find(0, n);
//
//	return 0;
//}


//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int a[1000010];
//
//int main() {
//
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//		cin >> a[i];
//	while (m--)
//	{
//		int x;
//		cin >> x;
//		int ans = lower_bound(a + 1, a + n + 1, x) - a;
//		if (x != a[ans])
//			cout << "-1" << " ";
//		else
//			cout << ans << " ";
//	}
//
//	
//	return 0;
//}


//#include<iostream>
//#include<algorithm>
//using namespace std;
//#define X long long
//
//X a[200010];
//X ans, n, c;
//
//int main() {
//
//	cin >> n >> c;
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//	sort(a, a + n);
//	for (int i = 0; i < n; i++)
//	{
//		ans += (upper_bound(a, a + n, a[i] + c) - a) - (lower_bound(a, a + n, a[i] + c) - a);
//	}
//	cout << ans;
//
//	return 0;
//}


//#include<iostream>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//#define X long long
//
//X ans, m, n, sum, l, r, mid;
//X a[100010];
//X b[100010];
//
//int main() {
//
//	cin >> n >> m;
//	for (int i = 0; i < n; i++)
//		cin >> a[i];
//	for (int i = 0; i < m; i++)
//		cin >> b[i];
//	sort(a, a + n);
//	for (int i = 0; i < m; i++)
//	{
//		l = 0;
//		r = n;
//		while (l <= r)
//		{
//			mid = (l + r) / 2;
//			if (a[mid] <= b[i])
//				l = mid + 1;
//			else
//				r = mid - 1;
//		}
//		if (a[1] >= b[i])
//			sum += a[1] - b[i];
//		else
//			sum += min(abs(a[l] - b[i]),abs(a[l - 1] - b[i]));
//	}
//	cout << sum;
//
//	return 0;
//}

//#include <iostream>
//#include <cmath>
//#include <algorithm>
//using namespace std;
//int a[100100], b[100100];
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	for (int i = 1; i <= m; i++)
//	{
//		cin >> b[i];
//	}
//	sort(a + 1, a + n + 1);
//	int ans = 0;
//	for (int i = 1; i <= m; i++)
//	{
//		int l = 0, r = n + 1;
//		while (l < r)
//		{
//			int mid = (l + r) / 2;
//			if (a[mid] <= b[i])
//			{
//				l = mid + 1;
//			}
//			else
//			{
//				r = mid;
//			}
//		}
//		if (b[i] <= a[1])
//		{
//			ans += a[1] - b[i];
//		}
//		else
//		{
//			ans += min(abs(a[l - 1] - b[i]), abs(a[l] - b[i]));
//		}
//	}
//	cout << ans;
//	return 0;
//}



//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int a[100010], b[100010];
//int main() {
//
//	int n, m;
//	int ans = 0;
//	cin >> m >> n;
//	for (int i = 1; i <= m; i++)
//		cin >> a[i];
//	for (int i = 1; i <= n; i++)
//		cin >> b[i];
//	sort(a, a + m + 1);
//	for (int i = 1; i <= n; i++)
//	{
//		int l = 0, r = m + 1;
//		while (l < r)
//		{
//			int mid = (l + r) / 2;
//			if (a[mid] <= b[i])
//				l = mid + 1;
//			else
//				r = mid;
//		}
//		if (a[1] >= b[i])
//			ans += a[1] - b[i];
//		else
//			ans += min(abs(a[l] - b[i]), abs(a[l - 1] - b[i]));
//	}
//	cout << ans;
//
//	return 0;
//}


//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//long long n, k;
//long long a[1000005];
//
//bool cmp(long long i, long long j)
//{
//	return i > j;
//}
//
//bool f(long long x) {
//	long long ans = 0;
//	for (int i = 1; i <= n; i++) 
//	{
//		ans += a[i] / x;
//	}
//	return ans >= k;
//}
//
//int main() {
//	cin >> n >> k;
//	for (int i = 1; i <= n; i++) 
//		cin >> a[i];
//	sort(a + 1, a + n + 1, cmp);
//	long long l = 0, r = a[1];
//	long long mid;
//	while (l + 1 < r) 
//	{
//		mid = (l + r) / 2;
//		if (f(mid)) 
//			l = mid;
//		else 
//			r = mid;
//	}
//	cout << l;
//	return 0;
//}


//#include<iostream>
//using namespace std;
//#define X long long
//
//X b[100010];
//X l, n, k;
//
//bool find(X x)
//{
//	X ll = 0;
//	X rr = l;
//	X m = 0;
//	for (X i = 1; i <= n - 1; i++)
//	{
//		if (b[i + 1] - b[i] >= x)
//		{
//			m += (b[i + 1] - b[i]) / x;
//			if ((b[i + 1] - b[i]) % x == 0)
//				m--;
//		}
//	}
//	if (m > k)
//		return 0;
//	else
//		return 1;
//}
//
//int main() {
//
//	cin >> l >> n >> k;
//	for (X i = 1; i <= n; i++)
//		cin >> b[i];
//	X ll = 0;
//	X rr = l;
//	while (ll <= rr)
//	{
//		X mid = (ll + rr) / 2;
//		if (find(mid))
//			rr = mid - 1;
//		else
//			ll = mid + 1;
//	}
//	cout << ll;
//
//	return 0;
//}


//#include<iostream>
//#include<string>
//using namespace std;
//
//class student
//{
//
//public:
//
//	int num;
//	string name;
//
//	string fuzhi()
//	{
//		return name;
//	}
//};
//
//int main() {
//
//	student s1;
//	s1.num = 1;
//	s1.name = "ajoijaosig";
//
//
//	return 0;
//}

#include<iostream>
using namespace std;

int main() {
	enum weekdays
	{
		Sunday, Monday, Tuseday, Wednesday, Thurday, Friday, Saturday
	};
	enum weekdays day;
	int a, b, c, d, e, f, g, loop;
	char ch = 'A';
	f = Thurday;
	for (a = Sunday; a <= Saturday; a++)
	{
		if (a != f)
			for (b = Sunday; b <= Saturday; b++)
				if ((a != b) && (f > b))
					for (c = Sunday; c <= Saturday; c++)
						if ((c != a) && (c != b) && (c != f) && (a == c + 1) && (f < c))
							for (d = Sunday; d <= Saturday; d++)
								if ((d != a) && (d != b) && (d != f) && (d != c) && (c = d + 3))
									for (e = Sunday; e <= Saturday; e++)
										if ((e != a) && (e != b) && (e != f) && (e != c) && (e != d) && (f < c) && (d == e + 2))
											for (g = Sunday; g <= Saturday; g++)
												if ((g != a) && (g != b) && (g != f) && (g != c) && (g != d) && (g != e) && (g < c) && (g == b + 3))
													for (loop = 0; loop < 7; loop++)
													{
														cout << "Doctor" << char(ch + loop+1) << ":";

														switch (loop + 1)
														{
														case 1:day = weekdays(a); break;
														case 2:day = weekdays(b); break;
														case 3:day = weekdays(c); break;
														case 4:day = weekdays(d); break;
														case 5:day = weekdays(e); break;
														case 6:day = weekdays(f); break;
														case 7:day = weekdays(g); break;
														}
														switch (day)
														{
														case Sunday:cout << Sunday << endl;
															break;
														case Monday:cout << Monday << endl;
															break;
														case Tuseday:cout << Tuseday << endl;
															break;
														case Wednesday:cout << Wednesday << endl;
															break;
														case Thurday:cout << Thurday << endl;
															break;
														case Friday:cout << Friday << endl;
															break;
														case Saturday:cout << Saturday << endl;
															break;
														}
													}

	}
	return 0;
}
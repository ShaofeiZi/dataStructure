#include <iostream>

using namespace std;

template <typename t>
int binary_search_array(const t& key, const t data[], int n)
{
	if (n < 0)
		return -1;
	int low = 0;
	int high = n - 1;
	while (low <= high)
	{	// 避免溢出
		int mid = low + (high - low) / 2;
		// 小则去前半部分继续查找.
		if (key < data[mid]) {
			high = mid - 1;
		}			// 大则去后半部分继续查找.
		else if (data[mid] < key) {
			low = mid + 1;
		}
		else {
			return mid;
		}
	}
	return -1;
}

int main()
{
	int a[5] = { 1, 2, 3, 4, 5 };
	cout << binary_search_array(2, a, 5) << endl;
	cout << binary_search_array(0, a, 5) << endl;
	cout << binary_search_array(2, a + 2, 3) << endl;
	cout << binary_search_array(0, a, 0) << endl;
	system("pause");
	return 0;
}
#include <iostream>
#include <set>
#include <vector>

using namespace std;

int main()
{
  set<int> S = {3, 2, 1, 4, 5};
  int k;
  cin >> k;
  if (k <= 0 || k > S.size()) {
	  cout << "超出范围!" << endl;
  }
  else
  {
    // 第一种方法:
    auto iter = S.begin();
	for (int i = 0; i < k - 1; ++i) {
		++iter;
		cout << *iter << endl;
	}

    // 第二种方法:
    vector<int> V;
    // 预留k - 1个元素空间.
    V.reserve(k - 1);
    // 删除S中的前k - 1个元素并暂存到V中.
    for (int i = 0; i < k - 1; ++i)
    {
      V.push_back(*S.begin());
      S.erase(S.begin());
    }
    cout << *iter << endl;
    // 将前k - 1个元素放回S中.
	for (size_t i = 0; i < V.size(); ++i) {
		S.insert(V[i]);
	}
  }
  system("pause");
  return 0;
}
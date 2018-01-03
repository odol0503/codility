#include <vector>
using namespace std;

int MissingInteger(vector<int> &A);

int main()
{
	vector<int> A = { 1, 2, 3 };
	int ret = 0;
	ret = MissingInteger(A);

	return 0;
}
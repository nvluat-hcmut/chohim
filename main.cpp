#include "Header.h"

int main() {
	cout << "Bai tap kiem tra so thu vi." << endl;
	int count = 0;
	for (int i = 12345678; i <= 87654321; i++) {
		if ((kiemtraso9(i) != 0) && ((i % 1111) == 0) && sokhacnhau(i)) {
			count++;
		}
	}
	cout <<"Co " << count << " so thu vi.";
	/*int n;
	cin >> n;
	cout << kiemtraso9(n);*/
	
	return 0;
}
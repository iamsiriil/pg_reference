#include <iostream>

using namespace std;

struct t_matrix {
	int rows, cols;

	int *matrix;

	t_matrix(int r, int c) : rows(r), cols(c), matrix(new int[r * c]) {}

	~t_matrix() { delete[] matrix; }

	int& at(int i, int j) {
		return matrix[i * cols + j];
	}
};

int main() {

	t_matrix *mx = new t_matrix(4, 4);

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++)
			cout << mx->at(i, j) << " ";
		cout << endl;
	}

	delete mx;
}

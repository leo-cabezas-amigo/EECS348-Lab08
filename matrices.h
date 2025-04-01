#include <iostream>
#include <fstream>
#include <vector>

typedef std::vector<std::vector<int>> m_int;

class IntegerMatrix{
    public:
        
        int height;
        int width;

        IntegerMatrix();

        IntegerMatrix(std::ifstream& file);
        
        void matrix_read(std::ifstream& file);

        static m_int matrix_add(m_int A, m_int B);

        static m_int matrix_mult(m_int A, m_int B);

        int main_diag_sum();

        int secondary_diag_sum();

        void swap_rows(int row1, int row2);

        void swap_columns(int col1, int col2);

        void update_value(int row_idx, int col_idx, int new_val);

        void display_matrix();
};

#include <fstream>

int main()
{
    int n_size, m_size;
    std::ifstream fin("in.txt");
    std::ofstream fout("out.txt");

    fin >> n_size;
    int* n_arr = new int[n_size];
    for (int i = 0; i < n_size; i++) {
        fin >> n_arr[i];
    }

    fin >> m_size;
    int* m_arr = new int[m_size];
    for (int i = 0; i < m_size; i++) {
        fin >> m_arr[i];
    }

    fout << m_size << std::endl << m_arr[m_size - 1] << " ";
    for (int i = 0; i < m_size - 1; i++) {
        fout << m_arr[i] << " ";
    }
    fout << std::endl;

    fout << n_size << std::endl;
    for (int i = 1; i < n_size; i++) {
        fout << n_arr[i] << " ";
    }
    fout << n_arr[0] << std::endl;

    delete[] n_arr;
    delete[] m_arr;
    fin.close();
    fout.close();
    return 0;
}
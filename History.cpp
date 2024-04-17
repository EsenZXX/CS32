#include "History.h"
#include <iostream>
using namespace std;


History::History(int nRows, int nCols) : m_rows(nRows), m_cols(nCols) {
    for (int r = 0; r < m_rows; r++)
        for (int c = 0; c < m_cols; c++)
            m_grid[r][c] = '.';
}

bool History::record(int r, int c) {
    if (r < 1 || r > m_rows || c < 1 || c > m_cols)
        return false;

    char& gridChar = m_grid[r - 1][c - 1];
    if (gridChar == '.')
        gridChar = 'A';
    else if (gridChar < 'Z')
        gridChar++;

    return true;
}

void History::display() const {
    clearScreen();
    for (int r = 0; r < m_rows; r++) {
        for (int c = 0; c < m_cols; c++)
            cout << m_grid[r][c];
        cout << endl;
    }
    cout << endl;
}

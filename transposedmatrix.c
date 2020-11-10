/*transposed matrix*/
#include <tgmath.h>
#include <math.h>  
#include<iostream>
#include<cstdio>
#include <bits/stdc++.h>    
    using namespace std;
    int main()
    {
        int Mat[3][3], trans[3][3], l, k, i, j;
        cout << "Enter rows and columns of matrix: ";
        cin >> l>> k;
        // Storing element the input elements as[][].
        cout << endl << "Enter elements of matrix: " << endl;
        for(i = 0; i < l; ++i)
        for(j = 0; j < k; ++j)
        {
            cout << "Enter elements a" << i + 1 << j + 1 << ": ";
            cin >> Mat[i][j];
        }
        // Showing the matrix Mat[][]
        cout << endl << "Entered Matrix: " << endl;
        for(i = 0; i < l; ++i)
            for(j = 0; j < k; ++j)
            {
                cout << " " << Mat[i][j];
                if(j == k - 1)
                    cout << endl << endl;
            }
        // Transpose of matrix Mat[][] stored in array trans[][].
        for(i = 0; i < l; ++i)
            for(j = 0; j < k; ++j)
            {
                trans[j][i]=Mat[i][j];
            }
        //Displaying array trans[][].
        cout << endl << "Transpose of Matrix: " << endl;
        for(i = 0; i < k; ++i)
            for(j = 0; j < l; ++j)
            {
                cout << " " << trans[i][j];
                if(j == l - 1)
                    cout << endl << endl;
            }
        return 0;
    }

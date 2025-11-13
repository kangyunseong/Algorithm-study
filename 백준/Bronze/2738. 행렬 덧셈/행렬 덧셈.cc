#include <iostream>
#include <string>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    
    int arr_A[N][M];
    int arr_B[N][M];
    int arr_ans[N][M];

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> arr_A[i][j];
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> arr_B[i][j];
        }
    }

    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            arr_ans[i][j] = arr_A[i][j] + arr_B[i][j];
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cout << arr_ans[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}
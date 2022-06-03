#include <iostream>
using namespace std;


int main() {
    int T;
    int N;
	cin >> T;
	for( int i = 0 ; i < T; i++){
	    cin >> N;
	    int a[N];
	    for (int j = 0; j < N; j++ ){
	        cin >> a[j];
	    }
	    for (int j = 0; j < N; j++ ){
	        cout << a[N-j-1] << ' ';
	    }
	    cout<<endl;
	}
	
	return 0;
}

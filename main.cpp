#include <iostream>
using namespace std;

void * _bubblesort_(
	void * _array_,
	void (*_puntero_) (void *, int _i, int _k),
	int _tam_
){
	int _k = 0;
	for (int i = 0; i < _tam_ ; i ++)
		for(int k = 0; k < _tam_-1; k++)
			_puntero_(_array_,i,k);
	return _array_;
}

void  _b_int_ (void * _vector_, int _i,int _k) {
    int *pointertoarray = (int *)_vector_;
    int *arr = pointertoarray;
    if(arr[_k] > arr[_i]){
        int temp = arr[_k];
        arr[_k] = arr[_i];
        arr[_i] = temp;
    }
}

void  _b_float_ (void * _vector_, int _i,int _k){
    float *pointertoarray = (float *)_vector_;
    float *arr = pointertoarray;
    if(arr[_k] > arr[_i]){
        float temp = arr[_k];
        arr[_k] = arr[_i];
        arr[_i] = temp;
    }
}

void  _b_double_ (void * _vector_, int _i,int _k){
    double *pointertoarray = (double *)_vector_;
    double *arr = pointertoarray;
    if(arr[_k] > arr[_i]){
        double temp = arr[_k];
        arr[_k] = arr[_i];
        arr[_i] = temp;
    }
}

void  _b_char_ (void * _vector_, int _i,int _k){
    char *pointertoarray = (char *)_vector_;
    char *arr = pointertoarray;
    if(arr[_k] > arr[_i]){
        char temp = arr[_k];
        arr[_k] = arr[_i];
        arr[_i] = temp;
    }
}

int main(){
	int i = 0;
	int _array_1 [5] = {2,20,7,108,9}; // RANDOMS
	float _array_2 [5] = {4.4,5.4,9.1,7.4,2.2};
	double _array_3 [5] = {3.0,8.0,2.0,4.0,15.0};
	char _array_4 [6] = {'k','a','r','l','o','s'};

	_bubblesort_(_array_1,_b_int_,5);
	// PRINT
	for(int a = 0; a < 5; a++){
	    cout << _array_1[a] << "; ";
	}
	cout << endl;
	_bubblesort_(_array_2,_b_float_,5);
	// PRINT
    for(int a = 0; a < 5; a++){
        cout << _array_2[a] << "; ";
    }
    cout << endl;
	_bubblesort_(_array_3,_b_double_,5);
	// PRINT
    for(int a = 0; a < 5; a++){
        cout << _array_3[a] << "; ";
    }
    cout << endl;
	_bubblesort_(_array_4,_b_char_,6);
	// PRINT
    for(int a = 0; a < 6; a++){
        cout << _array_4[a] << "; ";
    }
    cout << endl;

    return 0;
}
#include<iostream>
#include<array>
using namespace std;

int columnsize_final(int input_sparse_matrix[4][5]){
	int finalmatrix_columns;
	int i=0;
	for (int i=0;i<4;i++){
		for (int j=0;j<5;j++){
			if(input_sparse_matrix[i][j]!=0){
				finalmatrix_columns++;
			}
		}
	}
	return finalmatrix_columns;
}

void finalmatrix(int finalmatrix_columns, int input_sparse_matrix[4][5]){
	int finalmatrix[3][finalmatrix_columns];
	int k=0; 
	int i=0;
	while (i<4){
		int j=0;
		while(j<5){
			if(input_sparse_matrix[i][j]!=0){
				finalmatrix[0][k] = i;  
                finalmatrix[1][k] = j;  
                finalmatrix[2][k] = input_sparse_matrix[i][j];  
                k++;  
			}
		 j++;
		}
		i++;
	}

	
	for(int i=0 ;i<3; i++)  
    {  
        for(int j=0; j<finalmatrix_columns; j++)  
        {  
            cout<< finalmatrix[i][j];  
            cout<<"\t"; 
        }  
        cout<<"\n";  
    }  
}

int main(){
	int finalmatrix_columns = 0; 
	int input_sparse_matrix [4][5]= 
	{
		{0,0,3,0,4},
		{0,0,5,7,0},
		{0,0,0,0,0},
		{0,2,6,0,0}
	};
 	finalmatrix_columns= columnsize_final(input_sparse_matrix);
	finalmatrix(finalmatrix_columns,input_sparse_matrix);
}
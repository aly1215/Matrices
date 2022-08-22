/*A.M.C.O*/
/*Thank Me Later*/
/*Activity 1*/

#include<fstream>
#include<iostream>

using namespace std;

int main()      //start main
{
	ifstream inputFile("input.txt");        //open input.txt as input and using inputfile as handler
	int Case;          //declaring Case
	int row, col;
	int flag = 0, f, s;

	inputFile >> Case; //read the file and assign the first input to Case
	int Array[row][col];        //array
	cout<< "Cases : "<< Case <<endl;    //output the value of Case


    int Count = 1;
	while(Count <= Case)
	{
	    Count++;
		inputFile >> row >> col;        //get the two input in the input.txt and assign it to row and col
		cout<< "Rows : "<< row <<endl;  //display row
		cout<< "Column : "<< col <<endl;    // display col

		for(f = 0; f < row; f++)
		{
			for(s = 0; s < col; s++)
			{
				inputFile >> Array[f][s];
			}
		}

			if(row == col)
			{
				for(f = 0; f < row; f++)
				{
					for(s = 0; s < col; s++)
					{
						if(f != s && Array[f][s] != 0)
							flag = 1;

					}
                }

					if(flag == 1)
						cout << Count << " - Square matrix" <<endl;     //display
					else
						cout << Count << " - Diagonal Matrix" <<  endl;     //display
					flag = 0;
            }

				else
					cout << Count << " - Not Square Matrix" << endl;        //display
    }

			inputFile.close();  //close the .txt file
	}




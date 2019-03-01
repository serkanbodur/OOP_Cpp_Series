#include <iostream>
#include <time.h>
#include <iomanip>
#include <string>
#include "Random_Number_Generator.h"
using namespace std;

bool TakeUserInput(int& data_size, int& min_number, int& max_number)
{
	cout << "Enter the 'data size' (0 for terminate the program) : ";
	cin >> data_size;
	cout << "Enter the minimum number : ";
	cin >> min_number;
	cout << "Enter the maximum number : ";
	cin >> max_number;

	if (data_size == 0)
		return false;
	else
	{
		return true;
	}
}

int* CreateDataSet(int dataSize, int min_number, int max_number)
{
	int *dataset;
	dataset = new int[dataSize];
	for (int i = 0;i < dataSize;i++)
	{
		int randomNumber = min_number + rand() % (max_number - min_number + 1);
		dataset[i] = randomNumber;
	}
	return dataset;
}

double CalculateMean(int* data_array, int data_size)
{
	double mean;
	int sum = 0;
	for (int i = 0;i < data_size;i++)
		sum += data_array[i];

	mean = (double)sum / data_size;
	return mean;
}

double CalculateVariance(int* data_array, int data_size, double mean)
{
	double variance, sum = 0;
	for (int i = 0;i < data_size;i++)
		sum += (data_array[i] - mean)*(data_array[i] - mean);
	
	variance = sum / data_size;
	return variance;
}

double CalculateStandartDeviation(int* data_array, int data_size, double mean)
{
	double variance, sum = 0;
	for (int i = 0;i < data_size;i++)
		sum += (data_array[i] - mean)*(data_array[i] - mean);

	variance = sum / data_size;
	return sqrt(variance);
}

double* CalculateZScore(int* data_array, int data_size, double mean, double std_deviation)
{
	double *zscore;
	zscore = new double[data_size];
	for (int i = 0;i < data_size;i++)
		zscore[i] = (data_array[i] - mean) / std_deviation;
	
	return zscore;
}

void PrintMessage(const string& message)
{
	cout << message;
}

void PrintDataArray(int* data_array, int data_size)
{
	cout << "+-----------------------------+" << endl;
	cout << "|          DATA ARRAY         |" << endl;
	cout << "+-----------------------------+" << endl;
	for (int i = 0;i < data_size;i++)
		cout << "|" << setw(29) << data_array[i] << "|" << endl;
	
}

void PrintMean(double mean)
{
	cout << "+-----------------------------+" << endl;
	cout << "|            MEAN             |" << endl;
	cout << "+-----------------------------+" << endl;
	cout << "|" << setw(29) << mean << "|" << endl;
}

void PrintVariance(double variance)
{
	cout << "+-----------------------------+" << endl;
	cout << "|         VARIANCE            |" << endl;
	cout << "+-----------------------------+" << endl;
	cout << "|" << setw(29) << variance << "|" << endl;
}

void PrintStandartDeviation(double std_deviation)
{
	cout << "+-----------------------------+" << endl;
	cout << "|       STANDART DEVIATION    |" << endl;
	cout << "+-----------------------------+" << endl;
	cout << "|" << setw(29) << std_deviation << "|" << endl;
}

void PrintZScoreArray(double* zscore, int data_size)
{
	cout << "+-----------------------------+" << endl;
	cout << "|         Z SCORE             |" << endl;
	cout << "+-----------------------------+" << endl;

	for (int i = 0;i < data_size;i++)	
		cout << "|" << setw(29) << zscore[i] << "|" << endl;	
}

double* CalculateTScore(int* data_array, int data_size, double mean, double std_deviation)
{
	double *tscore;
	tscore = new double[data_size];

	for (int i = 0;i < data_size;i++)
		tscore[i] = 10 * ((data_array[i] - mean) / std_deviation) - 50;
	
	return tscore;
}

void PrintTScoreArray(double* tscore, int data_size)
{
	cout << "+-----------------------------+" << endl;
	cout << "|         T SCORE             |" << endl;
	cout << "+-----------------------------+" << endl;

	for (int i = 0;i < data_size;i++)
		cout << "|" << setw(29) << tscore[i] << "|" << endl;
}
int main()
{
	srand(time(NULL));
	int dataSize, minNumber, maxNumber, i;
	cout << "+--------------+" << endl;
	cout << "|  USER INPUT  |" << endl;
	cout << "+--------------+" << endl;
	if (!TakeUserInput(dataSize, minNumber, maxNumber)) {
		PrintMessage("TERMINATED BY USER!");
		return 1;
	}
	int* DataArray = CreateDataSet(dataSize, minNumber, maxNumber);
	PrintDataArray(DataArray, dataSize);
	double mean = CalculateMean(DataArray, dataSize);
	PrintMean(mean);
	double variance = CalculateVariance(DataArray, dataSize, mean);
	PrintVariance(variance);
	double stdDeviation = CalculateStandartDeviation(DataArray, dataSize, mean);
	PrintStandartDeviation(stdDeviation);
	double* zscore = CalculateZScore(DataArray, dataSize, mean, stdDeviation);
	PrintZScoreArray(zscore, dataSize);
	double* tscore = CalculateTScore(DataArray, dataSize, mean, stdDeviation);
	PrintTScoreArray(tscore, dataSize);
	system("pause");
	return 0;
}

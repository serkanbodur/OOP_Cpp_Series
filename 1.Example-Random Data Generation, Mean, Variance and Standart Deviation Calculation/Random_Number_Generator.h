#pragma once
/*!
* \brief In this example,it has been shown how some statistical concepts are calculated.
* \author Serkan Bodur
*/
#include <iostream>

/**
* \brief The  function that takes max,min and size values from user.
* \param data_size
* \param min_number
* \param max_number
* \return true or false
*/
bool TakeUserInput(int& data_size, int& min_number, int& max_number);

/**
* \brief The function that creates the data we will use.
* \param dataSize
* \param min_number
* \param max_number
* \return dataset
*/
int* CreateDataSet(int dataSize, int min_number, int max_number);

/**
* \brief The function that calculates average.
* \param data_array
* \param data_size
*/
double CalculateMean(int* data_array, int data_size);

/**
* \brief The function that calculates variance.
* \param data_array
* \param data_size
* \param mean
* \return mean
*/
double CalculateVariance(int* data_array, int data_size, double mean);

/**
- \brief The function that calculates standart deviation.
* \param data_array
* \param data_size
* \param mean
* \return variance
*/
double CalculateStandartDeviation(int* data_array, int data_size, double mean);


/**
* \brief The function that calculates Z-Score.
* \param data_array
* \param data_size
* \param mean
* \param std_deviation
* \return sqrt(variance)
*/
double* CalculateZScore(int* data_array, int data_size, double mean, double std_deviation);

/**
* \brief The function that gives warning message to screen(if user enter wrong value
* such as -9.a
* \param message
* \return zscore
*/
void PrintMessage(const string& message);

/**
* \brief The function that prints the created data array to the screen.
* \param data_array
* \param data_size
*/
void PrintDataArray(int* data_array, int data_size);

/**
* \brief The function that prints average of array to screen.
* \param mean
*/
void PrintMean(double mean);

/**
* \brief The function that prints variance to screen.
* \param variance
*/
void PrintVariance(double variance);

/**
* \brief The function that prints standart deviation to screen.
* \param std_deviation
*/
void PrintStandartDeviation(double std_deviation);

/**
* \brief The function that prints Z-Score to screen.
* \param zscore
* \param data_size
*/
void PrintZScoreArray(double* zscore, int data_size);

/**
* \brief The function that calculates T-score.
* \param data_array
* \param data_size
* \param mean
* \param std_deviation
*/
double* CalculateTScore(int* data_array, int data_size, double mean, double std_deviation);

/**
* \brief The function that prints T-Score to screen.
* \param tscore
* \param data_size
*/
void PrintTScoreArray(double* tscore, int data_size);


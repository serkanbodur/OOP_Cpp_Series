#include "Vehicle.h"

/**
* \brief Default constructor function
* \param maxPassengerNumber
* \param maxSpeed
*/
Vehicle::Vehicle(int maxPassengerNumber, double maxSpeed)
{
	this->maxSpeed = maxSpeed; this->maxPassengerNumber = maxPassengerNumber;
	this->engineStarted = false; this->currentSpeed = 0; this->currentPassengerNumber = 0;
	this->airConditionDegree = 22;
}

/**
* \brief Default destructor function
*/
Vehicle:: ~Vehicle() { }

/**
* \brief Acceleration of the car depends on the engine status, if engine is not started, accelerate function returns false.
* \brief Acceleration limit also depends on the maxSpeed of the vehicle.
* \brief If any attempt to increase the speed of the vehicle to a higher value than maxSpeed, just set the currentSpeed to maxSpeed value.
* \param amount
* \return true or false
*/
bool Vehicle::Accelarate(double amount) 
{
	maxSpeed = currentSpeed;
	if (engineStarted == false || amount <= maxSpeed) { return false; }
	else { maxSpeed += amount; currentSpeed = maxSpeed; return true; }
}

/**
* \brief Deceleration of the car depends on the engine status, if engine is not started, decelerate function returns false.
* \brief Deceleration limit also depends on the maxSpeed of the vehicle.
* \brief If any attempt to decrease the speed of the vehicle to a smaller value than maxSpeed, just set the currentSpeed to maxSpeed value.
* \param amount
* \return true or false
*/
bool Vehicle::Decelerate(double amount) 
{
	maxSpeed = currentSpeed;
	if (engineStarted == false || amount >= maxSpeed) { return false; }
	else { maxSpeed -= amount; currentSpeed = maxSpeed; return true; }
}

/**
* \brief StartEngine function print a message on the screen and set the bool member variable depending.
*/
void Vehicle::StartEngine()
{
	engineStarted = true;
	cout << "Engine started " << endl;
}

/**
* \brief StopEngine function print a message on the screen and set the bool member variable depending.
*/
void Vehicle::StopEngine() 
{
	engineStarted = false;
	cout << "Engine stopped " << endl;
}

/**
* \brief GetIn member function depend on the current speed and passengerCount.
* \brief If current speed is non-zero value. GetIn function returns false.
* \brief If currentPassenger number higher than maxPassengerNumber, these functions print an error message and returns false.
* \param passengerNumber
* \return true or false
*/
bool Vehicle::GetIn(int passengerNumber) 
{
	if (currentSpeed != 0 || maxPassengerNumber <= currentPassengerNumber) {return false; }
	else { currentPassengerNumber += passengerNumber; return true; }
}

/**
* \brief GetOut member function depend on the current speed and passengerCount.
* \brief If current speed is non-zero value. GetOut function returns false.
* \brief If currentPassenger number equal to zero, these functions print an error message and returns false.
* \param passengerNumber
* \return true or false
*/
bool Vehicle::GetOut(int passengerNumber)
{
	if (currentSpeed != 0 || currentPassengerNumber==0) {return false; }
	else { currentPassengerNumber -= passengerNumber;return true; }
}


/**
* \brief getCurrentSpeed function return Current Speed of vehicle
* \return currentSpeed
*/
double Vehicle::getCurrentSpeed()
{
	return currentSpeed; 
}

/**
* \brief getCurrentPassengerNumber function return Current Passenger Number in vehicle
* \return currentSpeed
*/
double Vehicle::getCurrentPassengerNumber() 
{
	return currentPassengerNumber; 
}

/**
* \brief IsEngineStarted function return engine state.(Started or not).
* \return engineStarted
*/
bool Vehicle::IsEngineStarted()
{ 
	return engineStarted; 
}

/*
Final lab: Automatic Plant Waterer
4/19/18
Alora Mazarakis, Kiana Cramer, Zach Gore, Hunter York
*/

//Libraries being used
#include <math.h>
#include <stdio.h>

//I/O Initialization
const int analogIn = A0;							//Need to update for soil sensor pins

//Water pump control definition
const int PumpPos = 6;								//Need to update for soil sensor pins
const int PumpNeg = 7;								//Need to update for soil sensor pins

void water()
{
	//Moisture Variables Initialization
	long int moistsense = 0;						//Average soil moisture over 30 samples
	long int soilThreshold = 0;						//Some constant threshold of soil dryness
	
	while(1)										//Run forever
	{
		for(int i = 0; i < 30; i++)					//Sample 30 times
		{
			moistsense =+ analogRead(analogIn);		//average soil data over 30 samples
			//How does analogRead work? Need more research on how to use this function
		}
		if (moistsense >= soilThreshold)
		{
			//turn da wata on
		}
		else
		{
			//turn da wata off
		}
		moistsense = 0;								//Reset soil data
	}
}

 void main()
{
	water();
}


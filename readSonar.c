#pragma config(Sensor, S1,     sonar,         sensorSONAR)

//settings
float min_distance = 10; //min obstacle distance to trigger event (in)

bool readSonar(){
	nxtDisplayString(0, "Object Dist: %f", SensorValue[sonar]);
	if(SensorValue[sonar] <= min_distance){ //detected object 
		nxtDisplayString(1,"Object Detected");
		return true;
	}	
	else{
		return false;
	}	
}

task main(){
	while(nNxtButtonPressed != kExitButton)
		readSonar();
}

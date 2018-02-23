
int lastProbs[...];
int currentProbs[...];//probability arrays

void lineCommand(){ //tells the motors what to do in order to follow the line
	if(...);
		motor[motor1] = 50;
	else
		motor...
}

int distanceTraveled(float time){//converts seconds into angles
		
}

bool readSonar(){//returns true if there is an obstacle
	

}

void updateProbabilities(bool sonarReading, int distance){//updates the probability arrays
	
}

task localization(){
	while(true){
		int t = 0;
		lineCommand();//every miliseconds updates motors to follow line
		wait1Msec(1);
		t++;
		if(t==5){ //every 5 miliseconds update probability
			updateProbabilities(readSonar(),distanceTraveled(5));
			t==0;
		}
	}
}

task main()
{
	startTask(localization);


}

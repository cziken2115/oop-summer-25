// TramSimulatorOOP.cpp: definiuje punkt wejścia dla aplikacji.
//

#include "TramSimulatorOOP.h"

using namespace std;

int main()
{
	cout << "one simulation running on." << endl;
	TrafficManager* mainManager = TrafficManager::GetInstance();
	mainManager->ReadCSVData();
	mainManager->Setup();
	mainManager->RunSimulation();
	mainManager->WriteCSVData();
	return 0;
}

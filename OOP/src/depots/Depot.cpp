#include "Depot.h"

unique_ptr<Tram> BorekDepot::TramNumberOne(int nr) {
	return make_unique<PesaTwist>(nr);
}

unique_ptr<Tram> BorekDepot::TramNumberTwo(int nr) {
	return make_unique<ModerusGamma>(nr);
}

unique_ptr<Tram> GajDepot::TramNumberOne(int nr) {
	return make_unique<PesaTwist2010>(nr);
}

unique_ptr<Tram> GajDepot::TramNumberTwo(int nr) {
	return make_unique<ModerusBeta>(nr);
}

unique_ptr<Tram> O�binDepot::TramNumberOne(int nr) { // po wroc�awiu je�d�� sk�ady typu 2239+2240 (doczepa) ale uwzgl�dniamy tylko numer boczny pierwszego wagonu 
	return make_unique<Konstal>(nr);
}

unique_ptr<Tram> O�binDepot::TramNumberTwo(int nr) { // tak samo jak w przypadku Konstali
	return make_unique<Protram>(nr);
}
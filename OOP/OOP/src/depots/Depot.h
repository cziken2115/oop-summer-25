#pragma once
#include "TramModels.h"
#include <memory>
#include <iostream>

using namespace std;

// ABSTRACT CLASS
class Depot { // tram depot implementing factory design pattern, to each depot are assigned two specific tram models
public:
	virtual unique_ptr<Tram> TramNumberOne(int id) = 0;
	virtual unique_ptr<Tram> TramNumberTwo(int id) = 0;
};

class BorekDepot : public Depot {
public:
	unique_ptr<Tram> TramNumberOne(int nr) override;
	unique_ptr<Tram> TramNumberTwo(int nr) override;
};

class GajDepot : public Depot {
public:
	unique_ptr<Tram> TramNumberOne(int nr) override;
	unique_ptr<Tram> TramNumberTwo(int nr) override;
};

class O�binDepot : public Depot {
public:
	unique_ptr<Tram> TramNumberOne(int nr) override;
	unique_ptr<Tram> TramNumberTwo(int nr) override;
};
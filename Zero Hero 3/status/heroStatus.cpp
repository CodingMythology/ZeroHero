#include <iostream>
#include <cstdlib>

#include "heroStatus.h"

using namespace std;

HeroStatus::HeroStatus(){
	heroHPMax = 20;
	heroHPNow = 6;
	EXP = 0;
	coin = 0;
	levelUpEXP = 20;
	level = 1;
	STR = 5; 
	INTE = 5;
	LUC = 5;
	AGI = 5;
	skillPoint = 0;
	physicalDefense = STR * 0.6 + LUC * 0.2 + AGI * 0.1;
	magicDefense = STR * 0.2 + LUC * 0.6 + AGI * 0.15;
}

HeroStatus::~HeroStatus(){
	
}

void HeroStatus::printStatus(){
	cout << "************************"  << endl;
    cout << "* STR:"<< STR <<"  * PhyDF:"<< physicalDefense << "    *" << endl;
    cout << "* INT:"<< INTE <<"  * MagDF:"<< magicDefense << "    *" << endl;
    cout << "* LUC:"<< LUC <<"  *  SKP:" << skillPoint << "    *" << endl;
    cout << "* AGI:"<< AGI <<"  *             *"  << endl;
    cout << "************************" << endl;
    cout << "Press any key to return" << endl;
    char temp;
    cin >> temp;
}

int HeroStatus::getHeroHpNow(){
	return heroHPNow;
}

void HeroStatus::changeHeroHpNow(int val){
	heroHPNow = val;
}

int HeroStatus::getHeroHpMax(){
	return heroHPMax;
}

void HeroStatus::changeHeroHpMax(int val){
	heroHPMax = val;
}

int HeroStatus::getCoin(){
	return coin;
}

void HeroStatus::changeCoin(int val){
	coin = val;
}

int HeroStatus::getLevel(){
	return level;
}

void HeroStatus::changeLevel(int val){
	level = val;
}

int HeroStatus::getEXP(){
	return EXP;
}

void HeroStatus::increaseEXP(int val){
	EXP = EXP + val;
}

int HeroStatus::getLevelUpEXP(){
	return levelUpEXP;
}

void HeroStatus::increaseLevelUpEXP(int val){
	levelUpEXP = levelUpEXP + val;
}




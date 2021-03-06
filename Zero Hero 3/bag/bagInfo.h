#ifndef BAGINFO_H
#define BAGINFO_H

#include "../status/heroStatus.h"

class HeroStatus;
class Bag{
private:
	int coin;
	int healBottle;
	int beanSoup;
	int step;
public:
	Bag(int step_);
	~Bag();
	void printBagItem(HeroStatus* heroStatus);
	int getCoin();
	void changeCoin(int val);
	void ItemUse(char name, HeroStatus* heroStatus);
	void changeHealBottle();
	void changeBeanSoup();
	int getHealBottle();
	friend void battleReward(HeroStatus* heroStatus, Bag* bag, int step);
	friend ostream& operator <<(ostream& saved, const Bag& bag);
	//remember here input operator dont need const
	friend istream& operator >>(istream& load, Bag& bag);
};

#endif
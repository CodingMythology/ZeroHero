#ifndef SKILL_H
#define SKILL_H

#include <map>
#include <cstdlib>
#include <iostream>

//
using namespace std;

enum Skill{
	strongAttack,
	recover,
	deathHit,
	divineShield
	//battleCry
};

/***********************************************
 * So the idea is the emun can not be printed  *
 * So I used one map<> to turn it into string  *
 * Then cos I need to store the what skill 	   *
 * hero learned. I used another map<> to turn  *
 * it into integer. Finally I can use int to   *
 * present skill.							   *
 ***********************************************/
 //check for using struct
class SkillPhaser{
	map<Skill, string> skill2String;
	//this is for list the skill
	map<Skill, int> skill2Int;
	map<int, Skill> int2Skill;
	/************************************
	 * it is like a heap				*
	 * 		|skill5| <-numOfSkill		*
	 *		|skill4|					*
	 *		|skill3|					*
	 *		|skill2|					*
	 *		|skill1|					*
	 *		no skill <-skillHeroHave	*
	 * once hero learned skill 			*
	 * the skillHeroHave would add 1	*
	 * so it move up and map[] can use 	*
	 * skillHeroHave to add skill1  	*
	 ************************************/
	int numOfSkill;
	int skillHeroHave;
public:
	SkillPhaser();
	void printSkill();
	void learnedSkill();
	void detailOfSkill();
	friend int chooseSkill(SkillPhaser* skill);
};

#endif


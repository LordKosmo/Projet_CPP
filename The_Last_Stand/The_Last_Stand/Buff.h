#ifndef H_BUFF
#define H_BUFF
#include "Iskill.h"
class Buff : public Iskill
{
private:
	std::string stat;
	int value;
public:
	Buff();
	Buff(std::string newName, std::string newStat, int newValue);
	virtual ~Buff();
	std::string getStat();
	void setStat(std::string newStat);
	int getValue();
	void setValue(int value);
	std::string getType();
};
#endif


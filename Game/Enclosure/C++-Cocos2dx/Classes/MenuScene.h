#ifndef _MENUSCENE_H_
#define _MENUSCENE_H_

#include "cocos2d.h"

class MainMenu : public cocos2d::Layer
{
public:
	static cocos2d::Scene* createScene();

	virtual bool init();

	CREATE_FUNC(MainMenu);
};
#endif
#pragma once
#include<iostream>
#include "Subscriber.h"
using namespace std;

class Desktop :
	public Subscriber
{public:
	void getNotification(int )override;
};


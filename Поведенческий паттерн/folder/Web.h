#pragma once
#include "Subscriber.h"
#include<iostream>
using namespace std;

class Web :
	public Subscriber
{public:

	void getNotification(int)override;
};


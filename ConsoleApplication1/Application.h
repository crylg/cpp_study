#pragma once
#include "AppDelegate.h"
class Application
{
public:
	void setDelegate(AppDelegate* delegate);
	void run();
private:
	AppDelegate * delegate;
};


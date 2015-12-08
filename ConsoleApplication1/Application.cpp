#include "stdafx.h"
#include "Application.h"
void Application::setDelegate(AppDelegate* delegate)
{
	this->delegate = delegate;
}

void Application::run()
{
	this->delegate->ApplicationDidFinish();
}

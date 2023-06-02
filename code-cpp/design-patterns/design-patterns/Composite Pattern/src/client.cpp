#include <iostream>
#include "AntiVirusSoftware.h"
#include "ImageFile.h"
#include "TextFile.h"
#include "VideoFile.h"
#include "FileFolder.h"
AntiVirusSoftware* select(int a)
{
	AntiVirusSoftware* anti = nullptr;
	if (a == 1)
	{
		anti = new ImageFile();
	}
	else if (a == 2)
	{
		anti = new TextFile();
	}
	else if (a == 3)
	{
		anti = new VideoFile();
	}
	else if (a == 4)
	{
		AntiVirusSoftware* anti1 = new ImageFile();
		AntiVirusSoftware* anti2 = new TextFile();
		AntiVirusSoftware* anti3 = new VideoFile();
		AntiVirusSoftware*  an[3] = { anti1,anti2,anti3 };
		anti = new FileFolder(an);
	}
	return anti;
}
int main()
{
	AntiVirusSoftware * anti = select(4);
	anti->antiVirus();

	return 0;
}
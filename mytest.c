static void ApureInit(void)
{
    if (!airpureLayer)
    {
        airpureLayer = ituSceneFindWidget(&theScene, "airpureLayer");
        assert(airpureLayer);

		pmText = ituSceneFindWidget(&theScene, "pm");
		assert(pmText);
		
		tvocText = ituSceneFindWidget(&theScene, "tvoc");
		assert(tvocText);
		
		dangText = ituSceneFindWidget(&theScene, "dang");
		assert(dangText);
		
		powerText = ituSceneFindWidget(&theScene, "power");
		assert(powerText);
		
		speedText = ituSceneFindWidget(&theScene, "speed");
		assert(speedText);
		
		modeText = ituSceneFindWidget(&theScene, "mode");
		assert(modeText);
		
		lightText = ituSceneFindWidget(&theScene, "light");
		assert(lightText);
    }
}

bool airpureOnEnter(ITUWidget* widget, char* param)
{
	ApureInit();

    return true;
}

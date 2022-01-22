#ifndef _CSLOGOBJECH_H_
#define _CSLOGOBJECH_H_

#include <iostream>
#include <stdarg.h>
#include <string>
#include <log4cplus/logger.h>
#include <log4cplus/consoleappender.h>
#include <log4cplus/layout.h>
#include <log4cplus/helpers/loglog.h>
#include <log4cplus/loggingmacros.h>
#include <log4cplus/initializer.h>
#include <log4cplus/clogger.h>
#include <log4cplus/configurator.h>
#include <stdio.h>
#include <string.h>


using namespace log4cplus;
using namespace log4cplus::spi;
using namespace log4cplus::helpers;

#define WATCH_DELAY_TIME    10 * 10000
#define MAX_LOG_LENGTH   1024 * 10


enum LogLevel{
	LOGLEVEL_TRACE = 0,
	LOGLEVEL_DEBUG,
	LOGLEVEL_INFO,
	LOGLEVEL_WARNING,
	LOGLEVEL_ERROR,
	LOGLEVEL_FATAL
};

class CSLogObject
{
private:
    /* data */
public:
    CSLogObject(const bool watchCfg) {}
    virtual ~CSLogObject() {}

    virtual void LogMessage(const int logLevel, const char* file, const int line, const char* function, const char* loginfo) {}
};

#endif 

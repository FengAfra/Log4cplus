#ifndef _CSLOG_H_
#define _CSLOG_H_

#include "CLog4cplus.h"

class CSLog
{
private:
    CSLogObject* m_log;
public:
    CSLog(const bool watchCfg_Flag);
    virtual ~CSLog();

	virtual void LogMessage(const char *format, const int logLevel, const char* file, const int line, const char* function, ...);

    //void SetLog4cplus();
};

#endif
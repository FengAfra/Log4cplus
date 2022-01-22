#ifndef _CLOG4CPLUS_H_
#define _CLOG4CPLUS_H_

#include "CSLogObject.h"


class CLog4cplus : public CSLogObject
{
private:
    Logger m_logger;
public:
    CLog4cplus(const bool watchCfg_Flag);
    virtual ~CLog4cplus();
	
    virtual void LogMessage(const int logLevel, const char* file, const int line, const char* function, const char* loginfo);

private:
    void SetWatchCfgThread();
};

#endif
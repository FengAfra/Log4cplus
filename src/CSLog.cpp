#include "CSLog.h"


CSLog::CSLog(const bool watchCfg_Flag)
{
    m_log = new CLog4cplus( watchCfg_Flag );
}

CSLog::~CSLog()
{
    delete m_log;
}


void CSLog::LogMessage(const char *format, const int logLevel, const char* file, const int line, const char* function, ...){
	va_list args;
	va_start(args, format);
	char szBuffer[MAX_LOG_LENGTH];
	vsnprintf(szBuffer, sizeof(szBuffer), format, args);
	va_end(args);
	
	m_log->LogMessage(logLevel, file, line, function, szBuffer);
}


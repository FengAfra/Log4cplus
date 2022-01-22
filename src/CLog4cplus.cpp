#include "CLog4cplus.h"


CLog4cplus::CLog4cplus(const bool watchCfg_Flag) : CSLogObject(watchCfg_Flag)
{
	m_logger = Logger::getRoot();
    //PropertyConfigurator::configureAndWatch("log4cplus.properties", delay);
	if( watchCfg_Flag ) {
		ConfigureAndWatchThread configureThread("log4cplus.properties", WATCH_DELAY_TIME);
	}
	else {
		PropertyConfigurator::doConfigure("log4cplus.properties");
	} 
}

CLog4cplus::~CLog4cplus()
{
}


void CLog4cplus::LogMessage(const int logLevel, const char* file, const int line, const char* function, const char* loginfo) {

	if(loginfo) {

		switch(logLevel) {
		case LOGLEVEL_TRACE:
			m_logger.log(L4CP_TRACE_LOG_LEVEL, loginfo, file, line, function);
			break;
		case LOGLEVEL_DEBUG:
			m_logger.log(L4CP_DEBUG_LOG_LEVEL, loginfo, file, line, function);
			break;
		case LOGLEVEL_INFO:
			m_logger.log(L4CP_INFO_LOG_LEVEL, loginfo, file, line, function);
			break;
		case LOGLEVEL_WARNING:
			m_logger.log(L4CP_WARN_LOG_LEVEL, loginfo, file, line, function);
			break;
		case LOGLEVEL_ERROR:
			m_logger.log(L4CP_ERROR_LOG_LEVEL, loginfo, file, line, function);
			break;
		case LOGLEVEL_FATAL:
			m_logger.log(L4CP_FATAL_LOG_LEVEL, loginfo, file, line, function);
			break;
		default:
			return;
		}

	}

}

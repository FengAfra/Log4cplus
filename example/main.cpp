#include "CSLog.h"

#define LOG_MODULE_DEMO "DEMO"

CSLog g_demolog = CSLog(true);

#define __FILENAME__  (strrchr(__FILE__, '/')) ? (strrchr(__FILE__, '/' + 1)):( __FILE__ )

#define sLogMessage(fmt, logLevel, args...) g_demolog.LogMessage(fmt, logLevel, __FILENAME__, __LINE__, __FUNCTION__, ##args)
/*
#define log(fmt, args...)  g_imlog.Info("<%s>|<%d>|<%s>," fmt, __FILENAME__, __LINE__, __FUNCTION__, ##args)
#define log_debug(fmt, args...)  g_imlog.Debug("<%s>|<%d>|<%s>," fmt, __FILENAME__, __LINE__, __FUNCTION__, ##args)
#define log_warn(fmt, args...)  g_imlog.Warn("<%s>|<%d>|<%s>," fmt, __FILENAME__, __LINE__, __FUNCTION__, ##args)
#define log_error(fmt, args...)  g_imlog.Error("<%s>|<%d>|<%s>," fmt, __FILENAME__, __LINE__, __FUNCTION__, ##args)
#define log_fatal(fmt, args...)  g_imlog.Fatal("<%s>|<%d>|<%s>," fmt, __FILENAME__, __LINE__, __FUNCTION__, ##args)
*/

int main(int argc, char* argv[]) {

    sLogMessage("This is the  FIRST log message...", LOGLEVEL_DEBUG);

	char Msg[30];
	memset(Msg, 0, sizeof(Msg));
	strcpy(Msg,"Err Message is NULL");
	
    sLogMessage("This is the  SECOND log message [%s]-[%d]...", LOGLEVEL_ERROR, Msg, 10);

    return 0;
    
}
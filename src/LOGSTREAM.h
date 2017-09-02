/*
 * LOGSTREAM.h
 */

#ifndef SRC_LOGSTREAM_H_
#define SRC_LOGSTREAM_H_

#ifdef ANDROID
#   include <QDebug>
#   define LOGSTREAM qDebug()
#else
#   include "ostream"
#   define LOGSTREAM std::cout
#endif

#endif /* SRC_LOGSTREAM_H_ */

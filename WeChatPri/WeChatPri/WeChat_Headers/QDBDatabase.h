//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDateFormatter, NSMutableSet, NSString;

@interface QDBDatabase : NSObject
{
    void *_db;
    NSString *_databasePath;
    _Bool _isExecutingStatement;
    _Bool _logsErrors;
    NSMutableSet *_openResultSets;
    NSDateFormatter *_dateFormat;
}

@property(copy, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property(retain, nonatomic) NSDateFormatter *dateFormat; // @synthesize dateFormat=_dateFormat;
- (void).cxx_destruct;
- (void)extractSQL:(id)arg1 argumentsList:(char *)arg2 intoString:(id)arg3 arguments:(id)arg4;
- (void)bindObject:(id)arg1 toColumn:(int)arg2 inStatement:(struct sqlite3_stmt *)arg3;
- (_Bool)executeUpdate:(id)arg1 error:(id *)arg2 valist:(char *)arg3;
- (_Bool)executeUpdate:(id)arg1;
- (id)executeQuery:(id)arg1 valist:(char *)arg2;
- (id)executeQuery:(id)arg1;
- (void)closeOpenResultSets;
- (void)resultSetDidClose:(id)arg1;
- (_Bool)close;
- (_Bool)open;
- (id)lastErrorMessage;
- (int)lastErrorCode;
- (id)errorWithMessage:(id)arg1;
- (void)warnInUse;
- (id)stringFromDate:(id)arg1;
- (id)dateFromString:(id)arg1;
- (_Bool)hasDateFormatter;
- (_Bool)databaseExists;
- (void *)sqliteHandle;
- (const char *)sqlitePath;
- (void)dealloc;
- (id)initWithPath:(id)arg1;

@end


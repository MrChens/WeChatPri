//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSMutableDictionary, NSString;

@interface MMKVLogDebugMgr : MMService <MMService>
{
    NSMutableDictionary *_tempKVLogDicForDebug;
    NSString *_lastSelectLogId;
    NSString *_lastSelectIdKey;
}

- (void).cxx_destruct;
- (id)convertLogid2IdKey:(id)arg1;
- (id)getKVLogDic:(unsigned long long)arg1;
- (void)clear;
- (void)detectionKvLogReportForDebug:(id)arg1;
- (void)addUnreportLog:(id)arg1 logId:(unsigned long long)arg2;
- (id)getLastSelectedLogId:(unsigned long long)arg1;
- (void)setLastSelectLogId:(id)arg1 scene:(unsigned long long)arg2;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface WAMsgNodeImageDownloadLogic : NSObject
{
    NSMutableDictionary *_dictStatId2FlowStat;
    unsigned int _flowStatBeginTime;
    NSMutableDictionary *_dictUrl2TaskList;
}

@property(retain) NSMutableDictionary *dictUrl2TaskList; // @synthesize dictUrl2TaskList=_dictUrl2TaskList;
- (void).cxx_destruct;
- (_Bool)isOnWifi;
- (void)checkFlowStatShouldRestart;
- (void)addFlow:(unsigned int)arg1 toStatId:(id)arg2;
- (_Bool)hasExceedLimit:(id)arg1;
- (void)clearTaskListWithUrl:(id)arg1;
- (void)addTask:(id)arg1;
- (_Bool)isDownloadingUrl:(id)arg1;
- (void)copyFileFrom:(id)arg1 url:(id)arg2;
- (void)doReportWithBeginTime:(struct timeval)arg1 fileLength:(unsigned long long)arg2;
- (void)addImageUrl:(id)arg1 appId:(id)arg2 statId:(id)arg3 scene:(unsigned int)arg4;

@end


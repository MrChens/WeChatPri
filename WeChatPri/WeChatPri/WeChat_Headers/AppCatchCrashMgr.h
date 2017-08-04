//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSString;

@interface AppCatchCrashMgr : MMService <MMService>
{
    _Bool _hasCrashAppId;
    unsigned int _callMonitorCount;
}

- (void)loadCallMonitorCount;
- (void)saveCallMonitorCount;
- (void)setForceCallCanOpenUrl;
- (_Bool)canCallCanOpenUrlMethod;
- (void)endMonitor;
- (void)beginMonitor;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


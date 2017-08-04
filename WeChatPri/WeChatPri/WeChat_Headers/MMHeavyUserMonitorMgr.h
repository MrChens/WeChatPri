//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMCustomInfoReportMgrDelegate-Protocol.h"
#import "MMService-Protocol.h"

@class MMCustomInfoReporter, MemoryMappedKV, NSRecursiveLock, NSString;

@interface MMHeavyUserMonitorMgr : MMService <MMService, MMCustomInfoReportMgrDelegate>
{
    unsigned long long m_uiHeavyUserType;
    MemoryMappedKV *m_memoryMappedKV;
    unsigned long long m_contactTypeLimit;
    unsigned long long m_sessionTypeLimit;
    unsigned long long m_massFileTypeLimit;
    _Bool m_isFirstReport;
    MMCustomInfoReporter *m_customInfoReporter;
    NSRecursiveLock *m_lock;
}

+ (id)getHeavyUserInfoPath;
- (void).cxx_destruct;
- (void)onCustomInfoUploadSuccess:(_Bool)arg1;
- (void)checkIsNeedRetryStackReport;
- (_Bool)isFirstReport:(unsigned long long)arg1;
- (void)reportHeavyUserInfo;
- (void)reportHeavyUserSubtype:(unsigned long long)arg1;
- (_Bool)reportHeavyUserType:(unsigned long long)arg1;
- (void)reportIDKey;
- (void)saveLatestReportType:(unsigned long long)arg1;
- (void)saveLatestReportDate:(unsigned long long)arg1 andType:(unsigned long long)arg2;
- (id)currentUserMemmoryMappedKey;
- (void)synchronizeForIDKey:(unsigned long long)arg1;
- (void)synchronizeToFile;
- (_Bool)isFileSpaceType;
- (_Bool)isSessionType;
- (_Bool)isContactsType;
- (unsigned long long)heavyUserType;
- (_Bool)isHeavyUser;
- (_Bool)checkIsFileSpaceTypeHeavyUser:(unsigned long long)arg1;
- (_Bool)checkIsSessionTypeHeavyUser:(unsigned long long)arg1;
- (_Bool)checkIsContactTypeHeavyUser:(unsigned long long)arg1;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


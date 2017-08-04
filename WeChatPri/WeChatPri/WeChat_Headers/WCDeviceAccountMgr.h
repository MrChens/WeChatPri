//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMService-Protocol.h"

@class NSString, WCDeviceAccountWCDB;

@interface WCDeviceAccountMgr : MMService <MMService>
{
    WCDeviceAccountWCDB *m_devAccountDB;
}

- (void).cxx_destruct;
- (_Bool)setAirKissData:(id)arg1 ForKey:(id)arg2;
- (id)getAirKissDataForKey:(id)arg1;
- (void)delDeviceInfoForDeviceType:(id)arg1 AndDeviceId:(id)arg2;
- (void)delDeviceInfoForUser:(id)arg1 AndDeviceId:(id)arg2;
- (void)delDeviceAccountForUser:(id)arg1;
- (_Bool)setDeviceInfo:(id)arg1;
- (id)getM7Device;
- (id)getDeviceInfoForDID:(long long)arg1;
- (id)getDeviceInfoForMd5Str:(id)arg1;
- (id)getDeviceInfoForDeviceType:(id)arg1 AndDeviceId:(id)arg2;
- (id)getDeviceInfoForUser:(id)arg1 AndDeviceId:(id)arg2;
- (id)getAllDeviceInfosForUser:(id)arg1;
- (unsigned int)getBoundDeviceCount:(id)arg1;
- (_Bool)hasBoundDevice:(id)arg1;
- (id)getAllDeviceInfos;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "MMPackageDownloadMgrExt-Protocol.h"
#import "MMService-Protocol.h"
#import "WCAddressNetworkDelegate-Protocol.h"

@class NSMutableArray, NSString, WCAddressNetworkHelper;

@interface WCAddressLogicMgr : MMService <MMService, WCAddressNetworkDelegate, MMPackageDownloadMgrExt>
{
    NSMutableArray *m_arrAddress;
    NSMutableArray *m_arrAddressStageData;
    unsigned int m_retainCount;
    unsigned int currentVersion;
    WCAddressNetworkHelper *m_networkHelper;
    unsigned int m_timeStamp;
    int m_uiWCAddressGetAddressStategy;
}

- (void).cxx_destruct;
- (void)onPackageDownloadProcessUpdated:(id)arg1 downloadSize:(int)arg2 totalSize:(int)arg3;
- (void)onPackageDownloadFinish:(id)arg1 package:(id)arg2;
- (void)onPackageListUpdated:(id)arg1;
- (void)OnImportWCAddress:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)OnSelectWCAddress:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)OnModifyWCAddress:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)OnQueryWCAddress:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)HandleGetAddressStategy:(id)arg1 UserName:(id)arg2 NickName:(id)arg3 Error:(id)arg4;
- (void)OnRemoveWCAddress:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)OnAddWCAddress:(id)arg1 Request:(id)arg2 Error:(id)arg3;
- (void)GetAllAddressStageData;
- (void)GetServerRequestToAddressStageData;
- (void)SetRecentlyUsedAddress:(id)arg1;
- (id)GetRecentlyUsedAddress;
- (void)GetAllAddress:(id)arg1;
- (void)ModifyAddress:(id)arg1;
- (void)DelAddress:(id)arg1;
- (void)AddAddress:(id)arg1;
- (void)GetLatestAddress:(id)arg1;
- (void)StopWCAddressService;
- (void)StartWCAddressService;
- (void)onServiceClearData;
- (_Bool)onServiceMemoryWarning;
- (void)onServiceTerminate;
- (void)onServiceEnterBackground;
- (void)onServiceReloadData;
- (void)onServiceInit;
- (void)importYiXunAdress;
- (void)setHadImportYiXunAddress;
- (_Bool)isImportYiXunAddress;
- (void)removeArchiveAddress;
- (id)safeGetAddress;
- (_Bool)isCachedAddress;
- (_Bool)safeArchiveAddress;
- (_Bool)GetAddressDataFromPath:(id)arg1 Error:(id *)arg2;
- (id)GetRcptInfoNode:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "IClearDataMgrExt-Protocol.h"

@class NSMutableDictionary, NSString;

@interface YYWKWebViewProcessPoolMgr : MMObject <IClearDataMgrExt>
{
    NSMutableDictionary *_dicUsrName2Pool;
}

+ (id)shareInstance;
- (void).cxx_destruct;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 subQueue:(id)arg2;
- (id)processPool;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "IClearDataMgrExt-Protocol.h"
#import "MMHttpConnectionDelegate-Protocol.h"
#import "MMService-Protocol.h"

@class NSString;

@interface MMHttpCacheMgr : MMService <IClearDataMgrExt, MMService, MMHttpConnectionDelegate>
{
}

+ (void)ClearCacheDirByUsrName:(id)arg1;
+ (void)ClearCacheDir:(unsigned int)arg1;
+ (id)GetFilePath:(id)arg1 Type:(unsigned int)arg2;
+ (id)GetCacheDir:(unsigned int)arg1;
+ (unsigned int)GetCacheType:(id)arg1;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 CacheMask:(unsigned int)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1 subQueue:(id)arg2;
- (void)onDiskStorageWarningCleanedSize:(unsigned long long *)arg1;
- (void)HttpConnectionFail:(id)arg1;
- (void)HttpConnectionFinished:(id)arg1 cachekey:(id)arg2 response:(id)arg3 ErrNo:(int)arg4;
- (void)LoadCache:(id *)arg1 CacheKey:(id)arg2 Type:(unsigned int)arg3;
- (void)getWithURL:(id)arg1 cacheKey:(id)arg2 Type:(unsigned int)arg3 NotifyKey:(id)arg4 RefererHeader:(id)arg5;
- (void)getWithURL:(id)arg1 cacheKey:(id)arg2 Type:(unsigned int)arg3 NotifyKey:(id)arg4;
- (void)dealloc;
- (void)onServiceInit;
- (void)addAutoCleanTask:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


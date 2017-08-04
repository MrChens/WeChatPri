//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMWebCacheReport : NSObject
{
}

+ (void)reportHitCacheAsyncPage;
+ (void)reportHitCacheSyncPage;
+ (void)reportBrandPreDownload;
+ (void)reportFailToAsyncCache;
+ (void)reportFailToSyncCache;
+ (void)reportFailToLoadPublicLibPage;
+ (void)reportBrandPreDownloadUrl:(id)arg1;
+ (void)reportFailToSaveRes;
+ (void)reportFailToDownloadRes;
+ (void)reportCacheTooLargeDataOnceTime;
+ (void)reportLoadCacheCrc32Fail;
+ (void)reportFoundInDBButNotInDisk;
+ (void)reportHitCachePageForUrl:(id)arg1;
+ (void)reportHitDiskUsageLimitForAppId:(id)arg1 size:(long long)arg2;
+ (void)reportFailToLoadCachePage;
+ (void)reportLoadPageTime:(double)arg1 url:(id)arg2;
+ (void)reportCacheJsApiRequestForAsync;
+ (void)reportCacheJsApiRequestForSync;
+ (void)reportPublicResRequestUrl:(id)arg1 resUrl:(id)arg2 isHit:(_Bool)arg3;

@end


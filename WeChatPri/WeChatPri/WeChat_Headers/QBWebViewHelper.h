//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface QBWebViewHelper : NSObject
{
}

+ (void)clearCachesCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)clearCookiesCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)URLCacheDidFetchCacheResponse:(id)arg1 forRequest:(id)arg2;
+ (void)setCustomUA:(id)arg1;
+ (_Bool)isQBWebViewRequest:(id)arg1;
+ (id)getVersion;
+ (void)checkInitialize;
+ (void)startProxyWithWorker:(Class)arg1;
+ (void)willEnterForeground:(id)arg1;
+ (void)doEnterBackground:(id)arg1;
+ (void)checkApnAndGUID;
+ (void)updatePreferences;
+ (void)updateWhiteLists;
+ (id)serviceDic;
+ (void)asyncInitModules;
+ (void)doInSubThread:(CDUnknownBlockType)arg1;
+ (void)excuteWupRequestIfNecessary;
+ (void)checkWupRequestWhenGUIDIsReady;
+ (void)checkUpdate;
+ (_Bool)isQQNetChangedON;
+ (void)initialize;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WWKApi : NSObject
{
}

+ (_Bool)sendObj:(id)arg1;
+ (_Bool)sendResp:(id)arg1;
+ (_Bool)sendReq:(id)arg1;
+ (_Bool)openChatList;
+ (_Bool)openCreateChat;
+ (_Bool)openApp;
+ (id)getApiVersion;
+ (id)getAppInstallUrl;
+ (_Bool)isAppInstalled;
+ (_Bool)handleOpenURL:(id)arg1 delegate:(id)arg2;
+ (_Bool)registerApp:(id)arg1 withDescription:(id)arg2;
+ (_Bool)registerApp:(id)arg1;

@end


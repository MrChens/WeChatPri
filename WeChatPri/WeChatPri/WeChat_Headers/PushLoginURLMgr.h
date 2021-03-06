//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "GetA8KeyLogicDelegate-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMService-Protocol.h"

@class GetA8KeyLogic, NSString;

@interface PushLoginURLMgr : MMService <IMsgExt, GetA8KeyLogicDelegate, MMKernelExt, MMService>
{
    GetA8KeyLogic *_getA8KeyLogic;
}

+ (void)clearOneClickLoginInfo;
+ (_Bool)shouldShowOneClickLogin;
- (void).cxx_destruct;
- (void)onManulLogOut;
- (void)onGetA8KeyOneClickLoginWithURL:(id)arg1 extraInfo:(id)arg2;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)loginFormOtherApp:(id)arg1 bundleID:(id)arg2;
- (id)getGetA8KeyLogic;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


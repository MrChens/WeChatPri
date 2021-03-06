//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IPreEnterWechatLogicExt-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class NSString, NSURL;

@interface WeChatPayHandler : NSObject <IPreEnterWechatLogicExt, UIAlertViewDelegate>
{
    NSString *m_nsAppID;
    NSURL *m_nsAppUrl;
    NSString *m_bundleId;
    NSString *m_nsWapUrl;
}

- (void).cxx_destruct;
- (void)createWapWechatPay;
- (void)createWeChatePay;
- (id)parseURLParams:(id)arg1;
- (void)onPreEnterWechatDone;
- (void)cancelWeChatPay;
- (void)startWapWechatPayWithPayInfo:(id)arg1 BundleID:(id)arg2;
- (void)startWeChatPay:(id)arg1 BundleID:(id)arg2 payInfo:(id)arg3;
- (void)reportStartWeChatPayFromAppAfterLogin;
- (void)reportStartWeChatPayFromAppHasLogin;
- (void)reportStartWeChatPayFromAppNotLogin;
- (void)reportStartWeChatPayFromApp;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


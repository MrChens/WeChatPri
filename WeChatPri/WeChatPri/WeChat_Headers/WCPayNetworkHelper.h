//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol WCPayNetworkHelperDelegate;

@interface WCPayNetworkHelper : MMObject <PBMessageObserverDelegate>
{
    id <WCPayNetworkHelperDelegate> m_delegate;
    NSMutableDictionary *m_dicCGIStartedTime;
    NSString *m_nsCurrentControlLogicName;
}

+ (void)idkeyCgiReport:(unsigned int)arg1 keyName:(id)arg2 value:(unsigned int)arg3;
+ (void)idkeyCgiReport:(unsigned int)arg1 keyName:(id)arg2;
+ (void)idkeyCmdReport:(unsigned int)arg1 scene:(unsigned int)arg2 keyName:(id)arg3 value:(unsigned int)arg4;
+ (void)idkeyCmdReport:(unsigned int)arg1 scene:(unsigned int)arg2 keyName:(id)arg3;
+ (void)initialize;
+ (id)TsQrcodeUseBindQueryCMDIdKey;
+ (id)SnsF2FQrcodeUseBindQueryCMDIdKey;
+ (id)SnsTfQrcodeUseBindQueryCMDIdKey;
+ (id)SnsAAQrcodeUseBindQueryCMDIdKey;
+ (id)SnsQrcodeUseBindQueryCMDIdKey;
+ (id)QrcodeUseBindQueryCMDIdKey;
+ (id)TsAuthenCMDIdKey;
+ (id)SnsF2FAuthenCMDIdKey;
+ (id)SnsTfAuthenCMDIdKey;
+ (id)SnsAuthenCMDIdKey;
+ (id)SnsAAAuthenCMDIdKey;
+ (id)AuthenCMDIdKey;
+ (id)CMDIdKeyDicWithSceneIdDic:(id)arg1 InternalDic:(id)arg2;
+ (id)QrcodeUseBindQueryKey;
+ (id)AuthenKey;
@property(retain, nonatomic) NSString *m_nsCurrentControlLogicName; // @synthesize m_nsCurrentControlLogicName;
@property(nonatomic) __weak id <WCPayNetworkHelperDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)transformTenpayCGI:(_Bool)arg1 pbCGIWrap:(id)arg2 payScene:(unsigned int)arg3;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnGetBanPayMobileInfo:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnSetMainBankCard:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnOfflinePayConfirm:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnGetOfflinePayInfo:(id)arg1 Event:(unsigned int)arg2;
- (void)OnRemoveVirtualCardResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)OnEvaluateOrderResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)OnCheckJsapiResponse:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnInBizIapDetail:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnInMallPay:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnInGetA8KeyLogic:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnInPaySubscribeServiceApp:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnInCancelQRPay:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnInGenPrepay:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnInGetAppAuthUrl:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnInDelOrderHistory:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnInGetOrderHistory:(id)arg1 Event:(unsigned int)arg2;
- (void)OnMessageReturnInTenpayCommon:(id)arg1 Event:(unsigned int)arg2;
- (void)GetBanPayMobileInfo:(id)arg1;
- (void)WCPayConfirmOfflinePay:(id)arg1;
- (void)WCPayQueryOfflinePayInfo:(id)arg1;
- (void)WCPayRemoveVirtualCard:(id)arg1;
- (void)GetA8KeyLogic:(id)arg1 withUrlStr:(id)arg2;
- (void)WCPaySetMainBindCard:(id)arg1;
- (void)WCPaySetMainBindCardOnBackground:(id)arg1;
- (void)WCPaySubscribeServiceApp:(id)arg1;
- (void)WCPayQuitQRScanPay:(id)arg1;
- (void)WCPayCheckJSApiAuthority:(id)arg1;
- (void)WCPaySubmitMallPrepay:(id)arg1;
- (void)WCPayGenPrepay:(id)arg1;
- (void)WCPayGetAppAuthUrl:(id)arg1;
- (void)WCPayIAPOrderHistoryDetailRequest:(id)arg1;
- (void)WCPayDelOrderHistoryRequest:(id)arg1;
- (void)WCPayEvaluateOrderRequest:(id)arg1;
- (void)WCPayGetOrderHistoryRequest:(id)arg1;
- (void)WCToTenpayCommonRequest:(id)arg1;
- (void)WCToSnsTenpayCommonRequest:(id)arg1 RetryCount:(unsigned int)arg2;
- (void)WCToTenpayCommonRequest:(id)arg1 RetryCount:(unsigned int)arg2;
- (void)performHardCodeCallback:(id)arg1;
- (void)removeAllObserver;
- (void)dealloc;
- (id)init;

@end


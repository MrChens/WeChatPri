//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "MMUIViewControllerDelegate-Protocol.h"
#import "StoreEmotionRewardAskForRewardCgiDelegate-Protocol.h"
#import "WCBaseControlMgrExt-Protocol.h"

@class EmoticonStoreItem, EmotionRewardExtInfo, EmotionRewardResponseInfo, MMUIViewController, NSString, StoreEmotionRewardAskForRewardCgi, WCPayPayMoneyLogic;

@interface StoreEmotionRewardLogicObject : MMObject <StoreEmotionRewardAskForRewardCgiDelegate, WCBaseControlMgrExt, MMUIViewControllerDelegate>
{
    EmoticonStoreItem *m_storeItem;
    EmotionRewardResponseInfo *m_rewardInfo;
    EmotionRewardExtInfo *m_extInfo;
    MMUIViewController *m_rootViewController;
    MMUIViewController *m_askForRewardViewController;
    StoreEmotionRewardAskForRewardCgi *m_askForRewardCgi;
    WCPayPayMoneyLogic *m_payLogic;
    _Bool m_isAskingForReward;
    unsigned long long m_rewardResult;
}

- (void).cxx_destruct;
- (id)getViewController;
- (void)onWCBaseLogicDidStop:(unsigned int)arg1;
- (void)onAskForRewardCgiFailWithPid:(id)arg1;
- (void)onAskForRewardCgiOkWithPid:(id)arg1 AndReqKey:(id)arg2;
- (void)presentThanksViewController;
- (void)finishReward;
- (void)cancelReward;
- (_Bool)isOnWeChatPay;
- (_Bool)askForRewardWithPrice:(id)arg1 FromViewController:(id)arg2;
- (id)initWithStoreItem:(id)arg1 RewardInfo:(id)arg2 FromRootViewController:(id)arg3 extInfo:(id)arg4;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCRedEnvelopesControlLogic.h"

#import "WCBaseControlLogicDeleagte-Protocol.h"
#import "WCBaseControlMgrExt-Protocol.h"
#import "WCRedEnvelopesEnterpriseDetailViewControllerDelegate-Protocol.h"
#import "WCRedEnvelopesMultiSelectContactsViewControllerDelegate-Protocol.h"
#import "WCRedEnvelopesReceiveHomeViewDelegate-Protocol.h"
#import "WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate-Protocol.h"
#import "WCRedEnvelopesSessionSelectViewControllerDelegate-Protocol.h"

@class NSString, WCRedEnvelopesReceiveHomeView;

@interface WCRedEnvelopesReceiveControlLogic : WCRedEnvelopesControlLogic <WCBaseControlLogicDeleagte, WCBaseControlMgrExt, WCRedEnvelopesReceiveHomeViewDelegate, WCRedEnvelopesRedEnvelopesDetailViewControllerDelegate, WCRedEnvelopesEnterpriseDetailViewControllerDelegate, WCRedEnvelopesSessionSelectViewControllerDelegate, WCRedEnvelopesMultiSelectContactsViewControllerDelegate>
{
    int m_scene;
    WCRedEnvelopesReceiveHomeView *introView;
}

- (void).cxx_destruct;
- (void)onRealnameActionClick:(id)arg1;
- (void)OnSendShareEnterpriseRedEnvelopesResponse:(id)arg1 Error:(id)arg2;
- (void)OnSendShareRedEnvelopesoRequest:(id)arg1 Error:(id)arg2;
- (void)dismissCurrentViewSendShareRedEnvelopes;
- (void)OnThanksForRedEnvelopesRequest:(id)arg1 Error:(id)arg2;
- (void)OnClearserSendOrReceiveRedEnveloperListRequest:(id)arg1 Error:(id)arg2;
- (void)OnQueryUserSendOrReceiveRedEnveloperListRequest:(id)arg1 Error:(id)arg2;
- (void)OnQueryRedEnvelopesDetailRequest:(id)arg1 Error:(id)arg2;
- (void)OnOpenRedEnvelopesRequest:(id)arg1 Error:(id)arg2;
- (void)OnReceiverQueryRedEnvelopesRequest:(id)arg1 Error:(id)arg2;
- (_Bool)isRedEnvelopesReallyTimeOut:(int)arg1 messageWrap:(id)arg2;
- (void)closeAnimationWindowAndShowDetailView:(id)arg1;
- (void)showDetailView;
- (void)onMultiSelectContactReturn:(id)arg1;
- (void)OnSelectMutilContactsButton;
- (void)OnSelectSessionReturn:(id)arg1;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)OnConfirmSendMessageSelectSessionViewController;
- (void)OnGoToBalanceDetail;
- (void)OnCommitWCRedEnvelopes:(id)arg1;
- (void)OnLoadMoreRedEnvelopesList;
- (_Bool)HasMoreDetailList;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerContinueSendRedEnvelopes;
- (void)WCRedEnvelopesRedEnvelopesDetailViewControllerBack;
- (void)WCRedEnvelopesEnterpriseDetailViewControllerContinueSendRedEnvelopes;
- (void)WCRedEnvelopesEnterpriseDetailViewControllerBack;
- (void)WCRedEnvelopesReceiveHomeViewOpenList;
- (void)WCRedEnvelopesReceiveHomeViewOpenRedEnvelopes;
- (void)WCRedEnvelopesReceiveHomeViewBack;
- (void)queryRedEnvelopesDetailRequest:(id)arg1;
- (_Bool)isRedEnvelopesHasBeenReceivedAndNotOutOfDate:(id)arg1;
- (void)startLogic;
- (void)stopLoading;
- (id)initWithData:(id)arg1 Scene:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWebViewController.h"

#import "IExposeMgrExt-Protocol.h"
#import "IExtraDeviceLoginMgrExt-Protocol.h"
#import "IOnlineDeviceMgrExt-Protocol.h"
#import "IShortCutExt-Protocol.h"
#import "IVOIPUILogicMgrExt-Protocol.h"
#import "IWCPayJSApiMgrExt-Protocol.h"
#import "MultiTalkMgrExt-Protocol.h"

@class MMUIButton, NSString;
@protocol H5GameViewControllerDelegate;

@interface H5GameViewController : MMWebViewController <IVOIPUILogicMgrExt, MultiTalkMgrExt, IExposeMgrExt, IExtraDeviceLoginMgrExt, IShortCutExt, IOnlineDeviceMgrExt, IWCPayJSApiMgrExt>
{
    MMUIButton *menuButton;
    _Bool m_bFullscreen;
    long long m_orientation;
    _Bool m_bPaying;
    _Bool m_bResetPayingPwd;
    struct CGSize m_ButtonSize;
    double m_ButtonInset;
    id <H5GameViewControllerDelegate> _delegate;
    unsigned long long _lockedOrientation;
}

@property(nonatomic) unsigned long long lockedOrientation; // @synthesize lockedOrientation=_lockedOrientation;
@property(retain, nonatomic) id <H5GameViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)unlockOrientation;
- (void)lockOrientation:(long long)arg1;
- (void)viewWillPop:(_Bool)arg1;
- (void)delaySetFullScreen:(_Bool)arg1;
- (_Bool)isFullScreen;
- (void)applicationWillTerminate:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)enterForeground;
- (void)enterBackground;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (void)onOpenApiWillBeginShare:(id)arg1;
- (void)onWCPayJSApiEnd:(_Bool)arg1;
- (void)onWCPayJSApiBegin:(_Bool)arg1;
- (void)onPerformShortCut:(id)arg1;
- (void)onDeviceInfoClose;
- (void)onDeviceInfoOpen;
- (void)onExtraDeviceLoginClose;
- (void)onExtraDeviceLoginOpen;
- (void)onExposeComplete;
- (void)onExposeInit;
- (void)onMultiTalkMaximized;
- (void)onMultiTalkMinimized;
- (void)onMultiTalkMgrBeginToCleanStatus;
- (void)onBeginMultiTalk;
- (void)onVoipMaximized;
- (void)onVoipMinimized;
- (void)onVideoVoipViewDisappear;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)restoreViewStatus;
- (void)onOperate:(id)arg1;
- (void)gameActionSheet:(id)arg1 didSelecteItem:(id)arg2;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 fullScreen:(_Bool)arg2 ExtInfo:(id)arg3 DefinitelyUseWkWebview:(_Bool)arg4 MenuDraggable:(_Bool)arg5;
- (id)initWithURL:(id)arg1 fullScreen:(_Bool)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)viewDidLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


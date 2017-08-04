//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowViewController.h"

#import "PBMessageObserverDelegate-Protocol.h"
#import "WCImageFullScreeViewMgrExt-Protocol.h"

@class MMTimer, MMUILabel, NSString, UIButton, UIImageView, UILabel, UIView;
@protocol ExtraDeviceLoginViewControllerDelegate;

@interface ExtraDeviceLoginViewController : MMWindowViewController <PBMessageObserverDelegate, WCImageFullScreeViewMgrExt>
{
    UIView *m_backgroundView;
    _Bool _isFromReScanBtn;
    _Bool _syncChatLog;
    unsigned int _iconType;
    unsigned int _sessionListLimit;
    unsigned int _confirmTimeout;
    unsigned int _uiFromScene;
    unsigned int _loginClientVersion;
    id <ExtraDeviceLoginViewControllerDelegate> _delegate;
    UIImageView *_deviceImgView;
    MMUILabel *_tipsLabel;
    UIButton *_confirmBtn;
    UIButton *_cancelBtn;
    UIButton *_closeBtn;
    NSString *_tipsContent;
    NSString *_confirmBtnTitle;
    NSString *_cancelBtnTitle;
    NSString *_warningTips;
    long long _respType;
    NSString *_loginUrl;
    MMTimer *_timer;
    long long _startTime;
    NSString *_titleStr;
    NSString *_loggedInDeviceTips;
    UIButton *_syncCheckBox;
    UILabel *_syncCheckTipLabel;
}

@property(nonatomic) unsigned int loginClientVersion; // @synthesize loginClientVersion=_loginClientVersion;
@property(nonatomic) _Bool syncChatLog; // @synthesize syncChatLog=_syncChatLog;
@property(retain, nonatomic) UILabel *syncCheckTipLabel; // @synthesize syncCheckTipLabel=_syncCheckTipLabel;
@property(retain, nonatomic) UIButton *syncCheckBox; // @synthesize syncCheckBox=_syncCheckBox;
@property(retain, nonatomic) NSString *loggedInDeviceTips; // @synthesize loggedInDeviceTips=_loggedInDeviceTips;
@property(retain, nonatomic) NSString *titleStr; // @synthesize titleStr=_titleStr;
@property(nonatomic) _Bool isFromReScanBtn; // @synthesize isFromReScanBtn=_isFromReScanBtn;
@property(nonatomic) long long startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) MMTimer *timer; // @synthesize timer=_timer;
@property(nonatomic) unsigned int uiFromScene; // @synthesize uiFromScene=_uiFromScene;
@property(retain, nonatomic) NSString *loginUrl; // @synthesize loginUrl=_loginUrl;
@property(nonatomic) long long respType; // @synthesize respType=_respType;
@property(retain, nonatomic) NSString *warningTips; // @synthesize warningTips=_warningTips;
@property(nonatomic) unsigned int confirmTimeout; // @synthesize confirmTimeout=_confirmTimeout;
@property(nonatomic) unsigned int sessionListLimit; // @synthesize sessionListLimit=_sessionListLimit;
@property(retain, nonatomic) NSString *cancelBtnTitle; // @synthesize cancelBtnTitle=_cancelBtnTitle;
@property(retain, nonatomic) NSString *confirmBtnTitle; // @synthesize confirmBtnTitle=_confirmBtnTitle;
@property(nonatomic) unsigned int iconType; // @synthesize iconType=_iconType;
@property(retain, nonatomic) NSString *tipsContent; // @synthesize tipsContent=_tipsContent;
@property(retain, nonatomic) UIButton *closeBtn; // @synthesize closeBtn=_closeBtn;
@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) MMUILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) UIImageView *deviceImgView; // @synthesize deviceImgView=_deviceImgView;
@property(nonatomic) id <ExtraDeviceLoginViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)onViewAnimationDidHiden;
- (void)onViewAnimationWillHide;
- (void)onClickSyncCheckButton;
- (void)hideSyncComfirmCheckBoxView;
- (void)addSyncComfirmCheckBoxView;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onGetLoginCancelResponse:(id)arg1 eventID:(unsigned int)arg2;
- (void)onGetLoginConfirmRespnse:(id)arg1 eventID:(unsigned int)arg2;
- (void)sendLoginCancelRequest;
- (void)sendLoginConfirmRequest;
- (void)onConfirmTimeout;
- (void)onTimerCheck;
- (void)onCancelBtnPress:(id)arg1;
- (void)onConfirmBtnPress:(id)arg1;
- (void)updateUIWhenSomethingWrong;
- (id)getConfirmBtnTitle;
- (id)getTipsContent;
- (id)getDeviceImg;
- (void)dismissMySelf;
- (void)onLeftBarButtonPress:(id)arg1;
- (_Bool)isConfirmGetRequestError;
- (void)setupView;
- (void)startLoadingBlocked;
- (_Bool)useTransparentNavibar;
- (void)addBlurEffectForView;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithTipsContent:(id)arg1 andIconType:(unsigned int)arg2 andConfirmBtnTitle:(id)arg3 andCancelBtnTitle:(id)arg4 andSessionListLimit:(unsigned int)arg5 andConfirmTimeout:(unsigned int)arg6 andRespType:(long long)arg7 andLoginUrl:(id)arg8 andFromScene:(unsigned int)arg9 titleStr:(id)arg10 loggedInDeviceTips:(id)arg11 warningTips:(id)arg12 loginClientVersion:(unsigned int)arg13;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


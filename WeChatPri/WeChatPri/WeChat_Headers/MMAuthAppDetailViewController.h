//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IAppDataExt-Protocol.h"
#import "IGameCenterExt-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class AuthAppItem, MMLoadingView, MMTableView, MMWebImageView, NSMutableArray, NSString, UIButton, UILabel, UIView;

@interface MMAuthAppDetailViewController : MMUIViewController <IGameCenterExt, WCActionSheetDelegate, UITableViewDelegate, UITableViewDataSource, IAppDataExt>
{
    AuthAppItem *_authAppItem;
    _Bool _isResvMsg;
    _Bool _isShowMyFeedsToFriend;
    MMTableView *_detailTableView;
    UIView *_infoView;
    MMWebImageView *_iconImageView;
    UILabel *_appNameLabel;
    UILabel *_devInfoLabel;
    UIView *_authView;
    UILabel *_authInfoTipLabel;
    UILabel *_authInfoLabel;
    UIButton *_unAuthButton;
    MMLoadingView *_loadingView;
    NSMutableArray *_authInfoAry;
    int _sourceScene;
}

@property(retain, nonatomic) NSMutableArray *authInfoAry; // @synthesize authInfoAry=_authInfoAry;
- (void).cxx_destruct;
- (void)onGameSetBlockState:(_Bool)arg1 appID:(id)arg2 error:(long long)arg3;
- (void)onGameGetBlockState:(_Bool)arg1 appID:(id)arg2 error:(long long)arg3;
- (void)stopLoadingAndShowOK:(id)arg1;
- (void)stopLoadingAndShowError:(id)arg1;
- (void)stopLoading;
- (void)startLoadingCancelAuth;
- (void)startLoadingRecvMsg;
- (void)startLoading;
- (void)OnUnAuthAppFlag:(id)arg1 errType:(int)arg2;
- (void)OnSetAppSettingRecvMsgFlag:(id)arg1 errType:(int)arg2;
- (void)OnUpdateAppRecvMsgState:(id)arg1 appSettingFlag:(int)arg2 errType:(int)arg3;
- (void)OnUpdateAppAuthState:(id)arg1 errType:(int)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)dealloc;
- (id)initWithAppItem:(id)arg1 sourceScene:(int)arg2;
- (void)viewDidLoad;
- (void)initData;
- (void)initView;
- (void)initLoadingView;
- (void)initTableView;
- (void)initAuthInfoView;
- (void)initInfoView;
- (void)setShowMyFeedsToFriend:(id)arg1;
- (void)setRecvMsg:(id)arg1;
- (void)onSwitchValueChange:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showAuthActionSheet:(id)arg1;
- (void)parseXML:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


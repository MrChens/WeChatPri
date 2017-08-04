//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTabBarBaseViewController.h"

#import "CreateChatLogicDelegate-Protocol.h"
#import "IAcctStorageMgrExt-Protocol.h"
#import "IAutoSetRemarkExt-Protocol.h"
#import "IMMFacebookMgrExt-Protocol.h"
#import "IVOIPUILogicMgrExt-Protocol.h"
#import "IWCDeviceBrandMgrExt-Protocol.h"
#import "IWXTalkPresentExt-Protocol.h"
#import "MMKernelExt-Protocol.h"
#import "MMSearchBarDelegate-Protocol.h"
#import "MMVoiceSearchBarDelegate-Protocol.h"
#import "MMVoiceSearchDelegate-Protocol.h"
#import "MainFrameHeaderDelegate-Protocol.h"
#import "MainTableDelegate-Protocol.h"
#import "SelectContactsViewControllerDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCBarMessageWindowDelegate-Protocol.h"
#import "contactInfoDelegate-Protocol.h"
#import "mainFrameLogicControllerDelegate-Protocol.h"

@class CreateChatLogic, MFTitleView, MMLoadingView, MMMainTableView, MMSessionInfo, MainFrameHeaderLogic, MainFrameLogicController, NSString, UIDynamicAnimator, UIImageView, WCBarMessageWindow;
@protocol UIViewControllerPreviewing;

@interface NewMainFrameViewController : MMTabBarBaseViewController <SelectContactsViewControllerDelegate, IMMFacebookMgrExt, mainFrameLogicControllerDelegate, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, UISearchDisplayDelegate, WCActionSheetDelegate, contactInfoDelegate, CreateChatLogicDelegate, MMVoiceSearchDelegate, MMSearchBarDelegate, MMVoiceSearchBarDelegate, MMKernelExt, IWXTalkPresentExt, IVOIPUILogicMgrExt, IAutoSetRemarkExt, UIGestureRecognizerDelegate, IAcctStorageMgrExt, UIAlertViewDelegate, WCBarMessageWindowDelegate, MainTableDelegate, IWCDeviceBrandMgrExt, MainFrameHeaderDelegate>
{
    MainFrameLogicController *m_mainFrameLogicController;
    MMMainTableView *m_tableView;
    UIImageView *logoImageView;
    MFTitleView *m_titleView;
    MMLoadingView *m_loadingView;
    _Bool m_bSearching;
    struct CGPoint m_tableContentOffset;
    _Bool m_bFromReg;
    unsigned int m_uiTipStatus;
    CreateChatLogic *m_createChatLogic;
    _Bool m_tableViewReady;
    MainFrameHeaderLogic *m_headerLogic;
    NSString *m_nsTitle;
    int m_voiceSearchLevelNumber;
    _Bool m_bFirstInitView;
    _Bool m_bOnMemoryWarningToFinishedSearchBar;
    struct CGPoint m_tableViewOffset;
    _Bool m_bIsLastViewStatusBarHidden;
    _Bool m_hasAddBlurEffectView;
    _Bool m_needResetTableViewOffset;
    double m_preContentOffset;
    WCBarMessageWindow *m_barMessageWindow;
    _Bool m_forbidShowTip;
    MMSessionInfo *_peekedSession;
    _Bool m_firstLoadFinished;
    _Bool m_canSearchAfterInit;
    double m_messageCellHeight;
    long long m_lastRowNum;
    NSString *m_confirmingSessionName;
    unsigned int _startTime;
    id <UIViewControllerPreviewing> _previewingContext;
    UIDynamicAnimator *_animator;
}

@property(retain, nonatomic) UIDynamicAnimator *animator; // @synthesize animator=_animator;
@property(retain, nonatomic) NSString *m_nsTitle; // @synthesize m_nsTitle;
@property(retain, nonatomic) CreateChatLogic *m_createChatLogic; // @synthesize m_createChatLogic;
@property(nonatomic) _Bool m_bFromReg; // @synthesize m_bFromReg;
- (void).cxx_destruct;
- (id)tagForCurrentPage;
- (void)traitCollectionDidChange:(id)arg1;
- (void)previewingContext:(id)arg1 commitViewController:(id)arg2;
- (id)previewingContext:(id)arg1 viewControllerForLocation:(struct CGPoint)arg2;
- (void)checkDBAutoRecover;
- (void)initDeepLinkConfig;
- (id)getVCWithDeepLinkName:(id)arg1;
- (void)openMassSend;
- (void)onWCDeviceUnbindEnd:(id)arg1 Error:(id)arg2;
- (void)onBarTipClicked;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (id)getSubImage:(struct CGRect)arg1 inImage:(id)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onSettingChange;
- (void)onSetStrangerRemark:(id)arg1;
- (void)OnTrackRoomMemberChange:(id)arg1 withNewMemberList:(id)arg2;
- (void)OnRoomMemberChange:(id)arg1 withNewMemberList:(id)arg2;
- (void)onVideoVoipViewDisappear;
- (void)onVideoVoipViewDidAppear:(id)arg1;
- (void)updateItem:(id)arg1;
- (void)onAuthOK;
- (void)displayControllerSetActive:(_Bool)arg1 animated:(_Bool)arg2;
- (id)getSessionInfoByContact:(id)arg1;
- (void)SearchBarBecomeUnActive;
- (_Bool)shouldShowTabbar;
- (void)SearchBarBecomeActive;
- (void)removeBlurEffectView;
- (void)addBlurEffectView;
- (void)setSearchTableResultText:(id)arg1;
- (void)OnVoiceSearchButtonDown;
- (void)updateViewWhenSelectTab:(_Bool)arg1;
- (void)changeNetworkStatus:(unsigned int)arg1;
- (unsigned int)getTotalUnreadCount;
- (void)clearResource;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 animated:(_Bool)arg3;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 animated:(_Bool)arg3 FromOtherTab:(_Bool)arg4;
- (void)newMessageByContact:(id)arg1 msgWrapToAdd:(id)arg2 animated:(_Bool)arg3 FromOtherTab:(_Bool)arg4 reuse:(_Bool)arg5 extraInfo:(id)arg6;
- (void)resetTableViewOffset:(id)arg1;
- (void)tapStatusBarMessage;
- (void)animationShow;
- (void)newMessageFromContactInfo:(id)arg1;
- (void)popToMainFrameAnimated:(_Bool)arg1;
- (void)updateStatusBar;
- (void)stopLoading;
- (void)startLoading;
- (void)stopLoadingForSessionRebuild;
- (void)startLoadingForSessionRebuild;
- (void)initLoadingView;
- (void)deleteSessionCell:(unsigned int)arg1 withUser:(id)arg2;
- (void)selectCellForName:(id)arg1;
- (void)cancelSelectedCell;
- (void)updateAllItemTimeLabel;
- (void)updateSession:(id)arg1;
- (void)clearSessionCache;
- (void)reloadSessions;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)applySearchBeginAnimation:(id)arg1;
- (void)searchDisplayControllerWillBeginSearch:(id)arg1;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)MMVoiceSearchBarCancelButtonClicked:(id)arg1;
- (void)MMVoiceSearchBarSearchButtonClicked:(id)arg1;
- (void)MMVoiceSearchBar:(id)arg1 textDidChange:(id)arg2;
- (_Bool)MMVoiceSearchBarShouldBeginEditing:(id)arg1;
- (void)cancelSearch;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)showBrandUnsubscribeActionSheet:(unsigned long long)arg1;
- (void)handleBrandUnsubscribe:(id)arg1;
- (void)handleCommitEdit:(unsigned long long)arg1;
- (void)onConfirmDeleteSessionAtIndex:(unsigned long long)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)showEditActionSheet:(unsigned long long)arg1;
- (id)getDestructiveBtnTitle:(unsigned long long)arg1;
- (id)getActionSheetTitle:(unsigned long long)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didEndEditingRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willBeginEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)handleSelectIndexPath:(id)arg1 tableView:(id)arg2;
- (void)openContactInfoView:(id)arg1;
- (_Bool)isNeedMutilLevelView:(id)arg1;
- (_Bool)isNeedShowProfileInVoiceSearch:(int)arg1;
- (_Bool)isOpenPluginContactInfoView:(id)arg1;
- (void)openPluginContactInfoView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCellBackGroundBySession:(id)arg1 cell:(id)arg2 showTopList:(_Bool)arg3;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)getSectionType:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)openMessageContentView:(id)arg1 startSendMessage:(_Bool)arg2 msgWrapToAdd:(id)arg3 animated:(_Bool)arg4 jumpToFirstUnreadNode:(_Bool)arg5 indexPath:(id)arg6 reuse:(_Bool)arg7 extraInfo:(id)arg8;
- (void)tryMoveToMainFrameTab;
- (void)openMessageContentView:(id)arg1 startSendMessage:(_Bool)arg2 msgWrapToAdd:(id)arg3 animated:(_Bool)arg4 jumpToFirstUnreadNode:(_Bool)arg5 indexPath:(id)arg6;
- (void)openMessageContentView:(id)arg1 startSendMessage:(_Bool)arg2 msgWrapToAdd:(id)arg3 animated:(_Bool)arg4 jumpToFirstUnreadNode:(_Bool)arg5;
- (void)openEnterpriseChatSessionListView:(id)arg1 animated:(_Bool)arg2;
- (void)openEnterpriseBrandSessionView:(id)arg1;
- (void)openWeAppSessionView;
- (void)openBrandSessionView;
- (void)openSyncPhoneContactsView;
- (void)openFloatBottleContentView;
- (void)openQQOfflineMsgView;
- (void)openWeSportView:(id)arg1;
- (void)updateNearMode;
- (void)onCreateChatContactReturn:(id)arg1;
- (void)tryHideSearchGuideView;
- (void)tryInitViewOfSearchController;
- (_Bool)isSeachActive;
- (void)onMainWindowFrameChanged;
- (void)hideSearchBar;
- (_Bool)shouldShowTitleWindow;
- (void)finishSearchBarImmediately;
- (_Bool)hasShowSearchBar;
- (void)resetSearchBar;
- (id)getVoiceSearchBar;
- (_Bool)isTopRightMenuShowID:(id)arg1;
- (void)initBarItem;
- (void)reloadHeaderView;
- (void)initSearchController;
- (void)dealloc;
- (void)setUIEventEnabled:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)resetViewStatus;
- (void)unLoadView;
- (void)unLoadData;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidPush:(_Bool)arg1;
- (void)viewDidPop:(_Bool)arg1;
- (void)viewWillPop:(_Bool)arg1;
- (void)removeMainFrameTip;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)setTableViewContentInsetForSearchBar;
- (void)initView;
- (void)showInviteFriendList;
- (void)initFooterView;
- (void)initBarMessageWindow;
- (void)initStatusBar;
- (void)OpenContactInfo:(id)arg1;
- (void)PopViewContoller;
- (void)PushViewController:(id)arg1;
- (void)updateRow:(unsigned int)arg1;
- (void)removeRow:(unsigned int)arg1;
- (void)insertRow:(unsigned int)arg1;
- (_Bool)checkHeaderRowValid:(unsigned int)arg1;
- (void)reloadAll;
- (void)onShowPhoneFriend;
- (void)onShowGoogleFriend;
- (void)resetHeaderView;
- (void)initHeaderView;
- (void)initTableView;
- (void)initShadowLogo;
- (double)getLogoContentInsetTop;
- (void)initTitle;
- (void)initTitleView;
- (void)checkDelayLoadData;
- (void)setReadyToLoadData;
- (void)initData;
- (void)viewDidLayoutSubviews;
- (void)viewDidTransitionToNewSize;
- (void)reLayoutSubviews;
- (void)popToSelfViewController;
- (void)updateUnReadCount;
- (void)willAppear;
- (void)setNewMainFrameTableViewContentOffsetToTheFirstUnreadSession;
- (void)setNewMainFrameTableViewContentOffset:(struct CGPoint)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)openSelectReceiveOrPayMoneyFromShortcut;
- (void)openSelectReceiveOrPayMoney;
- (void)openOverseaFacingReceiveMoney;
- (void)openFace2FaceReceiveMoney;
- (void)onRadar;
- (void)onMassSend;
- (void)openAlbum;
- (void)showQRInfoView;
- (void)showEmoticonStoreView;
- (void)showWCPayView;
- (void)showMyWCView;
- (void)onSelectContactReturn:(id)arg1 atScene:(unsigned int)arg2;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)createVideoVOIPChat;
- (void)createVoiceVOIPChat;
- (void)onCreateNewMessage;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


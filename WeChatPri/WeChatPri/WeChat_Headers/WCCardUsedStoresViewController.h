//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FavForwardLogicDelegate-Protocol.h"
#import "IWCCardPkgExt-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "ViewLocationDelegate-Protocol.h"
#import "WCCardUsedStoreViewDelegate-Protocol.h"

@class FavForwardLogicController, MMTableView, NSArray, NSString;
@protocol WCCardDataSource;

@interface WCCardUsedStoresViewController : MMUIViewController <ViewLocationDelegate, FavForwardLogicDelegate, UITableViewDataSource, UITableViewDelegate, UIAlertViewDelegate, IWCCardPkgExt, WCCardUsedStoreViewDelegate>
{
    id <WCCardDataSource> _cardDataSource;
    NSArray *_tableDatas;
    MMTableView *_tableView;
    unsigned long long _appBrandModeType;
    FavForwardLogicController *_m_favForwardController;
}

@property(retain, nonatomic) FavForwardLogicController *m_favForwardController; // @synthesize m_favForwardController=_m_favForwardController;
@property(nonatomic) unsigned long long appBrandModeType; // @synthesize appBrandModeType=_appBrandModeType;
- (void).cxx_destruct;
- (void)openAppBranWithUserName:(id)arg1 brandPass:(id)arg2;
- (void)onNavigation:(id)arg1;
- (void)hardCodeData;
- (id)getFavForawrdViewController;
- (void)onSendLocationToFriend:(id)arg1 ViewController:(id)arg2;
- (void)onGetUsedStoreList:(id)arg1 ErrCode:(int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onRetrieveLocation:(int)arg1;
- (void)makeStoreCell:(id)arg1 storeInfo:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)initView;
- (void)initData;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithCardDataSource:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


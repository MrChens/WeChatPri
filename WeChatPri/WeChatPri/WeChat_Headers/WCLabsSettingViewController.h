//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ILinkEventExt-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "tableViewDelegate-Protocol.h"

@class MMTableView, NSArray, NSString;

@interface WCLabsSettingViewController : MMUIViewController <ILinkEventExt, tableViewDelegate, UITableViewDelegate, UITableViewDataSource>
{
    MMTableView *m_tableView;
    NSArray *m_onlineLabsItems;
    NSArray *m_offlineLabItems;
    _Bool m_bHasOnlineSection;
    _Bool m_bHasOfflineSection;
}

- (void).cxx_destruct;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (id)getLabsAppItemAtIndexPath:(id)arg1;
- (double)getHeaderBottomPaddingInSection:(long long)arg1;
- (double)getHeaderTopPaddingInSection:(long long)arg1;
- (double)heightForHeadOrFootView:(id)arg1 topPading:(double)arg2 bottomPadding:(double)arg3;
- (id)genHeadOrFootView:(id)arg1 topPading:(double)arg2 bottomPadding:(double)arg3 textAlignment:(long long)arg4;
- (void)genNormalCell:(id)arg1 indexPath:(id)arg2;
- (id)getHeaderTitleWithSection:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)initFooterView;
- (void)viewDidLayoutSubviews;
- (id)genTableHeaderView;
- (void)viewDidLoad;
- (id)initWithSortedOnlineLabsItems:(id)arg1 OfflineLabItems:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


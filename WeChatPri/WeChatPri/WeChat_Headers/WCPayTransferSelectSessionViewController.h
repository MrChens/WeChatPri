//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "ContactsDataLogicDelegate-Protocol.h"
#import "MMSearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ContactsDataLogic, MMSearchBar, MMTableView, NSMutableDictionary, NSString, UIView;
@protocol WCPayTransferSelectSessionViewControllerDelegate;

@interface WCPayTransferSelectSessionViewController : WCPayBaseViewController <UISearchDisplayDelegate, UITableViewDelegate, UITableViewDataSource, MMSearchBarDelegate, ContactsDataLogicDelegate>
{
    id <WCPayTransferSelectSessionViewControllerDelegate> m_delegate;
    MMTableView *m_tableView;
    UIView *m_titleView;
    ContactsDataLogic *m_contactsDataLogic;
    NSMutableDictionary *m_dicContactsData;
    MMSearchBar *m_mmSearchBar;
    unsigned int m_uiScene;
    _Bool m_bSupportSectionIndex;
}

@property(nonatomic) _Bool m_bSupportSectionIndex; // @synthesize m_bSupportSectionIndex;
@property(nonatomic) unsigned int m_uiScene; // @synthesize m_uiScene;
- (void).cxx_destruct;
- (void)setDelegate:(id)arg1;
- (void)cancelSearch;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onContactsDataChange;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (void)makeNewSessionCell:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)initView;
- (void)initSearchBar;
- (void)initTableView;
- (void)setExtraCellLineHidden:(id)arg1;
- (void)initTitleArea;
- (void)initData;
- (void)onCancelBack:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ContactsDataLogicDelegate-Protocol.h"
#import "IDeviceRankAddFocusMgrExt-Protocol.h"
#import "IDeviceRankProfileMgrExt-Protocol.h"
#import "MMSearchBarDelegate-Protocol.h"
#import "NewContactsSearchPanelViewDelegate-Protocol.h"
#import "SelectTagContactsViewControllerDelegate-Protocol.h"
#import "TipsViewDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class ContactsDataLogic, MMTableView, NSArray, NSDictionary, NSIndexPath, NSMutableArray, NSMutableDictionary, NSString, NewContactsSearchPanelView, TipsView, UIBarButtonItem, UIButton, UIView;
@protocol BraceletRankAddFocusViewControllerDelegate;

@interface BraceletRankAddFocusViewController : MMUIViewController <SelectTagContactsViewControllerDelegate, IDeviceRankAddFocusMgrExt, IDeviceRankProfileMgrExt, UIAlertViewDelegate, UISearchDisplayDelegate, UITableViewDelegate, UITableViewDataSource, MMSearchBarDelegate, WCActionSheetDelegate, NewContactsSearchPanelViewDelegate, TipsViewDelegate, ContactsDataLogicDelegate>
{
    id <BraceletRankAddFocusViewControllerDelegate> m_delegate;
    MMTableView *m_tableView;
    NSDictionary *m_dicExistContact;
    NSDictionary *m_dicIgnoreContact;
    _Bool m_bShowBrandContact;
    NSMutableDictionary *m_dicMultiSelect;
    NSIndexPath *m_indexPathToBeDeleted;
    NewContactsSearchPanelView *m_panelView;
    UIButton *m_panelBtn;
    UIBarButtonItem *m_panelBtnItem;
    NSMutableArray *m_selectIndexPaths;
    ContactsDataLogic *m_contactsDataLogic;
    unsigned int m_uiGroupScene;
    NSArray *m_arrTagContacts;
    NSString *m_nsTagName;
    unsigned long long m_memberCountLimit;
    NSString *m_showTip;
    TipsView *m_tipView;
    _Bool m_tempForbidLayout;
    UIView *_tableFooterView;
    NSString *nsCurrentSearchText;
    NSMutableArray *m_recentLikeUsers;
    NSMutableArray *m_followes;
    NSMutableArray *m_followedArr;
    NSMutableArray *m_toFollow;
    NSMutableArray *m_keyArray;
    _Bool _m_bShowAllTags;
}

@property(nonatomic) _Bool m_bShowAllTags; // @synthesize m_bShowAllTags=_m_bShowAllTags;
@property(retain, nonatomic) NSString *m_showTip; // @synthesize m_showTip;
@property(nonatomic) unsigned long long m_memberCountLimit; // @synthesize m_memberCountLimit;
@property(retain, nonatomic) UIBarButtonItem *m_panelBtnItem; // @synthesize m_panelBtnItem;
@property(retain, nonatomic) UIButton *m_panelBtn; // @synthesize m_panelBtn;
@property(retain, nonatomic) NSMutableDictionary *m_dicMultiSelect; // @synthesize m_dicMultiSelect;
@property(nonatomic) unsigned int m_uiGroupScene; // @synthesize m_uiGroupScene;
@property(nonatomic) _Bool m_bShowBrandContact; // @synthesize m_bShowBrandContact;
@property(retain, nonatomic) NSDictionary *m_dicIgnoreContact; // @synthesize m_dicIgnoreContact;
@property(retain, nonatomic) NSDictionary *m_dicExistContact; // @synthesize m_dicExistContact;
@property(nonatomic) __weak id <BraceletRankAddFocusViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)failedToFollow;
- (void)onAddFollowWithFollowItems:(id)arg1 error:(int)arg2;
- (void)onGotWeRunFollowerList:(id)arg1 followers:(id)arg2 errCode:(int)arg3;
- (void)onSelectDoneWithContacts:(id)arg1;
- (void)searchTextFieldDidBeginEditing;
- (void)didDeleteLastWithKey:(id)arg1;
- (void)didClickImageAtIndex:(unsigned int)arg1 withKey:(id)arg2;
- (void)resetTableViewOffset:(id)arg1;
- (void)doTagSearch:(id)arg1 arrContacts:(id)arg2;
- (id)makeFiterContactToTagSearchView:(id)arg1;
- (unsigned long long)getSectionIndexOfTag;
- (void)cancelSearch;
- (void)doSearch:(id)arg1 Pre:(_Bool)arg2;
- (void)didSearchViewTableSelect:(id)arg1;
- (double)heightForSearchViewTable:(id)arg1;
- (id)cellForSearchViewTable:(id)arg1 index:(id)arg2;
- (void)makeSearchCell:(id)arg1 contact:(id)arg2;
- (void)onContactAsynSearchSectionResultChanged:(id)arg1 sectionTitles:(id)arg2 sectionResults:(id)arg3;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onContactsDataChange;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)tryShowSelectTip:(unsigned long long)arg1 currentSelectCount:(unsigned long long)arg2;
- (void)onTipsViewClick:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (long long)tableView:(id)arg1 sectionForSectionIndexTitle:(id)arg2 atIndex:(long long)arg3;
- (id)sectionIndexTitlesForTableView:(id)arg1;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)reloadTableView;
- (unsigned long long)getTotalSelectCount;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)makeTagCell:(id)arg1 row:(unsigned long long)arg2;
- (void)makeMultiTalkSessionCell:(id)arg1;
- (void)makeRadarCreateRoomCell:(id)arg1;
- (void)makeCell:(id)arg1 tableCell:(id)arg2 section:(unsigned long long)arg3 row:(unsigned long long)arg4;
- (void)makeCell:(id)arg1 contact:(id)arg2 showMatchTip:(_Bool)arg3;
- (void)makeCell:(id)arg1 contact:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)viewDidUnload;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)updateSelectedHeadImgView;
- (void)viewDidLoad;
- (void)initView;
- (void)initSearchBar;
- (void)initTableView;
- (void)setExtraCellLineHidden:(id)arg1;
- (void)initTitleArea;
- (void)initData;
- (void)onDone:(id)arg1;
- (void)onCancel:(id)arg1;
- (_Bool)updateMultiSelect:(id)arg1 contact:(id)arg2 tableView:(id)arg3;
- (void)updatePanelView:(id)arg1;
- (void)updatePanelBtn;
- (void)addSelect:(id)arg1;
- (id)getCellTextView:(id)arg1;
- (id)getCellImage:(id)arg1;
- (_Bool)isSelected:(id)arg1;
- (_Bool)isExisted:(id)arg1;
- (_Bool)isIgnore:(id)arg1;
- (void)onGroupSelectContactReturn:(id)arg1;
- (void)UpdateForChatGroup:(id)arg1;
- (void)removeSelect:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


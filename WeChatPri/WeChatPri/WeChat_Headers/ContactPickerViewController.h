//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FTSMultiContactSearchDelegate-Protocol.h"
#import "IGroupMgrExt-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class FTSMultiContactSearchLogic, MMTableView, NSMutableArray, NSMutableDictionary, NSString, UIScrollView;
@protocol ContactPickerViewDelegate;

@interface ContactPickerViewController : MMUIViewController <UIScrollViewDelegate, UITableViewDelegate, UITableViewDataSource, FTSMultiContactSearchDelegate, IGroupMgrExt>
{
    UIScrollView *_panelScrollView;
    NSMutableArray *_arrHeadImageView;
    MMTableView *_tableView;
    NSMutableArray *_arrResultWrap;
    NSMutableArray *_arrSectionTitles;
    NSMutableArray *_arrSelectedContact;
    NSMutableDictionary *_dicSelectedContact;
    NSMutableDictionary *_dicSelectedIndex;
    FTSMultiContactSearchLogic *_searchLogic;
    unsigned int _expandBitSet;
    NSMutableArray *m_arrNeedVerifyUsrName;
    int _scene;
    id <ContactPickerViewDelegate> _delegate;
}

@property(nonatomic) int scene; // @synthesize scene=_scene;
@property(nonatomic) __weak id <ContactPickerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)OnCreateGroup:(id)arg1 withStatus:(int)arg2 resp:(id)arg3;
- (void)multiResultKVReport;
- (void)onContactResultUpdated;
- (void)onMultiDone:(id)arg1;
- (void)onCancel:(id)arg1;
- (id)genErrorString:(id)arg1 needVerify:(_Bool *)arg2;
- (id)getErrorContactName:(id)arg1;
- (void)createChatRoom;
- (id)genMemerList;
- (void)onDeselectContact:(id)arg1 forIndexPath:(id)arg2;
- (void)onSelectContact:(id)arg1 forIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)makeMoreCell:(id)arg1 description:(id)arg2 image:(id)arg3;
- (void)makeCell:(id)arg1 contact:(id)arg2 matchTip:(id)arg3;
- (void)removeImageForKey:(id)arg1;
- (void)addImage:(id)arg1 animated:(_Bool)arg2;
- (void)relayoutPanelView;
- (void)updatePanelView:(id)arg1;
- (void)startLoading;
- (void)tryDeselectOtherContactForIndexPath:(id)arg1;
- (void)tryReorderContactAtSection:(long long)arg1;
- (void)setNavigationBarItemEnable:(_Bool)arg1;
- (void)updateNavigationItem;
- (long long)getSectionForSelectedContact:(id)arg1;
- (_Bool)isSelectedContact:(id)arg1;
- (unsigned long long)numberOfRowsInSection:(unsigned long long)arg1;
- (void)traverseEnableItem:(_Bool)arg1 key:(id)arg2 except:(id)arg3;
- (_Bool)isMoreCellAtIndexPath:(id)arg1;
- (void)setCell:(id)arg1 enable:(_Bool)arg2 selected:(_Bool)arg3;
- (void)setSelectedUI:(_Bool)arg1 indexPath:(id)arg2;
- (void)initView;
- (id)getCellImageForStatus:(_Bool)arg1 enable:(_Bool)arg2;
- (id)getCellImage:(id)arg1;
- (_Bool)isSelected:(id)arg1;
- (void)initNavBar;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initSectionTitles:(id)arg1;
- (void)initSearchLogic:(id)arg1;
- (void)dealloc;
- (id)initWithKeywords:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


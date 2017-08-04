//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "EmoticonManageCellDelegate-Protocol.h"
#import "IEmoticonPackageMgrExt-Protocol.h"
#import "StoreEmotionDeleteCgiDelegate-Protocol.h"
#import "StoreEmotionReplaceMyPanelListCgiDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "tableViewDelegate-Protocol.h"

@class MMTableView, NSMutableArray, NSString, StoreEmotionDeleteCgi, StoreEmotionReplaceMyPanelListCgi, StoreEmotionSynchronizeView, UILabel, UIView;

@interface EmoticonManageViewController : MMUIViewController <EmoticonManageCellDelegate, StoreEmotionDeleteCgiDelegate, StoreEmotionReplaceMyPanelListCgiDelegate, tableViewDelegate, UITableViewDelegate, UITableViewDataSource, IEmoticonPackageMgrExt, WCActionSheetDelegate>
{
    _Bool m_hideOtherSectoin;
    _Bool m_hideUndownloadRow;
    UIView *_headerView;
    StoreEmotionSynchronizeView *_syncView;
    _Bool m_isDeleteMode;
    NSMutableArray *m_arrExistLocalPackage;
    NSMutableArray *m_arrOtherPackage;
    MMTableView *m_tableView;
    UILabel *m_tipsLabel;
    UIView *m_existLocalHeadView;
    StoreEmotionDeleteCgi *m_deleteCgi;
    StoreEmotionReplaceMyPanelListCgi *m_replaceCgi;
    long long _hasNotDownloadCount;
}

@property(nonatomic) long long hasNotDownloadCount; // @synthesize hasNotDownloadCount=_hasNotDownloadCount;
@property(retain, nonatomic) StoreEmotionReplaceMyPanelListCgi *m_replaceCgi; // @synthesize m_replaceCgi;
@property(retain, nonatomic) StoreEmotionDeleteCgi *m_deleteCgi; // @synthesize m_deleteCgi;
@property(retain, nonatomic) UIView *m_existLocalHeadView; // @synthesize m_existLocalHeadView;
@property(nonatomic) _Bool m_isDeleteMode; // @synthesize m_isDeleteMode;
@property(retain, nonatomic) UILabel *m_tipsLabel; // @synthesize m_tipsLabel;
@property(retain, nonatomic) MMTableView *m_tableView; // @synthesize m_tableView;
@property(retain, nonatomic) NSMutableArray *m_arrOtherPackage; // @synthesize m_arrOtherPackage;
@property(retain, nonatomic) NSMutableArray *m_arrExistLocalPackage; // @synthesize m_arrExistLocalPackage;
- (void).cxx_destruct;
- (void)onStoreEmotionReplaceMyPanelListCgiFailed;
- (void)onStoreEmotionReplaceMyPanelListCgiOKWithPids:(id)arg1;
- (void)onStoreEmotionDeleteCgiFailed:(id)arg1;
- (void)onStoreEmotionDeleteCgiOK:(id)arg1;
- (void)onUnstallButtonClickWithPid:(id)arg1;
- (_Bool)isEmoticonManageCellDeleteMode;
- (void)deleteSelectedEmoticonPackageWithPid:(id)arg1;
- (void)saveSort;
- (void)tableView:(id)arg1 moveRowAtIndexPath:(id)arg2 toIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canMoveRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 shouldIndentWhileEditingRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)OnUpdateEmoticonPackageListAfterSort;
- (void)OnUpdateEmoticonPackageList;
- (void)viewDidLayoutSubviews;
- (void)onGotoNormalMode;
- (void)onGotoDeleteMode;
- (_Bool)isInExistLocalSecticon:(long long)arg1;
- (void)reloadData;
- (void)updateEditButtonStatus;
- (_Bool)isDeleteMode;
- (void)OnCancelModalView:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)initView;
- (void)loadDataFromDB;
- (void)initData;
- (void)viewDidLoad;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


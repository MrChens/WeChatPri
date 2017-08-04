//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class MMTableView, MMUIView, NSArray, NSMutableArray, NSString, UICollectionView, UIImageView, UITextField;
@protocol WCPayGPSelectMemberControllerDelegate;

@interface WCPayGPSelectMemberViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    _Bool _bIsAllSelect;
    _Bool _bIsSearching;
    unsigned int _maxSelectMember;
    id <WCPayGPSelectMemberControllerDelegate> _delegate;
    NSArray *_chatroomMemberContactArray;
    NSMutableArray *_selectdContacts;
    NSMutableArray *_resultSelectedContacts;
    MMTableView *_tableView;
    MMUIView *_toolBarView;
    UIImageView *_checkMarkImgView;
    MMUIView *_topBarView;
    UIImageView *_searchIconImgView;
    UITextField *_searchTextField;
    UICollectionView *_collectionView;
    NSArray *_searchResultContacts;
}

@property(retain, nonatomic) NSArray *searchResultContacts; // @synthesize searchResultContacts=_searchResultContacts;
@property(nonatomic) _Bool bIsSearching; // @synthesize bIsSearching=_bIsSearching;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UITextField *searchTextField; // @synthesize searchTextField=_searchTextField;
@property(retain, nonatomic) UIImageView *searchIconImgView; // @synthesize searchIconImgView=_searchIconImgView;
@property(retain, nonatomic) MMUIView *topBarView; // @synthesize topBarView=_topBarView;
@property(retain, nonatomic) UIImageView *checkMarkImgView; // @synthesize checkMarkImgView=_checkMarkImgView;
@property(retain, nonatomic) MMUIView *toolBarView; // @synthesize toolBarView=_toolBarView;
@property(retain, nonatomic) MMTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned int maxSelectMember; // @synthesize maxSelectMember=_maxSelectMember;
@property(nonatomic) _Bool bIsAllSelect; // @synthesize bIsAllSelect=_bIsAllSelect;
@property(retain, nonatomic) NSMutableArray *resultSelectedContacts; // @synthesize resultSelectedContacts=_resultSelectedContacts;
@property(retain, nonatomic) NSMutableArray *selectdContacts; // @synthesize selectdContacts=_selectdContacts;
@property(retain, nonatomic) NSArray *chatroomMemberContactArray; // @synthesize chatroomMemberContactArray=_chatroomMemberContactArray;
@property(nonatomic) __weak id <WCPayGPSelectMemberControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)doChatRoomSearch:(id)arg1;
- (_Bool)isContactExisted:(id)arg1;
- (void)removeSelectContact:(id)arg1;
- (_Bool)isContactSelected:(id)arg1;
- (id)getContactAtIndexPath:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)textFieldDidChange:(id)arg1;
- (void)scrollCollectionViewToLastOneWithAnimation:(id)arg1;
- (void)reloadSelectMemberCollectionViewWithAnimated:(int)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (_Bool)checkIfSelectContactMoreThanMax;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (_Bool)isAllContactSelected;
- (void)addAllContactExceptSelfIfNeed;
- (void)checkConfirmBarbuttonStatus;
- (void)checkSelectAllToolBarStatus;
- (void)selectAllBtnPress:(id)arg1;
- (void)confirmToLaunchWithoutSelf;
- (void)finishSelectMember;
- (void)saveSelectedMember;
- (void)cancelSaveSelectedMember;
- (void)selectMemberVCCancel;
- (void)setupToolViewContent;
- (void)setupTopbarViewContent;
- (void)setupContentView;
- (void)setupNavigationBar;
- (void)setupData;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class CContact, MMTableViewInfo;

@interface BraceletProfilePrivacySettingViewController : MMUIViewController
{
    MMTableViewInfo *m_tableViewInfo;
    _Bool m_isSettingsChanged;
    CContact *m_contact;
}

- (void).cxx_destruct;
- (void)goWeSportBlackListView;
- (void)updateBrandReceiveMSG;
- (_Bool)isReceiveMessage;
- (void)onLikeSwitchChange:(id)arg1;
- (void)onRankMsgSwitchChange:(id)arg1;
- (void)onTakePartInSwitchChange:(id)arg1;
- (void)initTable;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1;

@end


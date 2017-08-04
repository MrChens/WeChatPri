//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UIAlertViewDelegate-Protocol.h"

@class BackupInfoReport, MMUILabel, NSString, UIButton, UIScrollView, UISwitch;

@interface WXGBackupAnalysisViewController : MMUIViewController <UIAlertViewDelegate>
{
    UIScrollView *m_mainScrollView;
    MMUILabel *m_infoLabel;
    MMUILabel *m_checkLabel;
    UISwitch *m_checkSwitch;
    UIButton *m_deleteInfoButton;
    UIButton *m_lookBackupInfoButton;
    UIButton *m_lookRecoverInfoButton;
    UIButton *m_lookCompareInfoButton;
    BackupInfoReport *m_backupReport;
    BackupInfoReport *m_recoverReport;
    BackupInfoReport *m_compareReport;
    BackupInfoReport *m_backupMoreReport;
    BackupInfoReport *m_recoverMoreReport;
}

- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onSwitchValueChange:(id)arg1;
- (void)setLabelWithString:(id)arg1;
- (void)lookCompareInfo;
- (void)lookRecoverInfo;
- (void)lookBackupInfo;
- (void)deleteInfo;
- (void)makeScrollView;
- (void)addSwitch;
- (void)addButtons;
- (void)loadData;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


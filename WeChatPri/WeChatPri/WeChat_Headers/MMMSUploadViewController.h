//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMMSBaseViewController.h"

#import "MMPickerViewDelegate-Protocol.h"
#import "MemoryStatManagerExt-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"

@class MMLoadingView, MMPickerView, MemoryRecordInfo, NSArray, NSDateFormatter, NSString, UIButton;

@interface MMMSUploadViewController : MMMSBaseViewController <MemoryStatManagerExt, MMPickerViewDelegate, UIAlertViewDelegate>
{
    UIButton *m_selectButton;
    UIButton *m_uploadButton;
    MMLoadingView *m_loadingViewX;
    MMPickerView *m_pickView;
    MemoryRecordInfo *m_selectedRecord;
    NSArray *m_recordList;
    NSDateFormatter *m_dateFormatter;
}

- (void).cxx_destruct;
- (void)onReportUploadCompleted:(_Bool)arg1 reportType:(int)arg2;
- (void)onReportUploadProgress:(double)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)MMPickerViewDidChooseRow:(long long)arg1 atSession:(long long)arg2;
- (void)onUploadButtonClicked:(id)arg1;
- (void)onSelectButtonClicked:(id)arg1;
- (void)stopLoading;
- (void)startLoadingBlockedWithText:(id)arg1;
- (void)startLoadingBlocked;
- (void)layoutUploadButton:(int *)arg1;
- (void)updateSelectButtonTitle;
- (void)layoutSelectButtonAndTips:(int *)arg1;
- (void)layoutViews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


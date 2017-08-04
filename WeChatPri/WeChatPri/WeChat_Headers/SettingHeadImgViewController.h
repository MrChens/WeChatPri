//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "HDHeadImageViewDelegate-Protocol.h"
#import "settingMyAccountExtInfoLogicDelegate-Protocol.h"

@class MMHDHeadImageView, NSString, SettingMyAccountExtInfoLogic;

@interface SettingHeadImgViewController : MMUIViewController <HDHeadImageViewDelegate, settingMyAccountExtInfoLogicDelegate>
{
    MMHDHeadImageView *m_hdHeadImageView;
    SettingMyAccountExtInfoLogic *m_infoLogic;
}

- (void).cxx_destruct;
- (void)onImgChangeEnd:(_Bool)arg1 withError:(id)arg2;
- (void)onImgBeginChange:(id)arg1;
- (void)onInfoChange;
- (void)viewDidLayoutSubviews;
- (void)Operate:(id)arg1;
- (void)onImgSave;
- (void)viewDidLoad;
- (id)initWithContact:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


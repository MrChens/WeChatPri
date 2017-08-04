//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageCellView.h"

#import "UIAlertViewDelegate-Protocol.h"

@class AppFileMessageViewModel, AppFileNodeProgressView, NSString, UIImageView, UILabel;

@interface AppFileMessageCellView : CommonMessageCellView <UIAlertViewDelegate>
{
    int m_uiStatus;
    UILabel *m_titleLabel;
    UILabel *m_detailLabel;
    UIImageView *m_thumbImageView;
    AppFileNodeProgressView *m_fileProgressView;
}

- (void).cxx_destruct;
- (void)onTouchCancel;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (id)operationMenuItems;
- (void)onSendFailButtonClicked:(id)arg1;
- (void)onCancelButtonClicked:(id)arg1;
- (void)initThumbImageView;
- (void)initDetailLabel;
- (void)initTitleLabel;
- (void)updateStatus;
- (id)displayViewForImageBrowser;
- (void)onAppear;
- (void)layoutContentView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) AppFileMessageViewModel *viewModel; // @dynamic viewModel;

@end


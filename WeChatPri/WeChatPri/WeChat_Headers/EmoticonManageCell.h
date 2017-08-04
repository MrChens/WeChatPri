//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "EmoticonManageViewControllerModeExt-Protocol.h"
#import "IEmoticonPackageMgrExt-Protocol.h"
#import "IEmoticonPackageStateMgrExt-Protocol.h"

@class CEmoticonPackageWrap, MMProgressView, MMWebImageView, NSString, UIButton, UILabel;
@protocol EmoticonManageCellDelegate;

@interface EmoticonManageCell : MMUIView <IEmoticonPackageMgrExt, IEmoticonPackageStateMgrExt, EmoticonManageViewControllerModeExt>
{
    UIButton *m_downloadButton;
    MMWebImageView *m_iconImageView;
    UIButton *m_unstallButton;
    CEmoticonPackageWrap *m_wrap;
    UILabel *m_nameLabel;
    MMProgressView *m_progressView;
    id <EmoticonManageCellDelegate> m_delegate;
}

@property(nonatomic) __weak id <EmoticonManageCellDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) MMProgressView *m_progressView; // @synthesize m_progressView;
@property(retain, nonatomic) UILabel *m_nameLabel; // @synthesize m_nameLabel;
@property(retain, nonatomic) CEmoticonPackageWrap *m_wrap; // @synthesize m_wrap;
@property(retain, nonatomic) UIButton *m_unstallButton; // @synthesize m_unstallButton;
@property(retain, nonatomic) MMWebImageView *m_iconImageView; // @synthesize m_iconImageView;
@property(retain, nonatomic) UIButton *m_downloadButton; // @synthesize m_downloadButton;
- (void).cxx_destruct;
- (void)onGotoDeleteMode;
- (void)onGotoNormalMode;
- (void)OnUpdateEmoticonPackageState:(id)arg1 toState:(int)arg2;
- (void)OnEmoticonPackageDownloadStatusChanged:(id)arg1 IsDownloaded:(_Bool)arg2;
- (void)OnDownloadProgressChanged:(id)arg1 CurrLength:(unsigned long long)arg2 TotalLength:(unsigned long long)arg3;
- (void)onClickUnstallButton;
- (void)onClickDownloadButton;
- (void)checkMode;
- (void)onState:(int)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)setCellDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


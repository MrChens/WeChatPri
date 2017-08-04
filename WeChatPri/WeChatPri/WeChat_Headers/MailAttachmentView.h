//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class NSString, UIActivityIndicatorView, UIButton, UILabel;
@protocol MailAttachmentViewDelegate;

@interface MailAttachmentView : MMUIView
{
    UIActivityIndicatorView *m_loadingView;
    UILabel *m_labelName;
    UILabel *m_labelPercent;
    UILabel *m_labelUploadFail;
    UIButton *m_btnDelete;
    UIButton *m_btnResend;
    unsigned int m_uiPercent;
    unsigned int m_uiSize;
    NSString *m_nsAttachmentName;
    NSString *m_nsName;
    id <MailAttachmentViewDelegate> m_delegate;
}

@property(nonatomic) unsigned int m_uiSize; // @synthesize m_uiSize;
@property(nonatomic) __weak id <MailAttachmentViewDelegate> m_delegate; // @synthesize m_delegate;
@property(retain, nonatomic) NSString *m_nsName; // @synthesize m_nsName;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 name:(id)arg2;
- (void)initView;
- (void)OnResend:(id)arg1;
- (void)OnDelete:(id)arg1;
- (void)setUploadingStatus;
- (void)updateUploadPercent:(unsigned int)arg1;
- (void)setUploadSuccessStatus;
- (void)setUploadFailStatus;
- (_Bool)isUploadSuccess;
- (void)initData;

@end


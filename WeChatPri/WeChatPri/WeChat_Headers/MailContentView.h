//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "UITextViewDelegate-Protocol.h"

@class NSString, UITextView, UIView;
@protocol MailContentViewDelegate;

@interface MailContentView : MMUIView <UITextViewDelegate>
{
    UITextView *m_textView;
    UIView *m_labelView;
    id <MailContentViewDelegate> m_delegate;
    unsigned int m_uiLines;
    NSString *m_nsText;
    _Bool m_bPaste;
}

@property(retain, nonatomic) NSString *m_nsText; // @synthesize m_nsText;
@property(nonatomic) __weak id <MailContentViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)sizeToFit;
- (id)initWithFrame:(struct CGRect)arg1 showTips:(_Bool)arg2;
- (void)initView;
- (void)showReplyTips;
- (double)getContentHeight;
- (_Bool)isTextViewFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (double)getSelectedRangeY;
- (void)updateHeight;
- (double)measureHeight;
- (void)setTextViewText;
- (void)setFrame:(struct CGRect)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)textViewDidBeginEditing:(id)arg1;
- (void)setContent:(id)arg1;
- (id)getContent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


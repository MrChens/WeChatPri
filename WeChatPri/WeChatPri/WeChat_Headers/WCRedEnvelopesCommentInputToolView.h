//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "MMGrowTextViewDelegate-Protocol.h"

@class MMGrowTextView, NSString, UIButton, UIImageView;
@protocol WCRedEnvelopesCommentInputToolViewDelegate;

@interface WCRedEnvelopesCommentInputToolView : MMUIView <MMGrowTextViewDelegate>
{
    long long _keyboardHeight;
    UIImageView *_toolView;
    MMGrowTextView *_textView;
    int _positionMode;
    UIButton *_sendButton;
    struct CGPoint fPreToolViewOrigin;
    double _fKeyboardAnimationDuration;
    long long _iKeyboardAnimationCurve;
    id <WCRedEnvelopesCommentInputToolViewDelegate> m_delegate;
    _Bool m_bPositioning;
}

@property(nonatomic) _Bool m_bPositioning; // @synthesize m_bPositioning;
@property(nonatomic) __weak id <WCRedEnvelopesCommentInputToolViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)onTextViewDidChange:(id)arg1;
- (void)onTextView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (_Bool)isFirstResponder;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)keyboardDidShow:(double)arg1;
- (_Bool)TextViewDidDelete;
- (void)setKeyboardAnimationCurve:(long long)arg1;
- (void)setKeyboardAnimationDuration:(double)arg1;
- (void)MMGrowTextView:(id)arg1 pasteImage:(id)arg2;
- (_Bool)MMGrowTextView:(id)arg1 shouldPasteImage:(id)arg2;
- (void)keyboardWillHide:(_Bool)arg1;
- (void)keyboardWillHideInter:(double)arg1;
- (void)keyboardWillShow:(double)arg1;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)UpdateTabBarSendButtonState;
- (void)TextDidChanged:(id)arg1 selectedRange:(struct _NSRange)arg2;
- (void)TextViewDidEnter:(id)arg1;
- (void)TextViewHeightDidChanged:(id)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)NotifyViewControllerPostionChanged:(_Bool)arg1 Animated:(_Bool)arg2;
- (void)dealloc;
- (double)getToolViewHeight;
- (id)getText;
@property(nonatomic) __weak NSString *text;
- (void)insertString:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)initSubview;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


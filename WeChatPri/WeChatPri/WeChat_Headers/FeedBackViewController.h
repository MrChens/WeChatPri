//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "PBMessageObserverDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "UITextViewDelegate-Protocol.h"

@class NSString, UIButton, UIImageView, UILabel, UITextView;

@interface FeedBackViewController : MMUIViewController <UITextViewDelegate, PBMessageObserverDelegate, UIAlertViewDelegate>
{
    UITextView *m_textView;
    UILabel *m_labKF;
    UIButton *m_btnPhone;
    UIImageView *m_textBG;
    float m_fTextBGDefaultHeight;
    float m_fTextViewDefaultHeight;
    float m_fLabelKFDefaultY;
    float m_fBtnPhoneDefaultY;
    _Bool m_bShowDetail;
}

@property(nonatomic) _Bool m_bShowDetail; // @synthesize m_bShowDetail;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)keyboardWillShow:(id)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)OnPhone;
- (void)onShowDetail;
- (void)initTextView;
- (void)initRightBtn;
- (void)initLeftBtn;
- (void)OnReturn;
- (void)textViewDidChange:(id)arg1;
- (_Bool)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (void)onSendFeedBack:(id)arg1;
- (void)doSendFeedBack;
- (void)startLoading;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


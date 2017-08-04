//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class UIButton, UIView;
@protocol WCOutDialPadDelegate;

@interface WCOutDialPad : MMUIView
{
    unsigned long long m_mode;
    UIView *m_keyPadBtnsView;
    UIView *m_SKMBtnsView;
    UIButton *m_hideBtn;
    UIButton *m_bottomFunctionBtn;
    _Bool m_isMuteBtnSelected;
    _Bool m_isSpeakerBtnSelected;
    _Bool _hideKeyPad;
    _Bool _enableBottomFunctionBtn;
    id <WCOutDialPadDelegate> delegate;
}

@property(nonatomic) _Bool enableBottomFunctionBtn; // @synthesize enableBottomFunctionBtn=_enableBottomFunctionBtn;
@property(nonatomic) _Bool hideKeyPad; // @synthesize hideKeyPad=_hideKeyPad;
@property(readonly, nonatomic) _Bool isSpeakerBtnSelected; // @synthesize isSpeakerBtnSelected=m_isSpeakerBtnSelected;
@property(readonly, nonatomic) _Bool isMuteBtnSelected; // @synthesize isMuteBtnSelected=m_isMuteBtnSelected;
@property(nonatomic) __weak id <WCOutDialPadDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)didTagButton:(id)arg1;
- (void)layoutSubviews;
- (void)configSKMBtnsView;
- (void)configBottomFunctionBtnAndHideBtnWithMode:(unsigned long long)arg1;
- (void)configKeyPadBtnViewWithColorMode:(unsigned long long)arg1;
- (void)configCallingViewMode;
- (void)configDialViewMode;
- (id)initWithPadMode:(unsigned long long)arg1;

@end


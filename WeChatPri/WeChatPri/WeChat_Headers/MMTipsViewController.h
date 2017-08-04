//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowViewController.h"

#import "InputControllerDelegate-Protocol.h"

@class MMGrowTextView, MMUILabel, NSMutableArray, NSString, UIButton, UIImageView, UITapGestureRecognizer, UIView, UIViewController, WCInputController;
@protocol MMTipsViewControllerDelegate;

@interface MMTipsViewController : MMWindowViewController <InputControllerDelegate>
{
    id <MMTipsViewControllerDelegate> m_delegate;
    unsigned long long _tipsType;
    NSString *_tipsTitle;
    NSString *_tipsContent;
    NSString *_tipsImgName;
    NSMutableArray *_btnTitleArray;
    NSMutableArray *_btnArray;
    UIButton *_leftBtn;
    UIButton *_rightBtn;
    NSString *_tipsText;
    NSString *_tipsTextPlaceholder;
    unsigned int _tipsTextMaxCount;
    MMGrowTextView *_tipsTextView;
    UIImageView *_inputView;
    UIButton *_expressionButton;
    WCInputController *_inputController;
    UIView *_textBackgroundImage;
    _Bool _hasInputSth;
    UITapGestureRecognizer *_tapGR;
    UIButton *_backgroundBtn;
    UIImageView *_contentBg;
    UIImageView *_tipsImgView;
    UIView *_tipsDesView;
    UIView *_contentView;
    MMUILabel *_tipsTitleLabel;
    MMUILabel *_tipsContentLabel;
    _Bool _isBlurBg;
    UIView *_blurView;
    _Bool bIsForbidCancelBtn;
    _Bool _allButtonVertical;
    _Bool _hideTipsWhenClickedOutOfTips;
    unsigned long long m_tipsImageLocation;
    long long _tipTag;
    UIViewController *_topViewController;
}

@property(nonatomic) _Bool hideTipsWhenClickedOutOfTips; // @synthesize hideTipsWhenClickedOutOfTips=_hideTipsWhenClickedOutOfTips;
@property(nonatomic) _Bool allButtonVertical; // @synthesize allButtonVertical=_allButtonVertical;
@property(nonatomic) __weak UIViewController *topViewController; // @synthesize topViewController=_topViewController;
@property(nonatomic) long long tipTag; // @synthesize tipTag=_tipTag;
@property(nonatomic) unsigned long long m_tipsImageLocation; // @synthesize m_tipsImageLocation;
@property(retain, nonatomic) NSString *m_imageName; // @synthesize m_imageName=_tipsImgName;
@property(nonatomic) _Bool bIsForbidCancelBtn; // @synthesize bIsForbidCancelBtn;
@property(retain, nonatomic) MMUILabel *m_tipsContentLabel; // @synthesize m_tipsContentLabel=_tipsContentLabel;
@property(retain, nonatomic) MMUILabel *m_tipsTitleLabel; // @synthesize m_tipsTitleLabel=_tipsTitleLabel;
@property(nonatomic) __weak id <MMTipsViewControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)dealloc;
- (void)onTopBarHiddenChanged:(long long)arg1;
- (void)onTopBarFrameChanged;
- (void)tapGestureInProcess:(id)arg1;
- (void)keyboardDidHide;
- (void)textViewTextDidChange;
- (void)keyboardWillShow;
- (void)MMGrowTextViewBeginEditing:(id)arg1;
- (void)MMGrowTextViewHeightDidChanged:(id)arg1;
- (void)didCommitEmptyText;
- (void)didCommitText:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (id)create6Or6pFirstLoginView;
- (id)bulidNSAttributedStringText:(id)arg1;
- (void)removeAllBtn;
- (void)setButtonsEnable:(_Bool)arg1;
- (void)onClickBtn:(id)arg1;
- (void)updateSubViewsFrame;
- (id)getBtnAtIndex:(unsigned int)arg1;
- (void)resignInput;
- (void)becomeInput;
- (void)initInputController;
- (void)initInputToolView;
- (void)initInputView;
- (void)createContainImgTips;
- (id)getContentImageView;
- (void)viewDidLayoutSubviews;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)clickBgEmptyToHideTips;
- (void)hideTips;
- (void)configBlurBgOnView:(id)arg1;
- (id)initWithTitle:(id)arg1 andContent:(id)arg2 andTextFieldPlaceholder:(id)arg3 withMaxCount:(unsigned int)arg4 andCancelText:(id)arg5 andConfirmText:(id)arg6;
- (id)initWithTitle:(id)arg1 andContent:(id)arg2 andBtn:(id)arg3;
- (id)initWithTitle:(id)arg1 andImageName:(id)arg2 andContent:(id)arg3 andCancelText:(id)arg4 andConfirmText:(id)arg5;
- (id)initWithTitle:(id)arg1 andImageName:(id)arg2 andContent:(id)arg3 andCancelText:(id)arg4;
- (id)initIphone6LoginTipsWithTitle:(id)arg1 andContent:(id)arg2 andCancelText:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


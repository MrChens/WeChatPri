//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseViewController.h"

@class UIButton, UILabel, WCBaseTextFieldItem;
@protocol WCPayChangeOfflinePayLimitFeeViewControllerDelegate;

@interface WCPayChangeOfflinePayLimitFeeViewController : WCPayBaseViewController
{
    UIButton *m_footerButton;
    WCBaseTextFieldItem *m_textFieldLimitItem;
    UILabel *oLeftLimitLabel;
    id <WCPayChangeOfflinePayLimitFeeViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (void)OnSliderValueChanged:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)onNext;
- (void)viewDidLoad;
- (void)reloadTableView;
- (void)initNavigationBar;
- (id)getChangeOfflinePayLimitView;
- (void)viewWillLayoutSubviews;
- (void)dealloc;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAccountBaseViewController.h"

@protocol WCAccountBackDeviceFirstViewControllerDelegate;

@interface WCAccountBackDeviceFirstViewController : WCAccountBaseViewController
{
    id <WCAccountBackDeviceFirstViewControllerDelegate> m_delegate;
}

- (void).cxx_destruct;
- (unsigned long long)supportedInterfaceOrientations;
- (void)setDelegate:(id)arg1;
- (void)onUseIPadOnly;
- (void)onUseBothDevivce;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (id)genArrowImgView;
- (void)genNewLineByY:(double)arg1;
- (void)configUI;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

@end


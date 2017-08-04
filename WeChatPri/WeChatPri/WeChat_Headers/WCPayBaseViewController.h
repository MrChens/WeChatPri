//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBizBaseViewController.h"

#import "MMTableViewInfoDelegate-Protocol.h"
#import "UIAlertViewDelegate-Protocol.h"
#import "WCBaseInfoItemDelegate-Protocol.h"

@class NSString, WCPayControlData;
@protocol WCPayBaseViewControllerDelegate;

@interface WCPayBaseViewController : WCBizBaseViewController <MMTableViewInfoDelegate, WCBaseInfoItemDelegate, UIAlertViewDelegate>
{
    WCPayControlData *m_data;
    id <WCPayBaseViewControllerDelegate> _payBaseDelegate;
}

- (void).cxx_destruct;
- (void)refreshViewWithData:(id)arg1;
- (void)setupWithData:(id)arg1;
- (void)dealloc;
- (void)setPayBaseDelegate:(id)arg1;
- (void)OnBack;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


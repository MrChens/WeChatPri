//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMTableViewInfoDelegate-Protocol.h"
#import "WCBaseInfoItemDelegate-Protocol.h"

@class MMTableViewInfo, NSString, WCAccountControlData;

@interface WCAccountBaseViewController : MMUIViewController <MMTableViewInfoDelegate, WCBaseInfoItemDelegate>
{
    MMTableViewInfo *m_tableViewInfo;
    WCAccountControlData *m_data;
    unsigned int m_uiReportStatus;
    NSString *m_nsStyleID;
    struct timeval m_tvStart;
}

@property(nonatomic) unsigned int m_uiReportStatus; // @synthesize m_uiReportStatus;
@property(retain, nonatomic) NSString *m_nsStyleID; // @synthesize m_nsStyleID;
- (void).cxx_destruct;
- (void)viewDidTransitionToNewSize;
- (_Bool)useGrayBackgroundColor;
- (_Bool)useIpadSytle;
- (_Bool)recoverFromArchive:(id)arg1;
- (id)getArchive;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)WCBaseInfoItemPressReturnKey:(id)arg1;
- (void)onNext;
- (id)getBothSideMarginInputLineView;
- (id)getInputLineView;
- (id)getHeaderTipLabel:(id)arg1;
- (id)makeNewHeaderView:(id)arg1;
- (id)makeHeaderView:(id)arg1;
- (id)getNewHeaderView:(id)arg1;
- (id)getHeaderView:(id)arg1;
- (void)hideKeyBoard;
- (void)setNavigationRightBarButtonMoreStyleWithtarget:(id)arg1 action:(SEL)arg2;
- (void)setNavigationLeftBarButtonStyle:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (void)initNavigationBar;
- (unsigned int)getStayTime;
- (void)setStartTime;
- (void)viewDidLoad;
- (void)setTableFooterView:(id)arg1;
- (void)setTableHeaderView:(id)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)initView;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)callViewDidLoad;
- (_Bool)useCustomNavibar;
- (void)initData;
- (void)refreshViewWithData:(id)arg1;
- (void)setupWithData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


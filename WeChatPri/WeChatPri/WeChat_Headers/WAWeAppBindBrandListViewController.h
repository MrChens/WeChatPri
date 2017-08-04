//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSString, UILabel, UITableView, UIView;

@interface WAWeAppBindBrandListViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>
{
    UIView *_contentHeaderView;
    UILabel *_contentLabel;
    UITableView *_listTableView;
    NSArray *_arrBindBrandInfo;
    NSString *_fromWeAppUserName;
}

@property(retain, nonatomic) NSString *fromWeAppUserName; // @synthesize fromWeAppUserName=_fromWeAppUserName;
@property(retain, nonatomic) NSArray *arrBindBrandInfo; // @synthesize arrBindBrandInfo=_arrBindBrandInfo;
- (void).cxx_destruct;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)openBrandContact:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)onBackButtonClicked:(id)arg1;
- (void)layoutMySubViews;
- (void)viewDidLayoutSubviews;
- (void)initTableView;
- (void)initContentLabel;
- (void)initNavigationItems;
- (void)initTopNaviView;
- (void)initView;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


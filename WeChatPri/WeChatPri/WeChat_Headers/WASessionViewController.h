//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "IWASessionMgrExt-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class MMTableView, NSMutableSet, NSString, WAContactGetter;

@interface WASessionViewController : MMUIViewController <IWASessionMgrExt, UITableViewDelegate, UITableViewDataSource, WCActionSheetDelegate>
{
    MMTableView *_tableView;
    NSMutableSet *_setCheckUpdateUserName;
    WAContactGetter *_contactGetter;
    NSString *_sceneID;
}

@property(copy, nonatomic) NSString *sceneID; // @synthesize sceneID=_sceneID;
- (void).cxx_destruct;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)getWeappContactForUsername:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)checkUpdateContactFromIndex:(unsigned int)arg1;
- (void)confirmReceiveMsgActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)confirmBlockMsgActionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)switchSessionNotifyWithIndexPath:(id)arg1;
- (void)updateSessionCellMenu:(id)arg1 withCellData:(id)arg2;
- (void)onClickRightBarBtn:(id)arg1;
- (void)onWASessionsChanged;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (void)deleteSessionOnIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewWillBePushed:(_Bool)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)initRightBarButton;
- (void)initTableView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


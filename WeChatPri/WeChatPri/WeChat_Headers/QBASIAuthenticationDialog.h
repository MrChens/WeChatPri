//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QBASIAutorotatingViewController.h"

#import "UIActionSheetDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSString, QBASIHTTPRequest, UITableView, UIViewController;

@interface QBASIAuthenticationDialog : QBASIAutorotatingViewController <UIActionSheetDelegate, UITableViewDelegate, UITableViewDataSource>
{
    QBASIHTTPRequest *request;
    int type;
    UITableView *tableView;
    UIViewController *presentingController;
    _Bool didEnableRotationNotifications;
}

+ (void)dismiss;
+ (void)presentAuthenticationDialogForRequest:(id)arg1;
+ (void)initialize;
@property(retain, nonatomic) UIViewController *presentingController; // @synthesize presentingController;
@property _Bool didEnableRotationNotifications; // @synthesize didEnableRotationNotifications;
@property(retain) UITableView *tableView; // @synthesize tableView;
@property int type; // @synthesize type;
@property(retain) QBASIHTTPRequest *request; // @synthesize request;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loginWithCredentialsFromDialog:(id)arg1;
- (void)presentNextDialog;
- (id)requestsRequiringTheseCredentials;
- (void)cancelAuthenticationFromDialog:(id)arg1;
- (void)show;
- (void)showTitle;
- (void)dismiss;
- (void)viewDidDisappear:(_Bool)arg1;
- (id)domainField;
- (id)passwordField;
- (id)usernameField;
- (id)textFieldInRow:(unsigned long long)arg1 section:(unsigned long long)arg2;
- (void)orientationChanged:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FTSResultView.h"

#import "IFTSContactMgrExt-Protocol.h"
#import "contactInfoDelegate-Protocol.h"

@class NSString;

@interface FTSFollowedBrdCtDetailView : FTSResultView <contactInfoDelegate, IFTSContactMgrExt>
{
}

- (void)newMessageFromContactInfo:(id)arg1;
- (void)addToContactsFromContactInfo:(id)arg1;
- (void)onFTSDetailPageBrandContactResultChanged;
- (_Bool)hasSearchDone:(id)arg1;
- (id)getSearchArray:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)openEnterpriseWebSubBrand:(id)arg1;
- (void)openEnterpriseChatSessionListView:(id)arg1;
- (void)openEnterpriseBrandSessionListViewController:(id)arg1;
- (void)openPluginContactInfoView:(id)arg1;
- (_Bool)isOpenPluginContactInfoView:(id)arg1;
- (void)openBrandContact:(id)arg1;
- (void)handleTextChanged:(id)arg1 immediately:(_Bool)arg2;
- (void)delaySearchImp:(id)arg1;
- (void)delaySearch:(id)arg1 slowMode:(_Bool)arg2;
- (void)pop;
- (void)hideKeyboard;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


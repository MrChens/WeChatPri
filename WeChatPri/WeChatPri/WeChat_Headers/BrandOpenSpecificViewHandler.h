//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "VerifyPhoneDelegate-Protocol.h"

@class NSMutableDictionary, NSString;
@protocol BrandOpenSpecificViewHandlerDelegate;

@interface BrandOpenSpecificViewHandler : MMObject <VerifyPhoneDelegate>
{
    NSMutableDictionary *m_urlToViewController;
    id <BrandOpenSpecificViewHandlerDelegate> _delegate;
    unsigned int uiScene;
    unsigned int uiSponsorID;
    NSString *nsFromWhichUrl;
    NSString *nsPublisherName;
    NSString *nsExtInfo;
}

@property(nonatomic) unsigned int uiSponsorID; // @synthesize uiSponsorID;
@property(retain, nonatomic) NSString *nsExtInfo; // @synthesize nsExtInfo;
@property(nonatomic) unsigned int uiScene; // @synthesize uiScene;
@property(retain, nonatomic) NSString *nsPublisherName; // @synthesize nsPublisherName;
@property(retain, nonatomic) NSString *nsFromWhichUrl; // @synthesize nsFromWhichUrl;
- (void).cxx_destruct;
- (void)jumpToLogViewController;
- (void)jumpToShareCardListViewController;
- (void)jumpToCardListViewController;
- (void)jumpToShakeCardViewController;
- (void)jumpToExposeViewController;
- (void)jumpToSettingViewController:(id)arg1;
- (void)jumpToScanViewController;
- (void)jumpToTimeLineViewController;
- (void)jumpToSearchBrandViewController;
- (void)jumpToAddFriendViewController:(_Bool)arg1;
- (void)jumpToNewFriendViewController;
- (void)jumpToRecoverDataViewController;
- (void)handleJumpURL:(id)arg1;
- (void)loadUrlToViewControllerArray;
- (void)handleViewJump:(id)arg1;
- (_Bool)canHandleViewJump:(id)arg1;
- (id)initWithDelegate:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


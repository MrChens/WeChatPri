//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIWindow.h"

#import "WCImageFullScreenViewControllerDelegate-Protocol.h"

@class NSString, WCImageFullScreenViewController;
@protocol WCImageFullScreenWindowDelegate;

@interface WCImageFullScreenWindow : MMUIWindow <WCImageFullScreenViewControllerDelegate>
{
    WCImageFullScreenViewController *m_controller;
    id <WCImageFullScreenWindowDelegate> _wc_delegate;
}

@property(nonatomic) __weak id <WCImageFullScreenWindowDelegate> wc_delegate; // @synthesize wc_delegate=_wc_delegate;
- (void).cxx_destruct;
- (id)getViewController;
- (void)onViewBePopByMsgBar;
- (void)onAnimateFadeOut;
- (void)windowHideToLeft;
- (void)windowNeed2Show;
- (void)windowNeed2Hide;
- (void)onViewControllerAnimationHideWillStop;
- (void)onViewControllerAnimationHideStop;
- (void)onViewControllerAnimationShowWillStart;
- (void)setHidden:(_Bool)arg1;
- (void)animationShowWithMediaDataArray:(id)arg1 originView:(id)arg2 index:(unsigned int)arg3 needEdit:(_Bool)arg4;
- (void)animationShowWithHint:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


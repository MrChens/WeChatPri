//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "CAAnimationDelegate-Protocol.h"
#import "WCSnsNYParticipateFullScreenViewDelegate-Protocol.h"

@class NSString, UIImage, UIImageView, UIView, WCSnsNYParticipateFullScreenView;

@interface WCSnsNYFullScreenViewController : MMUIViewController <CAAnimationDelegate, WCSnsNYParticipateFullScreenViewDelegate>
{
    UIView *m_navigationBarBackgroundView;
    UIImageView *m_appearBackgroundView;
    UIImageView *m_centerImageView;
    UIImage *m_appearBackgroundImage;
    WCSnsNYParticipateFullScreenView *m_contentView;
}

@property(retain, nonatomic) WCSnsNYParticipateFullScreenView *m_contentView; // @synthesize m_contentView;
@property(retain, nonatomic) UIImage *m_appearBackgroundImage; // @synthesize m_appearBackgroundImage;
- (void).cxx_destruct;
- (void)onParticipateBtnClick;
- (void)onNotParticipateBtnClick;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)startAppearAnimation;
- (void)initAppearBackgroundView;
- (void)showAppearAnimation;
- (void)layoutNavigationBarBackgourndView;
- (void)initNavigationBarBackgroundView;
- (void)onBackButtonClicked:(id)arg1;
- (void)setNavigationLeftButton;
- (_Bool)useTransparentNavibar;
- (void)viewWillLayoutSubviews;
- (void)initView;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


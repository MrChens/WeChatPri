//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "UIGestureRecognizerDelegate-Protocol.h"

@class MMTimer, NSString, UIPanGestureRecognizer, UIView;
@protocol WABaseWebViewBanenerDelegate;

@interface WABaseWebViewBanener : MMUIView <UIGestureRecognizerDelegate>
{
    double m_navOffset;
    UIView *m_handlerView;
    UIPanGestureRecognizer *m_panGesture;
    _Bool m_isMoving;
    MMTimer *m_autoDismissTimer;
    _Bool _isNeedAutoDismiss;
    _Bool _isNeedPanDismiss;
    id <WABaseWebViewBanenerDelegate> _delegate;
    long long _showTimeStamp;
}

@property(nonatomic) long long showTimeStamp; // @synthesize showTimeStamp=_showTimeStamp;
@property(nonatomic) _Bool isNeedPanDismiss; // @synthesize isNeedPanDismiss=_isNeedPanDismiss;
@property(nonatomic) _Bool isNeedAutoDismiss; // @synthesize isNeedAutoDismiss=_isNeedAutoDismiss;
@property(nonatomic) __weak id <WABaseWebViewBanenerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)handlePanGesture:(id)arg1;
- (void)initPanGestrueRecognizer;
- (void)dismissWithAnimation:(_Bool)arg1;
- (void)autoDismiss;
- (void)showWithNavOffset:(double)arg1;
- (void)layoutSubviews;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "CAAnimationDelegate-Protocol.h"

@class NSString, UIImageView, WCPayControlData;

@interface WCPayAvaliableFavorView : MMUIView <CAAnimationDelegate>
{
    WCPayControlData *m_data;
    struct CGRect m_frame;
    UIImageView *m_backgroundView;
}

- (void).cxx_destruct;
- (_Bool)shouldPreventedAutorotateToInterfaceOrientation;
- (void)closeView;
- (void)showAnimation;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 Data:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


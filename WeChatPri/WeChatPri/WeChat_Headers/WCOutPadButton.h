//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIButton.h"

@class UIView;

@interface WCOutPadButton : MMUIButton
{
    UIView *m_iconView;
    UIView *m_coverView;
}

- (void).cxx_destruct;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)performLayout;
- (void)layoutSubviews;
- (void)InternalInitWithIconImage:(id)arg1 coverImage:(id)arg2 selectedBackgroundColor:(id)arg3;
- (void)InternalInitWithIconView:(id)arg1 coverView:(id)arg2;
- (id)initWithIconImage:(id)arg1 coverImage:(id)arg2 selectedBackgroundColor:(id)arg3;
- (id)initWithIconImage:(id)arg1 coverImage:(id)arg2;
- (id)initWithIconView:(id)arg1 coverView:(id)arg2;
- (id)initWithMainLabel:(id)arg1 subLabel:(id)arg2 colorMode:(unsigned long long)arg3;

@end


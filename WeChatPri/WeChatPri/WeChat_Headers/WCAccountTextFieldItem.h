//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCBaseTextFieldItem.h"

@interface WCAccountTextFieldItem : WCBaseTextFieldItem
{
    _Bool m_bUseGrayColor;
}

- (void)setText:(id)arg1;
- (void)adjustFieldItemWidth:(double)arg1;
- (void)initView:(struct CGRect)arg1;
- (void)initView:(struct CGRect)arg1 leftMargin:(double)arg2;
- (void)initView:(struct CGRect)arg1 leftMargin:(double)arg2 rightMargin:(double)arg3;
- (void)initView:(struct CGRect)arg1 leftMargin:(double)arg2 rightMargin:(double)arg3 useGrayBackgroundColor:(_Bool)arg4;

@end


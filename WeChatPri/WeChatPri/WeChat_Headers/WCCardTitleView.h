//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class UIActivityIndicatorView, UILabel;

@interface WCCardTitleView : MMUIView
{
    UIActivityIndicatorView *loadingView;
    UILabel *titleLabel;
}

- (void).cxx_destruct;
- (void)updateWithTitle:(id)arg1 NeedLoading:(_Bool)arg2;
- (void)initView;
- (id)init;

@end


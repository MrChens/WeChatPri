//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EGORefreshTableHeaderView.h"

@class MMActivityIndicator, UIImageView;

@interface WCTimeLineHeaderView : EGORefreshTableHeaderView
{
    MMActivityIndicator *m_reflashImageView;
    UIImageView *m_tipBkg;
}

- (void).cxx_destruct;
- (void)egoRefreshScrollViewDidScroll:(id)arg1;
- (void)onStateOfLoading;
- (void)onStateOfNormal;
- (void)onStateOfPulling;
- (id)initWithFrame:(struct CGRect)arg1;

@end


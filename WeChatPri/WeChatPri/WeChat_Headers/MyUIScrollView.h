//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIScrollView.h"

@protocol MyUIScrollViewDelegate;

@interface MyUIScrollView : MMUIScrollView
{
    id <MyUIScrollViewDelegate> m_delegate;
}

@property(nonatomic) __weak id <MyUIScrollViewDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end


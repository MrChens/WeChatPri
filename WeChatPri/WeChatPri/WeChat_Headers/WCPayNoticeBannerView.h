//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;
@protocol WCPayNoticeBannerViewDelegate;

@interface WCPayNoticeBannerView : UIView
{
    id <WCPayNoticeBannerViewDelegate> _m_delegate;
    UILabel *_m_titleLabel;
    NSString *_m_clickUrl;
}

@property(retain, nonatomic) NSString *m_clickUrl; // @synthesize m_clickUrl=_m_clickUrl;
@property(retain, nonatomic) UILabel *m_titleLabel; // @synthesize m_titleLabel=_m_titleLabel;
@property(nonatomic) __weak id <WCPayNoticeBannerViewDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
- (void).cxx_destruct;
- (void)onTap:(id)arg1;
- (void)updateUrl:(id)arg1;
- (void)updateTitle:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


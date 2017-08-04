//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCCanvasComponent.h"

@class UIImageView, UILabel, UIView;

@interface WCCanvasTelephoneComponent : WCCanvasComponent
{
    UIImageView *_m_lbsIcon;
    UIImageView *_m_rightIcon;
    UILabel *_m_phoneLabel;
    UIView *_topLineView;
    UIView *_bottomLineView;
}

+ (struct CGSize)calcSizeForCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
@property(retain, nonatomic) UIView *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) UIView *topLineView; // @synthesize topLineView=_topLineView;
@property(retain, nonatomic) UILabel *m_phoneLabel; // @synthesize m_phoneLabel=_m_phoneLabel;
@property(retain, nonatomic) UIImageView *m_rightIcon; // @synthesize m_rightIcon=_m_rightIcon;
@property(retain, nonatomic) UIImageView *m_lbsIcon; // @synthesize m_lbsIcon=_m_lbsIcon;
- (void).cxx_destruct;
- (void)updateFrame:(id)arg1;
- (void)configureLineView:(id)arg1;
- (void)configureWithCanvasItem:(id)arg1 dataItem:(id)arg2 orientation:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

@end


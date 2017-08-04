//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

@class NSString, UIColor;
@protocol WCCardGiftViewDelegate;

@interface WCCardGiftView : MMUIView
{
    NSString *_userName;
    NSString *_displayName;
    NSString *_detail;
    _Bool _bIsMemberCard;
    id <WCCardGiftViewDelegate> delegate;
    UIColor *_displayColor;
    UIColor *_detailColor;
}

@property(retain, nonatomic) UIColor *detailColor; // @synthesize detailColor=_detailColor;
@property(retain, nonatomic) UIColor *displayColor; // @synthesize displayColor=_displayColor;
@property(nonatomic) _Bool bIsMemberCard; // @synthesize bIsMemberCard=_bIsMemberCard;
@property(retain, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain, nonatomic) NSString *userName; // @synthesize userName=_userName;
@property(nonatomic) __weak id <WCCardGiftViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end


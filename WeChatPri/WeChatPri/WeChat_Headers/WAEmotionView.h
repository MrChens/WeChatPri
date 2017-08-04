//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol WAEmotionViewDelegate;

@interface WAEmotionView : UIView
{
    NSArray *faces;
    double _iconSize;
    id <WAEmotionViewDelegate> delegate;
}

+ (id)defaultEmoticons;
+ (unsigned long long)defaultEmoticonsCount;
+ (_Bool)contains:(id)arg1;
@property(nonatomic) id <WAEmotionViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)selected:(id)arg1;
- (void)loadEmotionView:(int)arg1 colnum:(int)arg2;
- (void)setIconSize:(double)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end


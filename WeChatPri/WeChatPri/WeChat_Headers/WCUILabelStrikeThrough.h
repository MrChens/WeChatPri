//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@class UIColor;

@interface WCUILabelStrikeThrough : UILabel
{
    int xOffset;
    int yOffset;
    int widthOffset;
    int stroke;
    UIColor *strokeColor;
}

@property(retain, nonatomic) UIColor *strokeColor; // @synthesize strokeColor;
@property(nonatomic) int stroke; // @synthesize stroke;
@property(nonatomic) int widthOffset; // @synthesize widthOffset;
@property(nonatomic) int yOffset; // @synthesize yOffset;
@property(nonatomic) int xOffset; // @synthesize xOffset;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawTextInRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 xOffset:(int)arg2 yOffset:(int)arg3 widthOffset:(int)arg4 stroke:(int)arg5 strokeColor:(id)arg6;
- (id)initWithFrame:(struct CGRect)arg1;

@end


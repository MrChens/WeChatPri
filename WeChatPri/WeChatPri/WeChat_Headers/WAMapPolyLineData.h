//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIImage;

@interface WAMapPolyLineData : NSObject
{
    _Bool _dotLine;
    _Bool _arrowLine;
    UIColor *_color;
    UIColor *_fillColor;
    double _width;
    double _borderWidth;
    UIColor *_borderColor;
    UIImage *_arrowImg;
}

@property(retain, nonatomic) UIImage *arrowImg; // @synthesize arrowImg=_arrowImg;
@property(retain, nonatomic) UIColor *borderColor; // @synthesize borderColor=_borderColor;
@property(nonatomic) double borderWidth; // @synthesize borderWidth=_borderWidth;
@property(nonatomic) _Bool arrowLine; // @synthesize arrowLine=_arrowLine;
@property(nonatomic) _Bool dotLine; // @synthesize dotLine=_dotLine;
@property(nonatomic) double width; // @synthesize width=_width;
@property(retain, nonatomic) UIColor *fillColor; // @synthesize fillColor=_fillColor;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (void).cxx_destruct;

@end


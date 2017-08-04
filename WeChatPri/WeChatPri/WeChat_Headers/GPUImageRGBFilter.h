//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImageRGBFilter : GPUImageFilter
{
    int redUniform;
    int greenUniform;
    int blueUniform;
    double _red;
    double _blue;
    double _green;
}

@property(nonatomic) double green; // @synthesize green=_green;
@property(nonatomic) double blue; // @synthesize blue=_blue;
@property(nonatomic) double red; // @synthesize red=_red;
- (id)init;

@end


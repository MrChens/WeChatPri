//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilter.h"

@interface GPUImageHighlightShadowFilter : GPUImageFilter
{
    int shadowsUniform;
    int highlightsUniform;
    double _shadows;
    double _highlights;
}

@property(nonatomic) double highlights; // @synthesize highlights=_highlights;
@property(nonatomic) double shadows; // @synthesize shadows=_shadows;
- (id)init;

@end


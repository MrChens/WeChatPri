//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilterGroup.h"

@class GPUImageDifferenceBlendFilter, GPUImageLowPassFilter;

@interface GPUImageHighPassFilter : GPUImageFilterGroup
{
    GPUImageLowPassFilter *lowPassFilter;
    GPUImageDifferenceBlendFilter *differenceBlendFilter;
    double filterStrength;
}

- (void).cxx_destruct;
@property(nonatomic) double filterStrength; // @synthesize filterStrength;
- (id)init;

@end


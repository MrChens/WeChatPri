//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageFilterGroup.h"

@class GPUImageDilationFilter, GPUImageErosionFilter;

@interface GPUImageClosingFilter : GPUImageFilterGroup
{
    GPUImageErosionFilter *erosionFilter;
    GPUImageDilationFilter *dilationFilter;
    double _verticalTexelSpacing;
    double _horizontalTexelSpacing;
}

@property(nonatomic) double horizontalTexelSpacing; // @synthesize horizontalTexelSpacing=_horizontalTexelSpacing;
@property(nonatomic) double verticalTexelSpacing; // @synthesize verticalTexelSpacing=_verticalTexelSpacing;
- (void).cxx_destruct;
- (id)initWithRadius:(unsigned long long)arg1;
- (id)init;

@end


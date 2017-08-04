//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageTwoInputFilter.h"

@interface GPUImageTwoInputCrossTextureSamplingFilter : GPUImageTwoInputFilter
{
    int texelWidthUniform;
    int texelHeightUniform;
    double texelWidth;
    double texelHeight;
    _Bool hasOverriddenImageSizeFactor;
    double _texelWidth;
    double _texelHeight;
}

@property(nonatomic) double texelHeight; // @synthesize texelHeight=_texelHeight;
@property(nonatomic) double texelWidth; // @synthesize texelWidth=_texelWidth;
- (void)setupFilterForSize:(struct CGSize)arg1;
- (id)initWithFragmentShaderFromString:(id)arg1;

@end


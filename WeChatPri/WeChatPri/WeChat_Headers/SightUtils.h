//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface SightUtils : NSObject
{
}

+ (struct CGSize)videoFrameSizeWithVideo:(id)arg1;
+ (_Bool)isThumbImage:(id)arg1 matchVideo:(id)arg2;
+ (_Bool)shouldUpdateThumbImageWithSightVideoPath:(id)arg1 thumbImagePath:(id)arg2;
+ (_Bool)generateThumbImageFromVideo:(id)arg1 toThumbImage:(id)arg2;
+ (_Bool)isVideoPlayable:(id)arg1;
+ (id)thumbForVideoWithPath:(id)arg1;
+ (id)imageFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 orientation:(long long)arg2;

@end


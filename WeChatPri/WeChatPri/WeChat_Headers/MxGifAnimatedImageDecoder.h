//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMAnimatedImageDecoder.h"

@class NSData, UIImage;

@interface MxGifAnimatedImageDecoder : MMAnimatedImageDecoder
{
    struct MxGifImage *m_gifImage;
    NSData *m_gifData;
    _Bool m_ignoreFirstSeek;
    _Bool m_hasDecodeOneLoop;
    _Bool m_isSingleFrame;
    int m_frameCount;
    UIImage *m_currentFrameImage;
    double m_currentFrameDuration;
    struct CGSize m_imageSize;
}

+ (void)updateMaxWidth:(unsigned int)arg1;
+ (int)frameCountForImageData:(id)arg1;
+ (double)frameDurationInSecondForDuration:(double)arg1;
- (_Bool)isSingleFrame;
- (_Bool)hasDecodeOneLoop;
- (struct CGSize)imageSize;
- (double)currentFrameDuration;
- (void).cxx_destruct;
- (_Bool)configDecoderWithGifData:(id)arg1;
- (void)setScale:(double)arg1;
- (int)frameCount;
- (int)currentFrameId;
- (id)currentFrameImage;
- (void)seekToNextFrame;
- (id)initWithData:(id)arg1;
- (void)dealloc;

@end


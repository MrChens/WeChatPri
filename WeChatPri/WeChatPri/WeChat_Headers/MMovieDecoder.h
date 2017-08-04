//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVURLAsset, NSInvocationOperation, NSRecursiveLock, NSString;
@protocol MMovieDecoderDelegate;

@interface MMovieDecoder : NSObject
{
    NSString *m_url;
    AVURLAsset *m_asset;
    NSInvocationOperation *m_playThread;
    NSRecursiveLock *m_threadLock;
    id <MMovieDecoderDelegate> m_delegate;
    int m_decodeMode;
    _Bool m_shouldDecodeVideo;
    _Bool m_shouldDecodeAudio;
    _Bool m_shouldSleepForEveryFrame;
    struct CGAffineTransform m_preferredTransform;
    unsigned long long m_pixelFormatType;
    _Bool _audioOnly;
    NSString *_cpKey;
}

+ (id)shareOperationQueue;
@property(retain, nonatomic) NSString *cpKey; // @synthesize cpKey=_cpKey;
@property(nonatomic) _Bool audioOnly; // @synthesize audioOnly=_audioOnly;
@property(readonly, nonatomic) struct CGAffineTransform preferredTransform; // @synthesize preferredTransform=m_preferredTransform;
@property(nonatomic) int decodeMode; // @synthesize decodeMode=m_decodeMode;
@property(nonatomic) __weak id <MMovieDecoderDelegate> delegate; // @synthesize delegate=m_delegate;
- (void).cxx_destruct;
- (void)threadFunc;
- (void)pause;
- (void)start;
- (long long)imageOrientation;
- (long long)videoOrientation;
- (void)load:(id)arg1;
- (void)releaseThread;
- (void)dealloc;
- (id)init;

@end


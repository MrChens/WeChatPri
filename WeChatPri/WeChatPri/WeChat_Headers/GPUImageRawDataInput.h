//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageOutput.h"

@class NSObject;
@protocol OS_dispatch_semaphore;

@interface GPUImageRawDataInput : GPUImageOutput
{
    struct CGSize uploadedImageSize;
    NSObject<OS_dispatch_semaphore> *dataUpdateSemaphore;
    int _pixelFormat;
    int _pixelType;
}

@property(nonatomic) int pixelType; // @synthesize pixelType=_pixelType;
@property(nonatomic) int pixelFormat; // @synthesize pixelFormat=_pixelFormat;
- (void).cxx_destruct;
- (struct CGSize)outputImageSize;
- (void)processDataForTimestamp:(CDStruct_1b6d18a9)arg1;
- (void)processData;
- (void)updateDataFromBytes:(char *)arg1 size:(struct CGSize)arg2;
- (void)uploadBytes:(char *)arg1;
- (void)dealloc;
- (id)initWithBytes:(char *)arg1 size:(struct CGSize)arg2 pixelFormat:(int)arg3 type:(int)arg4;
- (id)initWithBytes:(char *)arg1 size:(struct CGSize)arg2 pixelFormat:(int)arg3;
- (id)initWithBytes:(char *)arg1 size:(struct CGSize)arg2;

@end


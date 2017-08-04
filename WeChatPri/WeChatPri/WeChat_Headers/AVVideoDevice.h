//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "AVCaptureVideoDataOutputSampleBufferDelegate-Protocol.h"

@class AVCaptureDeviceInput, AVCaptureSession, AVCaptureVideoDataOutput, AVCaptureVideoPreviewLayer, NSMutableArray, NSRecursiveLock, NSString, UIImage;
@protocol AVVideoDataSource, AVVideoDeviceDelegate, AVVideoDeviceSessionDelegate, AVVideoDeviceSetupSessionDelegate;

@interface AVVideoDevice : MMObject <AVCaptureVideoDataOutputSampleBufferDelegate>
{
    struct opaqueCMSampleBuffer *m_lastSampleBufferRef;
    _Bool _shouldCaptureImage;
    _Bool _shouldStopAfterCapturing;
    UIImage *_lastCaptureImage;
    _Bool _m_usingBackCamera;
    _Bool _m_hasSetupSession;
    int videoDevErrCode;
    int _mVideoInterruptEndFlag;
    AVCaptureSession *session;
    AVCaptureDeviceInput *videoInput;
    AVCaptureVideoDataOutput *videoDataOutput;
    id <AVVideoDeviceDelegate> delegate;
    id <AVVideoDataSource> dataSource;
    NSRecursiveLock *m_startSessionLock;
    id <AVVideoDeviceSessionDelegate> m_sessionDelegate;
    char *mCameraBuf;
    id <AVVideoDataSource> mRecDevCallBack;
    id <AVVideoDeviceSetupSessionDelegate> m_setupDelegate;
    NSMutableArray *_m_requestLayerBlocks;
    AVCaptureVideoPreviewLayer *_m_previewLayer;
    NSRecursiveLock *_m_lastCaptureImageLock;
}

@property(retain, nonatomic) NSRecursiveLock *m_lastCaptureImageLock; // @synthesize m_lastCaptureImageLock=_m_lastCaptureImageLock;
@property(nonatomic) _Bool m_hasSetupSession; // @synthesize m_hasSetupSession=_m_hasSetupSession;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *m_previewLayer; // @synthesize m_previewLayer=_m_previewLayer;
@property(retain, nonatomic) NSMutableArray *m_requestLayerBlocks; // @synthesize m_requestLayerBlocks=_m_requestLayerBlocks;
@property(nonatomic) int mVideoInterruptEndFlag; // @synthesize mVideoInterruptEndFlag=_mVideoInterruptEndFlag;
@property(nonatomic) _Bool m_usingBackCamera; // @synthesize m_usingBackCamera=_m_usingBackCamera;
@property(nonatomic) __weak id <AVVideoDeviceSetupSessionDelegate> m_setupDelegate; // @synthesize m_setupDelegate;
@property(nonatomic) __weak id <AVVideoDataSource> mRecDevCallBack; // @synthesize mRecDevCallBack;
@property(nonatomic) char *mCameraBuf; // @synthesize mCameraBuf;
@property(nonatomic) __weak id <AVVideoDeviceSessionDelegate> m_sessionDelegate; // @synthesize m_sessionDelegate;
@property(nonatomic) int videoDevErrCode; // @synthesize videoDevErrCode;
@property(retain, nonatomic) NSRecursiveLock *m_startSessionLock; // @synthesize m_startSessionLock;
@property(nonatomic) __weak id <AVVideoDataSource> dataSource; // @synthesize dataSource;
@property __weak id <AVVideoDeviceDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) AVCaptureVideoDataOutput *videoDataOutput; // @synthesize videoDataOutput;
@property(retain, nonatomic) AVCaptureDeviceInput *videoInput; // @synthesize videoInput;
@property(retain, nonatomic) AVCaptureSession *session; // @synthesize session;
- (void).cxx_destruct;
- (void)answerLayerRequest;
- (void)requestLayer:(CDUnknownBlockType)arg1;
- (void)initPreviewLayer:(struct CGRect)arg1;
- (id)previewLayer:(struct CGRect)arg1;
- (void)captureOneImage;
- (_Bool)isCameraFront;
- (unsigned long long)cameraCount;
- (void)toggleCamera;
- (void)stopSession;
- (void)startSession;
- (_Bool)isRunning;
- (void)onVideoInterruptEnd:(id)arg1;
- (void)onVideoInterrupt:(id)arg1;
- (void)onVideoStop:(id)arg1;
- (void)onVideoStart:(id)arg1;
- (void)onVideoError:(id)arg1;
- (_Bool)setupSessionWithCameraFront:(_Bool)arg1;
- (void)setVideoDeviceSetupDelegate:(id)arg1;
- (void)setVideoDeviceSessionDelegate:(id)arg1;
- (id)requestLastCapture;
- (void)updateLastSampleBufferRef:(struct opaqueCMSampleBuffer *)arg1;
- (void)dealloc;
- (id)init;
- (id)cameraWithPosition:(long long)arg1;
- (id)backFacingCamera;
- (id)frontFacingCamera;
- (void)setTorchModeOff;
- (void)setTorchModeOn;
- (void)setFlashModeOff;
- (void)setFlashModeOn;
- (void)setFrameDuration;
- (int)getCaptureFps;
- (void)captureOutput:(id)arg1 didOutputSampleBuffer:(struct opaqueCMSampleBuffer *)arg2 fromConnection:(id)arg3;
- (void)newVideoSample:(struct opaqueCMSampleBuffer *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


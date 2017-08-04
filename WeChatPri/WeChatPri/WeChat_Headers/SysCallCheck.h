//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "AVAudioSessionDelegate-Protocol.h"
#import "JSEventExt-Protocol.h"
#import "MMService-Protocol.h"

@class CTCallCenter, NSString;

@interface SysCallCheck : MMService <MMService, JSEventExt, AVAudioSessionDelegate>
{
    _Bool mIsNeedRestartAudioTalk;
    _Bool mIsInterrupting;
    CTCallCenter *mCallCenter;
}

@property(nonatomic) _Bool mIsInterrupting; // @synthesize mIsInterrupting;
@property(nonatomic) _Bool mIsNeedRestartAudioTalk; // @synthesize mIsNeedRestartAudioTalk;
@property(retain, nonatomic) CTCallCenter *mCallCenter; // @synthesize mCallCenter;
- (void).cxx_destruct;
- (void)clearInterruptStatus;
- (_Bool)isInterrupting;
- (void)jsVideoStateChanged:(id)arg1;
- (void)jsAudioStateChanged:(id)arg1;
- (void)OnMediaPlayStateChanged:(id)arg1;
- (void)onServiceClearData;
- (_Bool)isPhoneCalling;
- (void)stopCheck;
- (void)startCheck;
- (void)inputIsAvailableChanged:(_Bool)arg1;
- (void)endInterruption;
- (void)beginInterruption;
- (void)audioSessionInterruption:(id)arg1;
- (void)playEnd;
- (void)playBegin;
- (void)callEnd;
- (void)callBegin;
- (void)swithAudioRoute;
- (void)appBecomeActive;
- (void)delayRestartTalk;
- (void)restartTalk;
- (void)pauseTalk;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


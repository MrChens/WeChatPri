//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol MMAVPlayerItem <NSObject>
- (void)onResume;
- (void)willStack;
- (void)silentPlayImmediately;
- (_Bool)performClear;
- (_Bool)performFullPlayWithMute:(_Bool)arg1;
- (_Bool)performFullPlay;
- (_Bool)performFullLoad;
- (void)performSilentPlay;
- (void)performPauseForce:(_Bool)arg1;
- (void)performLoadItem:(NSString *)arg1;
@end


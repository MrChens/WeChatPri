//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSContextPluginBase.h"

#import "IMusicPlayerExt-Protocol.h"
#import "IRemoteControlMusicPlayerExt-Protocol.h"

@class NSString;

@interface WAJSContextPlugin_operateMusic : WAJSContextPluginBase <IMusicPlayerExt, IRemoteControlMusicPlayerExt>
{
    int _musicState;
    NSString *_currentMusic;
    _Bool _isSeeking;
    _Bool _monopolizeMusicPlayer;
}

@property(nonatomic) _Bool monopolizeMusicPlayer; // @synthesize monopolizeMusicPlayer=_monopolizeMusicPlayer;
- (void).cxx_destruct;
- (id)getMusicId:(id)arg1;
- (void)onRemoteControlMusicShouldPlayPrevTrack;
- (void)onRemoteControlMusicShouldPlayNextTrack;
- (void)onMusicPlayFinish:(id)arg1;
- (void)onMusicStopError:(id)arg1 errInfo:(id)arg2;
- (void)onMusicSeekEnd:(id)arg1;
- (void)onMusicSeeking:(id)arg1;
- (void)onMusicInitAlready:(id)arg1;
- (void)onMusicPlayStatusChanged;
- (void)onPlayMusic:(id)arg1 fromScene:(int)arg2;
- (_Bool)handleEvent:(long long)arg1 userInfo:(id)arg2;
- (void)seekPlay:(float)arg1;
- (void)stopMusic;
- (void)resumeMusic;
- (void)pauseMusic;
- (_Bool)isPlaying;
- (_Bool)isPlaused;
- (void)dealloc;
- (_Bool)isValidMusic:(id)arg1;
- (void)playMusic:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


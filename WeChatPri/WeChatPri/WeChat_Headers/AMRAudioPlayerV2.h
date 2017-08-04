//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonPlayer.h"

#import "SimpleAudioBufferDelegate-Protocol.h"

@class NSString, SimpleAudioPlayer;
@protocol AudioDataRead;

@interface AMRAudioPlayerV2 : CommonPlayer <SimpleAudioBufferDelegate>
{
    int _m_currentPcmBytePos;
    struct AMRDecodeFloat *m_decoder;
    SimpleAudioPlayer *_m_audioPlayer;
    id <AudioDataRead> _m_audioData;
}

@property(nonatomic) int m_currentPcmBytePos; // @synthesize m_currentPcmBytePos=_m_currentPcmBytePos;
@property(retain, nonatomic) id <AudioDataRead> m_audioData; // @synthesize m_audioData=_m_audioData;
@property(retain, nonatomic) SimpleAudioPlayer *m_audioPlayer; // @synthesize m_audioPlayer=_m_audioPlayer;
@property(nonatomic) struct AMRDecodeFloat *m_decoder; // @synthesize m_decoder;
- (void).cxx_destruct;
- (unsigned int)channlesPerFrame;
- (unsigned int)framesPerPacket;
- (unsigned int)bitsPerChannel;
- (double)simpleRateForBuffer;
- (void)onAudioBufferPlayEnd;
- (unsigned int)fillPcmBuffer:(short *)arg1 bufferSize:(unsigned int)arg2;
- (void)prepareDecoder;
- (_Bool)isPlaying;
- (void)start;
- (void)resume;
- (void)pause;
- (void)stop;
- (void)updateData:(id)arg1;
- (void)updatePath:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


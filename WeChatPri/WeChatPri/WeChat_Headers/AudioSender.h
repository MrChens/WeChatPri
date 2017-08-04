//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMService.h"

#import "AMRAudioRecorderDelegate-Protocol.h"
#import "MMService-Protocol.h"
#import "SPXAudioRecorderDelegate-Protocol.h"
#import "SilkAudioRecorderDelegate-Protocol.h"
#import "UploadVoiceDelegate-Protocol.h"

@class AMRAudioRecorder, CMainControll, MMNewUploadVoiceMgr, NSString, SPXAudioRecorder, SilkAudioRecorder;

@interface AudioSender : MMService <AMRAudioRecorderDelegate, SPXAudioRecorderDelegate, SilkAudioRecorderDelegate, UploadVoiceDelegate, MMService>
{
    SPXAudioRecorder *m_spxrecorder;
    SilkAudioRecorder *m_silkRecorder;
    CMainControll *m_mainController;
    MMNewUploadVoiceMgr *m_upload;
    AMRAudioRecorder *m_amrrecorder;
}

- (void).cxx_destruct;
- (void)ResendVoiceMsg:(id)arg1 MsgWrap:(id)arg2;
- (_Bool)IsNeedRecordPrepareStatus;
- (_Bool)isRecording;
- (_Bool)StopRecord;
- (void)stop;
- (_Bool)CancelRecord;
- (_Bool)RemoveTmpAudio:(unsigned int)arg1;
- (id)GetTmpAudio:(unsigned int)arg1;
- (unsigned int)StartRecord;
- (_Bool)CanStartRecord;
- (unsigned int)startRecordForFormat:(unsigned int)arg1;
- (_Bool)canStartRecordForFormat:(unsigned int)arg1;
- (_Bool)StartRecordFrom:(id)arg1 ToUser:(id)arg2 UserInfo:(id)arg3;
- (_Bool)CanStartRecordFrom:(id)arg1 ToUser:(id)arg2;
- (_Bool)isNeedRecordBySilkForQQOfflineMsg;
- (_Bool)isNeedRecordBySilkForDyncfg;
- (_Bool)isNeedRecordBySilkByUsername:(id)arg1;
- (_Bool)isNeedSpeexAudioByUsrName:(id)arg1;
- (void)dealloc;
- (void)onServiceInit;
- (_Bool)initFacade:(id)arg1;
- (id)init;
- (_Bool)prepareSend:(id)arg1;
- (void)MainThreadAddMsg:(id)arg1;
- (_Bool)deleteMessageFromDB:(id)arg1;
- (_Bool)updateMessageStatus:(id)arg1;
- (_Bool)updateMessageToDB:(id)arg1;
- (_Bool)addMessageToDB:(id)arg1;
- (id)getTmpAudioFileName:(unsigned int)arg1;
- (id)getAudioFileName:(id)arg1 LocalID:(unsigned int)arg2;
- (id)getChatName:(id)arg1;
- (void)OnAMRPart:(id)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3 EndFlag:(unsigned int)arg4 ForceDelete:(_Bool)arg5;
- (void)OnAMREndRecording:(id)arg1;
- (void)OnAMRBeginRecording:(id)arg1 ErrNo:(int)arg2;
- (void)OnAMRLevelMeter:(id)arg1 Peak:(float)arg2;
- (_Bool)OnPrepareSendAMR:(id)arg1;
- (_Bool)CheckIfButtonPressing:(id)arg1;
- (void)OnSPXPart:(id)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3 EndFlag:(unsigned int)arg4 ForceDelete:(_Bool)arg5;
- (void)OnSPXEndRecording:(id)arg1;
- (void)OnSPXBeginRecording:(id)arg1 ErrNo:(int)arg2;
- (void)OnSPXLevelMeter:(id)arg1 Peak:(float)arg2;
- (_Bool)OnPrepareSendSPX:(id)arg1;
- (void)onSilkPart:(id)arg1 Offset:(unsigned int)arg2 Len:(unsigned int)arg3 EndFlag:(unsigned int)arg4 ForceDelete:(_Bool)arg5 Duration:(unsigned int)arg6;
- (void)onSilkEndRecording:(id)arg1;
- (void)onSilkBeginRecording:(id)arg1 ErrNo:(int)arg2;
- (void)onSilkLevelMeter:(id)arg1 Peak:(float)arg2;
- (_Bool)onPrepareSendSilk:(id)arg1;
- (_Bool)silkCheckIfButtonPressing:(id)arg1;
- (void)OnPartSent:(id)arg1 ErrNo:(unsigned int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


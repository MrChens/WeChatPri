//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IMessageWrapExt-Protocol.h"
#import "IMsgExtendOperation-Protocol.h"
#import "NSCopying-Protocol.h"

@class CMessageWrap, NSData, NSString;

@interface CExtendInfoOfVoiceMsg : NSObject <IMsgExtendOperation, IMessageWrapExt, NSCopying>
{
    unsigned int m_uiVoiceTime;
    unsigned int m_uiVoiceFormat;
    unsigned int m_uiVoiceEndFlag;
    unsigned int m_uiVoiceCancelFlag;
    unsigned int m_uiVoiceForwardFlag;
    NSData *m_dtVoice;
    CMessageWrap *m_refMessageWrap;
}

+ (void)CreateExtendInfoWithType:(unsigned int)arg1 retExtendInfo:(id *)arg2;
@property(nonatomic) CMessageWrap *m_refMessageWrap; // @synthesize m_refMessageWrap;
@property(retain, nonatomic) NSData *m_dtVoice; // @synthesize m_dtVoice;
@property(nonatomic) unsigned int m_uiVoiceForwardFlag; // @synthesize m_uiVoiceForwardFlag;
@property(nonatomic) unsigned int m_uiVoiceCancelFlag; // @synthesize m_uiVoiceCancelFlag;
@property(nonatomic) unsigned int m_uiVoiceEndFlag; // @synthesize m_uiVoiceEndFlag;
@property(nonatomic) unsigned int m_uiVoiceFormat; // @synthesize m_uiVoiceFormat;
@property(nonatomic) unsigned int m_uiVoiceTime; // @synthesize m_uiVoiceTime;
- (void).cxx_destruct;
- (void)SetPlaySounded:(_Bool)arg1;
- (_Bool)IsPlaySounded;
- (_Bool)IsRecording;
- (void)SetPlayed;
- (_Bool)IsDownloadEnded;
- (_Bool)IsUnPlayed;
- (_Bool)SaveMesVoice:(id)arg1;
- (void)ChangeForBackup;
- (void)UpdateContent:(id)arg1;
- (void)ChangeForDisplay;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


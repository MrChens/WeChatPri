//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NetCmdEvent.h"

@class UploadVoiceWrap;

@interface CUploadVoiceEvent : NetCmdEvent
{
    UploadVoiceWrap *m_wrapUploadVoice;
}

@property(retain, nonatomic) UploadVoiceWrap *m_wrapUploadVoice; // @synthesize m_wrapUploadVoice;
- (void).cxx_destruct;
- (void)NotifyFromPrtl:(unsigned int)arg1 MessageInfo:(id)arg2;
- (_Bool)Start:(unsigned int *)arg1 RetInfo:(id)arg2;
- (_Bool)SetEventInfo:(id)arg1;
- (void)dealloc;
- (id)init;

@end


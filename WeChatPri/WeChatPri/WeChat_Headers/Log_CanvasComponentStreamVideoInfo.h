//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WXPBGeneratedMessage.h"

@class Log_CanvasComponentBasicInfo, Log_CanvasComponentUrlInfo;

@interface Log_CanvasComponentStreamVideoInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) Log_CanvasComponentBasicInfo *basicInfo; // @dynamic basicInfo;
@property(nonatomic) int clickPlayControlCount; // @dynamic clickPlayControlCount;
@property(nonatomic) int clickVoiceControlCount; // @dynamic clickVoiceControlCount;
@property(nonatomic) int isAutoPlay; // @dynamic isAutoPlay;
@property(nonatomic) int playCompletedCount; // @dynamic playCompletedCount;
@property(nonatomic) int playCount; // @dynamic playCount;
@property(nonatomic) int playTimeInterval; // @dynamic playTimeInterval;
@property(nonatomic) int streamVideoDuration; // @dynamic streamVideoDuration;
@property(retain, nonatomic) Log_CanvasComponentUrlInfo *streamVideoUrlInfo; // @dynamic streamVideoUrlInfo;
@property(retain, nonatomic) Log_CanvasComponentUrlInfo *thumbUrlInfo; // @dynamic thumbUrlInfo;

@end


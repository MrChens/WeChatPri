//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBMessageObserverDelegate-Protocol.h"

@class VoipMonoMsg;
@protocol VoipGetRoomInfoCgiDelegate;

@interface VoipGetRoomInfoCgi : NSObject <PBMessageObserverDelegate>
{
    VoipMonoMsg *m_voipMonoMsg;
    id <VoipGetRoomInfoCgiDelegate> _m_delegate;
}

@property(nonatomic) __weak id <VoipGetRoomInfoCgiDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) VoipMonoMsg *m_voipMonoMsg; // @synthesize m_voipMonoMsg;
- (void).cxx_destruct;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)startRequest;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VOIPUIHelper : NSObject
{
}

+ (id)FormVoipRemindMessageWithUsrname:(id)arg1 andInviteType:(int)arg2;
+ (id)FormVoipMessageContentWithInviteType:(int)arg1 RoomId:(int)arg2 Key:(int)arg3 UiStatus:(int)arg4 RecvTime:(unsigned int)arg5 WordingType:(unsigned int)arg6 Duration:(unsigned int)arg7;
+ (id)FormVoipMessageWithUsrname:(id)arg1 andInviteType:(int)arg2 CallFromMyself:(_Bool)arg3 WordingType:(unsigned int)arg4 Duration:(unsigned int)arg5;
+ (id)FormVoipMessageWithUsrname:(id)arg1 andInviteType:(int)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

@protocol MessageDBExt

@optional
- (void)onDeleteAllMsgs:(NSString *)arg1;
- (void)onDeleteBrokenMsg:(unsigned int)arg1 chatName:(NSString *)arg2;
- (void)onDeleteBadRoomMsg:(long long)arg1 createTime:(unsigned int)arg2 chatName:(NSString *)arg3;
@end


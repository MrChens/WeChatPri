//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, WAAppItemData;

@protocol WAAppItemManagerExtension <NSObject>

@optional
- (void)onWeAppStaredItemsInfoUpdated:(NSArray *)arg1 scene:(unsigned int)arg2;
- (void)onWeAppItemsInfoUpdatedErrorWithErrorCode:(int)arg1 scene:(unsigned int)arg2;
- (void)onWeAppItemsInfoUpdatedWithAPageItem:(NSArray *)arg1 localLastUpdateTime:(unsigned int)arg2 remoteLastUpdateTime:(unsigned int)arg3 hasMore:(_Bool)arg4 scene:(unsigned int)arg5;
- (void)onWeAppItemUnStared:(WAAppItemData *)arg1 errCode:(int)arg2;
- (void)onWeAppItemStared:(WAAppItemData *)arg1 errCode:(int)arg2;
- (void)onWeAppItemOpened:(WAAppItemData *)arg1;
@end


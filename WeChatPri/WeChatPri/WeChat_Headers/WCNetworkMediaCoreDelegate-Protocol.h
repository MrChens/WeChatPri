//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WCNetworkMediaCore;

@protocol WCNetworkMediaCoreDelegate <NSObject>

@optional
- (void)onMediaCore:(WCNetworkMediaCore *)arg1 VideoSizeUpdate:(struct CGSize)arg2;
- (void)onMediaCore:(WCNetworkMediaCore *)arg1 DarutionUpdate:(double)arg2;
- (void)onMediaCore:(WCNetworkMediaCore *)arg1 CacheDarutionChange:(double)arg2;
- (void)onMediaCore:(WCNetworkMediaCore *)arg1 StateChange:(int)arg2;
@end


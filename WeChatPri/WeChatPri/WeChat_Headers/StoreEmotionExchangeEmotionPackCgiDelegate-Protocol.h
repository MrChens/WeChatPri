//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class EmotionCDNUrl, NSString;

@protocol StoreEmotionExchangeEmotionPackCgiDelegate <NSObject>

@optional
- (void)onExchangeEmotionPackCgiFailedWithPid:(NSString *)arg1 AndRet:(int)arg2;
- (void)onExchangeEmotionPackCgiFailedForNoResponseWithPid:(NSString *)arg1;
- (void)onExchangeEmotionPackCgiOkWithPid:(NSString *)arg1 DownloadInfo:(EmotionCDNUrl *)arg2;
@end


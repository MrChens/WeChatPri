//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class CMessageWrap, NSMutableDictionary;

@protocol IVideoExt

@optional
- (void)OnVideoThumbDidChange:(CMessageWrap *)arg1;
- (void)OnLocalCacheVideoDownloadSuccess:(CMessageWrap *)arg1;
- (void)OnVideoDownloadAfterOK:(CMessageWrap *)arg1;
- (void)OnVideoDownloadPause:(CMessageWrap *)arg1;
- (void)OnVideoDownloadFail:(CMessageWrap *)arg1;
- (void)OnVideoDownloadOK:(CMessageWrap *)arg1;
- (void)PostUpdateVideoMsgs:(NSMutableDictionary *)arg1;
- (void)UpdateVideoMsg:(CMessageWrap *)arg1;
- (void)PreUpdateVideoMsgs:(NSMutableDictionary *)arg1;
- (void)OnThumbDownloadFailed:(CMessageWrap *)arg1;
- (void)OnThumbDownloadOK:(CMessageWrap *)arg1;
@end


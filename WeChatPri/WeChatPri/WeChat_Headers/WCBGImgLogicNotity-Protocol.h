//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class MyWCDB, NSArray, WCMediaItem, WCUploadTask;

@protocol WCBGImgLogicNotity

@optional
- (MyWCDB *)database;
- (NSArray *)getUploadingDataItems;
- (void)NotifyBackgroundChanged;
- (void)NotifyToDownloadMedia:(WCMediaItem *)arg1 downloadType:(long long)arg2;
- (void)NotifyToUploadWithTask:(WCUploadTask *)arg1;
@end


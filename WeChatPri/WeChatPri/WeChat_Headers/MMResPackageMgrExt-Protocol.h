//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSString;

@protocol MMResPackageMgrExt

@optional
- (void)onResPackageDownloadProcessUpdated:(NSString *)arg1 downloadSize:(int)arg2 totalSize:(int)arg3;
- (void)onResPackageDownloadFailed:(NSString *)arg1;
- (void)onResPackageReady:(NSString *)arg1;
@end


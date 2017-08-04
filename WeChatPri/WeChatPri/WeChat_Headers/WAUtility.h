//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WAUtility : NSObject
{
}

+ (id)sha1WithFile:(id)arg1;
+ (unsigned long long)millisecondsWithAbsoluteTimeElapse:(unsigned long long)arg1;
+ (unsigned long long)currentAbsoluteTime;
+ (id)snapshotNavigationBarWithItem:(id)arg1 bound:(struct CGRect)arg2 layoutMargin:(struct UIEdgeInsets)arg3;
+ (id)snapshotStatusBar;
+ (id)snapshotLayerWithView:(id)arg1;
+ (id)snapshotWithView:(id)arg1;
+ (id)snapshotWithView:(id)arg1 captureFrame:(struct CGRect)arg2;
+ (void)setStatusBarViewHidden:(_Bool)arg1;
+ (id)getStatusBarView;
+ (id)pathForRelativeURL:(id)arg1;
+ (_Bool)haveChineseChar:(id)arg1;
+ (id)parseURLParams:(id)arg1;
+ (unsigned int)GenWebviewID;
+ (id)imageFromBase64String:(id)arg1;
+ (id)stringWithSecondsSince1970:(unsigned long long)arg1;
+ (unsigned long long)currentTimeInMilliseconds;
+ (unsigned int)appVersionInTaskFromAppVersionInContact:(unsigned int)arg1 debugMode:(unsigned int)arg2;

@end

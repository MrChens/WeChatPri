//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray;

@interface WXGGetCallStackReportHandler : NSObject
{
    NSMutableArray *m_binaryImages;
    NSDictionary *m_systemInfo;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)getReportJsonDataWithCallStackArray:(id)arg1 withReportID:(id)arg2 symbolictated:(_Bool)arg3;
- (void)setupBinaryImages;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSRecursiveLock;

@interface BubbleManager : NSObject
{
    NSRecursiveLock *m_lock;
    NSMutableDictionary *m_bubbleInfoDict;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)bubbleInfoWithType:(unsigned long long)arg1 position:(unsigned long long)arg2 isSender:(_Bool)arg3;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class WAContactMainThreadGetter;

@interface WAContactGetter : NSObject
{
    WAContactMainThreadGetter *_mainThreadGetter;
}

- (void).cxx_destruct;
- (void)mainThread_getWeAppContactWithKey:(id)arg1 type:(unsigned long long)arg2 version:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4 timeout:(unsigned int)arg5;
- (void)getWeAppContactWithAppid:(id)arg1 version:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3 timeout:(unsigned int)arg4;
- (void)getWeAppContactWithAppid:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)getWeAppContact:(id)arg1 version:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3 timeout:(unsigned int)arg4;
- (void)getWeAppContact:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)getWeAppContactWithKey:(id)arg1 type:(unsigned long long)arg2 version:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4 timeout:(unsigned int)arg5;
- (void)getWeAppContactWithKey:(id)arg1 type:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3 timeout:(unsigned int)arg4;
- (void)dealloc;

@end


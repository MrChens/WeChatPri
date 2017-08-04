//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAContactMgrExtension-Protocol.h"

@class MMTimer, NSString;

@interface WAContactMainThreadGetter : NSObject <WAContactMgrExtension>
{
    CDUnknownBlockType _handler;
    MMTimer *_timer;
    NSString *_updateKey;
    unsigned long long _getType;
}

- (void).cxx_destruct;
- (void)onUpdateWeAppContactFailedWithKey:(id)arg1 type:(unsigned long long)arg2 errMsg:(id)arg3;
- (void)onUpdateWeAppContactSuccess:(id)arg1;
- (void)onUpdateContactTimeout:(id)arg1;
- (void)getWeAppContact:(id)arg1 getType:(unsigned long long)arg2 version:(unsigned long long)arg3 handler:(CDUnknownBlockType)arg4 timeout:(unsigned int)arg5;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


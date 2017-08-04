//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface KSCrashDoctor : NSObject
{
}

+ (id)doctor;
- (id)diagnoseCrash:(id)arg1;
- (id)appendOriginatingCall:(id)arg1 callName:(id)arg2;
- (_Bool)isDeadlock:(id)arg1;
- (_Bool)isStackOverflow:(id)arg1;
- (id)zombieCall:(id)arg1;
- (id)lastFunctionCall:(id)arg1;
- (_Bool)isMemoryCorruption:(id)arg1;
- (_Bool)isMathError:(id)arg1;
- (_Bool)isInvalidAddress:(id)arg1;
- (id)lastStackEntry:(id)arg1;
- (id)lastInAppStackEntry:(id)arg1;
- (id)basicRegistersFromThreadReport:(id)arg1;
- (id)backtraceFromThreadReport:(id)arg1;
- (id)crashedThreadReport:(id)arg1;
- (id)mainExecutableNameForReport:(id)arg1;
- (id)registerNameForFamily:(int)arg1 paramIndex:(int)arg2;
- (int)cpuFamily:(id)arg1;
- (id)errorReport:(id)arg1;
- (id)infoReport:(id)arg1;
- (id)crashReport:(id)arg1;
- (id)systemReport:(id)arg1;
- (id)recrashReport:(id)arg1;

@end


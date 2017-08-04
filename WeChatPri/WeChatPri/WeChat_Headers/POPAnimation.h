//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, POPAnimationTracer;

@interface POPAnimation : NSObject <NSCopying>
{
    struct _POPAnimationState *_state;
    SpringSolver_fe820e75 *_solver;
    id _currentValue;
    NSArray *_progressMarkers;
}

@property(copy, nonatomic) NSArray *progressMarkers; // @synthesize progressMarkers=_progressMarkers;
@property(readonly, copy, nonatomic) id currentValue; // @synthesize currentValue=_currentValue;
@property(nonatomic) SpringSolver_fe820e75 *solver; // @synthesize solver=_solver;
- (void).cxx_destruct;
- (void)_appendDescription:(id)arg1 debug:(_Bool)arg2;
- (_Bool)_advance:(id)arg1 currentTime:(double)arg2 elapsedTime:(double)arg3;
- (id)debugDescription;
- (id)description;
@property(readonly, nonatomic) POPAnimationTracer *tracer;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
@property(nonatomic) _Bool repeatForever;
@property(nonatomic) _Bool removedOnCompletion;
@property(nonatomic) double beginTime;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) CDUnknownBlockType animationDidApplyBlock;
@property(copy, nonatomic) CDUnknownBlockType completionBlock;
@property(copy, nonatomic) CDUnknownBlockType animationDidReachToValueBlock;
@property(copy, nonatomic) CDUnknownBlockType animationDidStartBlock;
@property(readonly, nonatomic) int type;
@property(nonatomic) _Bool autoreverses;
@property(nonatomic) long long repeatCount;
@property(nonatomic, getter=isPaused) _Bool paused;
@property(nonatomic) __weak id delegate;
- (void)dealloc;
- (void)_initState;
- (id)_init;
- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end


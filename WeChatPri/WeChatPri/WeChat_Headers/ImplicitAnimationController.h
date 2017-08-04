//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class ImplicitAnimationObj;
@protocol ImplicitAnimationControllerDelegate;

@interface ImplicitAnimationController : MMObject
{
    id <ImplicitAnimationControllerDelegate> m_delegate;
    ImplicitAnimationObj *_animationObj;
}

@property(retain, nonatomic) ImplicitAnimationObj *animationObj; // @synthesize animationObj=_animationObj;
@property(nonatomic) __weak id <ImplicitAnimationControllerDelegate> m_delegate; // @synthesize m_delegate;
- (void).cxx_destruct;
- (void)doEggAnimation:(id)arg1;
- (void)stopAnimation;
- (void)startAnimaionWithMyMessage:(id)arg1;
- (void)startAnimaionWithMessages:(id)arg1;
- (void)dealloc;
- (id)init;

@end


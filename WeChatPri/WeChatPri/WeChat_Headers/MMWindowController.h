//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMUIWindow, UIImageView, UIViewController;

@interface MMWindowController : NSObject
{
    int _transitionAnimationOptions;
    UIImageView *_blurBgImageView;
    int _animType;
    _Bool _bIsAnimationAlpha;
    MMUIWindow *_window;
    UIViewController *_viewController;
}

@property(nonatomic) _Bool bIsAnimationAlpha; // @synthesize bIsAnimationAlpha=_bIsAnimationAlpha;
@property(retain, nonatomic) UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) MMUIWindow *window; // @synthesize window=_window;
- (void).cxx_destruct;
- (void)doWindowCloseAnimationWithCompletion:(CDUnknownBlockType)arg1;
- (void)closeWindowAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)closeWindowAnimated:(_Bool)arg1;
- (void)showWindowAnimateType:(int)arg1 withTransitionAnimation:(int)arg2;
- (void)showWindowAnimated:(_Bool)arg1 withTransitionAnimation:(int)arg2;
- (void)showWindowAnimated:(_Bool)arg1;
- (void)setupWindowWithLevel:(int)arg1;
- (id)getMainWindow;
- (void)dealloc;
- (id)initWithViewController:(id)arg1 windowLevel:(int)arg2;

@end

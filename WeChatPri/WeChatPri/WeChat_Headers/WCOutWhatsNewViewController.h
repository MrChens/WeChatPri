//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class MMUIImageView, MMUIView, NSArray, NSMutableArray;
@protocol whatsnewViewDelegateEx;

@interface WCOutWhatsNewViewController : MMUIViewController
{
    id <whatsnewViewDelegateEx> _delegate;
    NSMutableArray *_imgViewKeypadArray;
    NSMutableArray *_imgViewKeypadArrayHL;
    NSArray *_imgViewIndexArrayHL;
    MMUIView *_headerUIViewFirstPage;
    MMUIView *_headerUIViewSecondPage;
    MMUIImageView *_imgViewCallSound1;
    MMUIImageView *_imgViewCallSound2;
    MMUIImageView *_imgViewCallSound3;
}

@property(retain, nonatomic) MMUIImageView *imgViewCallSound3; // @synthesize imgViewCallSound3=_imgViewCallSound3;
@property(retain, nonatomic) MMUIImageView *imgViewCallSound2; // @synthesize imgViewCallSound2=_imgViewCallSound2;
@property(retain, nonatomic) MMUIImageView *imgViewCallSound1; // @synthesize imgViewCallSound1=_imgViewCallSound1;
@property(retain, nonatomic) MMUIView *headerUIViewSecondPage; // @synthesize headerUIViewSecondPage=_headerUIViewSecondPage;
@property(retain, nonatomic) MMUIView *headerUIViewFirstPage; // @synthesize headerUIViewFirstPage=_headerUIViewFirstPage;
@property(retain, nonatomic) NSArray *imgViewIndexArrayHL; // @synthesize imgViewIndexArrayHL=_imgViewIndexArrayHL;
@property(retain, nonatomic) NSMutableArray *imgViewKeypadArrayHL; // @synthesize imgViewKeypadArrayHL=_imgViewKeypadArrayHL;
@property(retain, nonatomic) NSMutableArray *imgViewKeypadArray; // @synthesize imgViewKeypadArray=_imgViewKeypadArray;
@property(nonatomic) __weak id <whatsnewViewDelegateEx> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)startAnimateSecondPage;
- (void)startAnimateFirstPage:(_Bool)arg1;
- (void)startAnimate;
- (void)enterWechat;
- (void)stopShowWhatsNew;
- (void)tryWco;
- (void)configView;
- (void)didReceiveMemoryWarning;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end


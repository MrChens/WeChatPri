//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewController.h>

@class NSArray, NSTimer, UILabel, UIView;

@interface WCWatchTipsTableViewController : UITableViewController
{
    UIView *_conversationView;
    NSArray *_tips;
    UILabel *_timeLabel;
    UILabel *_timeLabel2;
    NSTimer *_timeLabelTimer;
    NSTimer *_animationTimer;
}

@property(retain, nonatomic) NSTimer *animationTimer; // @synthesize animationTimer=_animationTimer;
@property(retain, nonatomic) NSTimer *timeLabelTimer; // @synthesize timeLabelTimer=_timeLabelTimer;
@property(retain, nonatomic) UILabel *timeLabel2; // @synthesize timeLabel2=_timeLabel2;
@property(retain, nonatomic) UILabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(retain, nonatomic) NSArray *tips; // @synthesize tips=_tips;
@property(retain, nonatomic) UIView *conversationView; // @synthesize conversationView=_conversationView;
- (void).cxx_destruct;
- (void)refreshTimeLabel;
- (long long)caculateCellHeightWithTitle:(id)arg1 andSubTitle:(id)arg2 andContent:(id)arg3 addConversation:(_Bool)arg4;
- (void)starPageSwithAnimationWithContactView:(id)arg1 andContactCell:(id)arg2 andChatView:(id)arg3 andTitleLabel:(id)arg4 andPageCircle1:(id)arg5 andPageCircle2:(id)arg6 andTapView:(id)arg7 andHaloView:(id)arg8 andSwipeView:(id)arg9 andSwipeTrackView:(id)arg10;
- (void)setupWatchFace:(id)arg1 atRow:(long long)arg2;
- (void)setupCell:(id)arg1 withTitle:(id)arg2 andSubTitle:(id)arg3 andContent:(id)arg4 addConversation:(_Bool)arg5;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end


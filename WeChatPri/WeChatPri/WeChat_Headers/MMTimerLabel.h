//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UILabel.h>

@interface MMTimerLabel : UILabel
{
    long long _second;
    long long _minute;
    long long _hour;
    _Bool _isShowHourDefault;
    _Bool _isActive;
}

@property(nonatomic) long long hour; // @synthesize hour=_hour;
@property(nonatomic) long long minute; // @synthesize minute=_minute;
@property(nonatomic) long long second; // @synthesize second=_second;
- (void)dealloc;
- (void)pauseTimer;
- (void)stopTimer;
- (void)startTimer;
- (void)reset;
- (void)setIsShowHourDefault:(_Bool)arg1;
- (void)increaseTime;
- (void)updateLabel;

@end


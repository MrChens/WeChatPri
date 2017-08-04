//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CommonMessageViewModel.h"

@class NSString;

@interface VoiceMessageViewModel : CommonMessageViewModel
{
    _Bool _isPlaying;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
- (void)onMessageStopPlaying;
- (void)onMessageStartPlaying;
@property(readonly, nonatomic) NSString *voiceTimeStirng;
@property(readonly, nonatomic) double voiceTimeLength;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayBaseMessageViewModel.h"

@class NSString;

@interface WCPayTransferMessageViewModel : WCPayBaseMessageViewModel
{
    NSString *_bgImageName;
}

+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
@property(readonly, nonatomic) NSString *bgImageName; // @synthesize bgImageName=_bgImageName;
- (void).cxx_destruct;
- (id)additionalAccessibilityDescription;
- (id)iconName;
- (unsigned long long)bubbleType;
- (double)iconSize;
- (id)titleText;
- (id)descText;
- (id)sourceTitle;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end


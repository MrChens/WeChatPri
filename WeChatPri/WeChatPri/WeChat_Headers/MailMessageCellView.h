//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BaseMessageCellView.h"

@class MailMessageViewModel, UIImageView;

@interface MailMessageCellView : BaseMessageCellView
{
    UIImageView *m_bgImageView;
}

- (void).cxx_destruct;
- (void)onTouchUpInside;
- (void)onTouchDown;
- (void)onDelete:(id)arg1;
- (id)operationMenuItems;
- (void)layoutContentView;

// Remaining properties
@property(readonly, nonatomic) MailMessageViewModel *viewModel; // @dynamic viewModel;

@end


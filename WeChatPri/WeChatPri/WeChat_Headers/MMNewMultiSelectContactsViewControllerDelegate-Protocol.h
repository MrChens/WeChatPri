//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CContact, NSArray, UIView;

@protocol MMNewMultiSelectContactsViewControllerDelegate <NSObject>

@optional
- (void)onMultiSelectContactsDidCancel;
- (void)onMultiSelectContactsDidDismiss;
- (void)onSingleSelectContactDidFinishSelect:(CContact *)arg1;
- (void)onMultiSelectContactsDidFinishSelect:(NSArray *)arg1 tmpDisplayView:(UIView *)arg2;
- (void)onMultiSelectContactsEndWithReportSelectedCount:(unsigned int)arg1 hasReachLimit:(_Bool)arg2 clickCount:(unsigned int)arg3;
- (void)onMultiSelectContactsDidFinishSelect:(NSArray *)arg1;
@end


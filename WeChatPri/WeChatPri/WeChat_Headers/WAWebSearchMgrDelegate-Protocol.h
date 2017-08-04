//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString;

@protocol WAWebSearchMgrDelegate <NSObject>
- (void)onWebSearchDataFail:(_Bool)arg1;
- (void)onWebSearchDataChanged:(_Bool)arg1 isFromFuncQuery:(_Bool)arg2;

@optional
- (void)onWebSearchWithQuery:(NSMutableDictionary *)arg1;
- (void)onFailReceiveSuggestionJSON;
- (void)onReceiveSuggestionJSON:(NSString *)arg1 query:(NSString *)arg2;
- (void)onReceiveSuggestionJSON:(NSString *)arg1;
- (void)onUpdateHeadImg:(NSDictionary *)arg1;
- (void)onUpdateCommonImg:(NSDictionary *)arg1;
@end

//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol WASearchJSEventHandlerDelegate <NSObject>

@optional
- (void)onUpdateWAWidgetWithParams:(NSDictionary *)arg1;
- (void)onRemoveWAWidgetWithParams:(NSDictionary *)arg1;
- (NSString *)onInsertWAWidgetWithParams:(NSDictionary *)arg1;
- (void)onLaunchBrandProfile:(NSDictionary *)arg1;
- (void)onLaunchWebView:(NSDictionary *)arg1;
- (void)onLaunchDetailPage:(NSDictionary *)arg1;
- (void)onRegisterWebViewDidScroll:(NSDictionary *)arg1;
- (void)onPageDoLog:(NSDictionary *)arg1;
- (void)onReportFTSRealTime:(NSDictionary *)arg1;
- (void)onReportWeAppSearchRealTime:(NSDictionary *)arg1;
- (void)onOpenWeAppPage:(NSDictionary *)arg1;
- (void)onSearchInputChanged:(NSDictionary *)arg1;
- (void)onGetAvatar:(NSDictionary *)arg1;
- (void)onGetImageList:(NSDictionary *)arg1;
- (void)onGetSuggestionData:(NSDictionary *)arg1;
- (void)onGetSearchData:(NSDictionary *)arg1;
@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CContact, MMUIViewController, NSDictionary, NSString, UIView;
@protocol YYWebViewInterface;

@protocol FTSJSEventDelegate <NSObject>

@optional
- (MMUIViewController *)onGetBaseViewController;
- (void)onSwitchSearchContext:(NSDictionary *)arg1;
- (void)onInsertHistoryOperation:(NSDictionary *)arg1;
- (void)onClearHistoryOperation:(NSDictionary *)arg1;
- (void)onOpenEmotionPage:(NSDictionary *)arg1;
- (void)onRequestLocalSuggestion:(NSDictionary *)arg1;
- (void)onSearchInputChanged:(NSDictionary *)arg1;
- (void)onClickRecmdWord:(NSDictionary *)arg1;
- (void)onOpenWAWidgetLogViewWithParams:(NSDictionary *)arg1;
- (void)onUpdateWAWidgetWithParams:(NSDictionary *)arg1;
- (void)onRemoveWAWidgetWithParams:(NSDictionary *)arg1;
- (NSString *)onInsertWAWidgetWithParams:(NSDictionary *)arg1;
- (void)onReportWeAppSearchRealTime:(NSDictionary *)arg1;
- (void)onOpenWeAppPage:(NSDictionary *)arg1;
- (void)onOpenMsgSession:(CContact *)arg1;
- (void)didFinishLoadWebView:(UIView<YYWebViewInterface> *)arg1;
- (void)onOpenSnsDetail:(NSDictionary *)arg1;
- (void)onOpenContactError:(NSString *)arg1 withMessage:(NSString *)arg2;
- (void)onOpenContact:(CContact *)arg1;
- (void)onBeginOnlineSearchContact:(NSString *)arg1;
- (void)onOpenBrandContact:(CContact *)arg1 withParams:(NSDictionary *)arg2;
- (void)onLaunchPage:(NSString *)arg1 withParams:(NSDictionary *)arg2;
- (void)onLaunchDetailPageForWeApp:(NSDictionary *)arg1;
- (void)onLaunchDetailPage:(NSDictionary *)arg1;
- (void)onPreSearch:(NSString *)arg1 bizType:(unsigned long long)arg2;
- (void)onSearchRecmdDataFail;
- (void)onFailReceiveJson;
- (void)onReceiveJson:(NSDictionary *)arg1;
@end


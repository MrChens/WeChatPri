//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@interface WAReportUtil : MMObject
{
}

+ (unsigned int)publicLibVersion;
+ (unsigned long long)conventDebugModeType2ReportAppState:(unsigned long long)arg1;
+ (id)getAppBrandInfoByUserName:(id)arg1;
+ (id)genSessionIDWithPrefix:(id)arg1;
+ (unsigned long long)getCostTimeInMsWithBeginTime:(unsigned long long)arg1 endTime:(unsigned long long)arg2;
+ (unsigned long long)getCurrentTimeStampInMsSince1970;
+ (unsigned long long)getCurrentTimeStamp;
+ (id)getUserAgent;
+ (id)getNetType;
+ (void)reportWeAppLog:(int)arg1 item:(id)arg2;
+ (void)reportWithItem:(id)arg1;
+ (void)reportError:(unsigned long long)arg1 contact:(id)arg2 appType:(unsigned long long)arg3 scene:(unsigned long long)arg4 sceneNote:(id)arg5;
+ (void)reportPhoneAction:(id)arg1;
+ (void)reportWKTerminateAction:(id)arg1;
+ (void)reportForwardMessageAction:(id)arg1;
+ (void)reportKFSessionMsgPageActionItem:(id)arg1;
+ (void)reportNearByWeappActionItem:(id)arg1;
+ (void)reportNativeProfilePageActionItem:(id)arg1;
+ (void)reportKFSessionPageEnterItem:(id)arg1;
+ (void)reportKFSessionAction:(id)arg1;
+ (void)reportKFSessionMsgAction:(id)arg1;
+ (void)reportTemplateMsgAction:(id)arg1;
+ (void)reportAppInstallOrUpdate:(id)arg1;
+ (void)reportWAWebViewPageError:(id)arg1;
+ (void)reportJSError:(id)arg1;
+ (void)reportStarListShowAction:(id)arg1;
+ (void)reportDestopShowAction:(id)arg1;
+ (void)reportDestopOperateAction:(id)arg1;
+ (void)reportWAOuterMenuAction:(id)arg1;
+ (void)reportJSApiAction:(id)arg1;
+ (void)reprotWAWebViewMenuAction:(id)arg1;
+ (void)reprotWAWebViewPV:(id)arg1;

@end


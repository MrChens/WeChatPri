//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CAppUtil : NSObject
{
}

+ (void)GetEnabledNotificationTypeWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (id)addHtmlHrefForText:(id)arg1;
+ (id)getCurrentDeviceName;
+ (void)fireLocalMemoryWarningNotify;
+ (void)removeLocalMemoryWarningObserver:(id)arg1;
+ (void)addLocalMemoryWarningObserver:(id)arg1 selector:(SEL)arg2;
+ (_Bool)isOrientationPortrait;
+ (_Bool)isOrientationLandscape;
+ (id)getCurrentLanguageAppDescription:(id)arg1;
+ (id)getCurrentLanguageAppName:(id)arg1;
+ (id)getServiceAppItemCurrentLanguageAppName:(id)arg1;
+ (id)getRecommandAppItemCurrentLanguageAppName:(id)arg1;
+ (long long)GetAppVerCompareWithLastRun;
+ (long long)VersionCompare:(id)arg1 vs:(id)arg2;
+ (id)getAppNameById:(id)arg1;
+ (id)getAppNameByMsg:(id)arg1;
+ (id)getAppFromUrl:(id)arg1 from:(int)arg2;
+ (id)getAppInstallUrl:(id)arg1 from:(int)arg2;
+ (id)getDeviceType;
+ (id)getOriginUrlFromSecureUrl:(id)arg1;
+ (id)getSecureUrl:(id)arg1 from:(int)arg2 isAppInstalled:(_Bool)arg3;
+ (_Bool)canOpenURL:(id)arg1;
+ (id)UrlFromTypeToString:(int)arg1;
+ (_Bool)isChinaMainlandTimeZone;
+ (_Bool)isChinaPhoneOrSimpleCHSUser;
+ (_Bool)isChinaPhoneAndSimpleCHSUser;
+ (_Bool)isChinaLanguageUser;
+ (_Bool)isHkTraditionalChinaLanguageUser;
+ (_Bool)isTwTraditionalChinaLanguageUser;
+ (_Bool)isSimpleChinaLanguageUser;
+ (_Bool)canShowFaceBookPlugin;
+ (_Bool)isChinaPhoneUser;
+ (_Bool)checkSavePhoto:(id)arg1;
+ (void)saveLastUserName:(id)arg1;
+ (id)getLastUserName;
+ (void)saveLastPhoneNumber:(id)arg1;
+ (id)getLastPhoneNumber;
+ (void)saveLastLoginName:(id)arg1;
+ (id)getLastLoginName;
+ (_Bool)uploadUpdateStatOpLog:(unsigned int)arg1;
+ (unsigned int)calStringLen:(id)arg1 maxLen:(unsigned int)arg2;
+ (void)cutTextView:(id)arg1 withLimitLen:(unsigned int)arg2;
+ (void)cutTextField:(id)arg1 withLimitLen:(unsigned int)arg2;
+ (void)cutTextView:(id)arg1 orTextField:(id)arg2 withLimitLen:(unsigned int)arg3;
+ (unsigned int)calStringLen:(id)arg1;
+ (void)updateLanguageForFormat:(id)arg1;
+ (long long)daysBetweenFrom:(id)arg1 To:(id)arg2;
+ (id)genTimelineVideoTimeFormatByUInt:(unsigned int)arg1;
+ (id)genWCTimelineVideoTimeFormatByUInt:(unsigned int)arg1;
+ (id)genShakeTvHistoryShowTime:(unsigned int)arg1;
+ (id)genReceivedRedEnvelopesShowTime:(unsigned int)arg1;
+ (id)genFTSSearchFullShowTime:(unsigned int)arg1;
+ (id)genFTSSearchShowTime:(unsigned int)arg1;
+ (id)genImgMsgTimeForFastBrowse:(unsigned int)arg1;
+ (unsigned int)genCurrentTime;
+ (id)genImgMsgCreatTimeStringByUInt:(unsigned int)arg1;
+ (id)genScanHistoryCellTimeStringByUInt:(double)arg1;
+ (id)genFavRecordSubTimeStringByUInt:(unsigned int)arg1;
+ (id)genFavDetailSrcTimeStringByUInt:(unsigned int)arg1;
+ (id)genFavCellTimeStringByUInt:(unsigned int)arg1;
+ (id)genYoTimeShortStringByUInt:(unsigned int)arg1;
+ (id)genYoTitleShortStringByUInt:(unsigned int)arg1;
+ (id)genWCLocalizeMonthStringByDate:(id)arg1;
+ (id)genWCLocalizeDayStringByDate:(id)arg1;
+ (id)genWCTimeShortStringByUInt:(unsigned int)arg1;
+ (id)genWCTimeStringByUInt:(unsigned int)arg1 atScene:(int)arg2;
+ (id)genMessageListTimeStringOfFullYearByUInt:(unsigned int)arg1 retIsMoreThanAWeek:(_Bool *)arg2;
+ (id)genMessageListTimeStringByUInt:(unsigned int)arg1 retIsMoreThanAWeek:(_Bool *)arg2;
+ (id)genMessageListTimeString:(id)arg1;
+ (id)genShortDateTimeStringByUInt:(unsigned int)arg1;
+ (id)genDateTimeStringByUInt:(unsigned int)arg1;
+ (id)dateFormatMonth:(id)arg1;
+ (id)dateFormatLongLong:(id)arg1;
+ (id)dateFormatLong:(id)arg1;
+ (id)dateFormatWithOutYear:(id)arg1;
+ (id)dateFormat:(id)arg1;
+ (id)timeAdjustDateString:(id)arg1 timeHour:(long long)arg2;
+ (id)timeFormat:(id)arg1;
+ (id)genHourAndMinStringFromInt:(long long)arg1;
+ (id)genDateTimeString:(id)arg1;
+ (id)genVoiceReminderDataTimeString:(id)arg1;
+ (id)genVoiceReminderDataTimeStringByUInt:(unsigned int)arg1;
+ (id)timeAjustFormat:(id)arg1 timeHour:(long long)arg2;
+ (id)dateFormatForVoiceOver:(id)arg1;
+ (id)dateMonthFormatLong:(id)arg1;
+ (id)dateYearFormatLong:(id)arg1;
+ (_Bool)isLogin;
+ (void)removePBEventObserverListItemByObject:(id)arg1;
+ (void)removePBEventObserverListItem:(unsigned int)arg1 andValue:(id)arg2;
+ (void)addPBEventObserverListItem:(unsigned int)arg1 andValue:(id)arg2;
+ (void)removeMessageObserverListItemByList:(vector_a9c0768e)arg1 andValue:(id)arg2;
+ (void)addMessageObserverListItemByList:(vector_a9c0768e)arg1 andValue:(id)arg2;
+ (void)removeMessageObserverListItemByObject:(id)arg1;
+ (void)removeMessageObserverListItem:(unsigned int)arg1 andValue:(id)arg2;
+ (void)addMessageObserverListItem:(unsigned int)arg1 andValue:(id)arg2;
+ (void)removeEventObserverListItemByObject:(id)arg1;
+ (void)removeEventObserverListItem:(unsigned int)arg1 andValue:(id)arg2;
+ (void)addEventObserverListItem:(unsigned int)arg1 andValue:(id)arg2;
+ (double)getMainWindowHeight;
+ (double)getMainWindowWidth;
+ (id)getMainController;
+ (_Bool)isSupportRTMatte;
+ (_Bool)isSupportVideoRecord;
+ (_Bool)isLongOriginImage:(id)arg1;
+ (_Bool)isSupportHQImage;
+ (double)getDeviceScale;
+ (_Bool)isiPodTouch;
+ (_Bool)isGoogleScene:(unsigned int)arg1;
+ (_Bool)isLBSScene:(unsigned int)arg1;
+ (_Bool)isShakeScene:(unsigned int)arg1;
+ (void)setGenearlPasteboardString:(id)arg1;
+ (id)getGenearlPasteboardString;
+ (id)getGenearlPasteboard;

@end


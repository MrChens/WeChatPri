//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMDumpReportDataProvider : NSObject
{
}

+ (id)getDumpFilePathesWithFileType:(unsigned long long)arg1 withDate:(id)arg2;
+ (id)getFileSuffixWithType:(unsigned long long)arg1 withDate:(id)arg2;
+ (id)getDumpReportDataWithReportType:(unsigned long long)arg1 withDate:(id)arg2;
+ (id)getDumpReportDataWithReportType:(unsigned long long)arg1;
+ (id)getReportDataWithType:(unsigned long long)arg1 onDate:(id)arg2;
+ (id)getAllTypeReportDataWithDate:(id)arg1;
+ (id)getAllTypeReportData;
+ (id)getTodayOneReportData;

@end


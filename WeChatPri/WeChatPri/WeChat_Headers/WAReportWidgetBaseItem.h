//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@class NSString;

@interface WAReportWidgetBaseItem : WAReportBaseItem
{
    unsigned int _widgetType;
    NSString *_requestKey;
}

+ (id)itemWithAppId:(id)arg1 version:(long long)arg2 state:(unsigned long long)arg3 widgetType:(unsigned int)arg4 requestKey:(id)arg5;
@property(retain, nonatomic) NSString *requestKey; // @synthesize requestKey=_requestKey;
@property(nonatomic) unsigned int widgetType; // @synthesize widgetType=_widgetType;
- (void).cxx_destruct;
- (void)makeSafeString;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KVCommReportItem;

@interface KVCommReportItemWithStatus : NSObject
{
    _Bool _m_isReport;
    unsigned int _add_time;
    KVCommReportItem *_m_item;
}

@property(nonatomic) unsigned int add_time; // @synthesize add_time=_add_time;
@property(nonatomic) _Bool m_isReport; // @synthesize m_isReport=_m_isReport;
@property(retain, nonatomic) KVCommReportItem *m_item; // @synthesize m_item=_m_item;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1 isReport:(_Bool)arg2;

@end


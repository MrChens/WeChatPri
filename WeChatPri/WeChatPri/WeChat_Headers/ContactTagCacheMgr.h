//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSMutableDictionary;

@interface ContactTagCacheMgr : MMObject
{
    NSMutableDictionary *m_dicCache;
    _Bool _bIsAlreadyBuildCacheFromContacts;
}

- (void).cxx_destruct;
- (id)GetLabelIDToUserNameList;
- (id)GetCacheValue:(id)arg1;
- (void)DelCacheKey:(id)arg1;
- (void)ModCacheKey:(id)arg1 Value:(id)arg2;
- (void)LoadCacheDataFromContacts;
- (id)init;

@end


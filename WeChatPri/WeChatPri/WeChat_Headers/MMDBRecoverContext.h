//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMDBRAssist, WCDBCorruptInfo;

@interface MMDBRecoverContext : NSObject
{
    unsigned int m_dbID;
    MMDBRAssist *m_assist;
    WCDBCorruptInfo *m_corruptInfo;
}

@property(retain, nonatomic) WCDBCorruptInfo *m_corruptInfo; // @synthesize m_corruptInfo;
@property(retain, nonatomic) MMDBRAssist *m_assist; // @synthesize m_assist;
@property(nonatomic) unsigned int m_dbID; // @synthesize m_dbID;
- (void).cxx_destruct;
- (id)corruptDBPath;
- (void)clearDBCorruptNum;

@end

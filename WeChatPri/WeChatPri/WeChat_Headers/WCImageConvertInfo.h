//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface WCImageConvertInfo : NSObject <PBCoding>
{
    unsigned int lastCreateTime;
    NSString *usrName;
    NSString *nickName;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *nickName; // @synthesize nickName;
@property(nonatomic) unsigned int lastCreateTime; // @synthesize lastCreateTime;
@property(retain, nonatomic) NSString *usrName; // @synthesize usrName;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


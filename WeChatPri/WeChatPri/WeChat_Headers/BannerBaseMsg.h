//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSString;

@interface BannerBaseMsg : NSObject <PBCoding>
{
    unsigned int type;
    unsigned int showType;
    unsigned int valid;
    NSString *data;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *data; // @synthesize data;
@property(nonatomic) unsigned int valid; // @synthesize valid;
@property(nonatomic) unsigned int showType; // @synthesize showType;
@property(nonatomic) unsigned int type; // @synthesize type;
- (void).cxx_destruct;
- (void)decodeMsgXml:(id)arg1;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


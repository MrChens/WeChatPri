//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString;

@interface RecentPlayRecommendTopic : MMObject <PBCoding>
{
    unsigned int positionId;
    NSString *moduleTitle;
    NSString *topicId;
    NSString *title;
    NSString *desc;
    NSString *thumbImgUrl;
    NSString *jumpUrl;
    NSString *externInfo;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *externInfo; // @synthesize externInfo;
@property(nonatomic) unsigned int positionId; // @synthesize positionId;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl;
@property(retain, nonatomic) NSString *thumbImgUrl; // @synthesize thumbImgUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *topicId; // @synthesize topicId;
@property(retain, nonatomic) NSString *moduleTitle; // @synthesize moduleTitle;
- (void).cxx_destruct;
- (void)parse:(id)arg1;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end


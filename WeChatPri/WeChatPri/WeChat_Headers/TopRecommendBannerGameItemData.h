//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class GameCenterGameBriefInfo, NSString;

@interface TopRecommendBannerGameItemData : MMObject <PBCoding>
{
    unsigned int index;
    GameCenterGameBriefInfo *appItem;
    NSString *slogan;
    NSString *customName;
    NSString *sloganColor;
    NSString *nameColor;
    NSString *externInfo;
}

+ (void)initialize;
@property(retain, nonatomic) NSString *externInfo; // @synthesize externInfo;
@property(retain, nonatomic) NSString *nameColor; // @synthesize nameColor;
@property(retain, nonatomic) NSString *sloganColor; // @synthesize sloganColor;
@property(nonatomic) unsigned int index; // @synthesize index;
@property(retain, nonatomic) NSString *customName; // @synthesize customName;
@property(retain, nonatomic) NSString *slogan; // @synthesize slogan;
@property(retain, nonatomic) GameCenterGameBriefInfo *appItem; // @synthesize appItem;
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


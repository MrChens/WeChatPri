//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

@interface ChatBackgroundSettings : NSObject
{
    NSMutableArray *items;
    NSMutableDictionary *backgroundPreferences;
    long long currentCID;
    long long lastSyncListDate;
}

@property(nonatomic) long long lastSyncListDate; // @synthesize lastSyncListDate;
@property(nonatomic) long long currentCID; // @synthesize currentCID;
@property(retain, nonatomic) NSMutableDictionary *backgroundPreferences; // @synthesize backgroundPreferences;
@property(retain, nonatomic) NSMutableArray *items; // @synthesize items;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)keyPaths;
- (unsigned long long)countOfItems;
- (id)getDefaultBackgroundItem;
- (id)getBackgroundPreferenceForUsername:(id)arg1;
- (void)setBackgroundPreference:(id)arg1 forUsername:(id)arg2;
- (id)getChatBackgroundItemByCID:(long long)arg1;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (id)initWithDefault;

@end


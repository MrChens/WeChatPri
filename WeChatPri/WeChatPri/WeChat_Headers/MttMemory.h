//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MttMemoryCommon.h"

@class NSMutableArray;

@interface MttMemory : MttMemoryCommon
{
    int _memorySize;
    NSMutableArray *_values;
}

+ (id)fromJSONString:(id)arg1;
+ (id)instanceWithPropertyInfo:(id)arg1;
@property(retain, nonatomic) NSMutableArray *values; // @synthesize values=_values;
@property(nonatomic) int memorySize; // @synthesize memorySize=_memorySize;
- (void).cxx_destruct;
- (id)JSONString;
- (id)JSONObject;

@end


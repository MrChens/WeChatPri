//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MSETransmitData.h"

@class NSString;

@interface MSETransmitFileData : MSETransmitData
{
    NSString *filePath;
    long long fileSize;
}

+ (void)initialize;
@property(nonatomic) long long fileSize; // @synthesize fileSize;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath;
- (void).cxx_destruct;
- (const map_490096f0 *)getValueTagIndexMap;
- (id)getValueTypeTable;

@end


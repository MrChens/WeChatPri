//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QDataSourceBase.h"

@interface QDataSourceWorldmapStandard : QDataSourceBase
{
}

+ (id)dataSourceStandard:(id)arg1 version:(id)arg2;
+ (id)dataSourceStandard:(id)arg1;
- (id)tilePath:(CDStruct_43274f37)arg1 info:(id)arg2;
- (double)tileSize;
- (id)TileXYToQuadKey:(CDStruct_43274f37)arg1;
- (int)tileType;
- (_Bool)shouldCollectRequestTime;
- (void)setMapLanguage:(unsigned long long)arg1;
- (id)lauguageCode;
- (id)initWithStyleId:(id)arg1 version:(id)arg2;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class FTSBussinessActionInfo, FTSBussinessDetailInfo, NSString;

@interface FTSBussinessCommonItem : MMObject
{
    NSString *_title;
    NSString *_desc;
    NSString *_thumbUrl;
    FTSBussinessDetailInfo *_detailInfo;
    FTSBussinessActionInfo *_actionInfo;
}

+ (id)fromServerObject:(id)arg1;
@property(retain, nonatomic) FTSBussinessActionInfo *actionInfo; // @synthesize actionInfo=_actionInfo;
@property(retain, nonatomic) FTSBussinessDetailInfo *detailInfo; // @synthesize detailInfo=_detailInfo;
@property(retain, nonatomic) NSString *thumbUrl; // @synthesize thumbUrl=_thumbUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (id)init;

@end


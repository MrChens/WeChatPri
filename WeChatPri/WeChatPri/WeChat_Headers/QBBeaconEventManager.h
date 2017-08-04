//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface QBBeaconEventManager : NSObject
{
    _Bool _isEventUploadClose;
    _Bool _isEventUpOnOff;
    _Bool _isBizEventUpload;
    _Bool _isAtsEnable;
    NSDictionary *_detail;
}

+ (_Bool)isAtsEnable;
+ (void)setAtsEnable:(_Bool)arg1;
+ (_Bool)isBizEventUpload;
+ (void)setBizEventUpload:(_Bool)arg1;
+ (_Bool)isEventUpOnOff;
+ (void)setEventUpOnOff:(_Bool)arg1;
+ (_Bool)isEventUploadClose;
+ (void)setEventUploadClose:(_Bool)arg1;
+ (_Bool)isSample:(id)arg1;
+ (_Bool)isUploadBySampleEvent:(id)arg1;
+ (id)shareManager;
@property(nonatomic) _Bool isAtsEnable; // @synthesize isAtsEnable=_isAtsEnable;
@property(nonatomic) _Bool isBizEventUpload; // @synthesize isBizEventUpload=_isBizEventUpload;
@property(nonatomic) _Bool isEventUpOnOff; // @synthesize isEventUpOnOff=_isEventUpOnOff;
@property(nonatomic) _Bool isEventUploadClose; // @synthesize isEventUploadClose=_isEventUploadClose;
@property(retain, nonatomic) NSDictionary *detail; // @synthesize detail=_detail;
- (void).cxx_destruct;
- (id)init;

@end


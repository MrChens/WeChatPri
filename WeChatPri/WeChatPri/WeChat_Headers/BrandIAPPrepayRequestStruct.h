//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface BrandIAPPrepayRequestStruct : NSObject
{
    NSString *_appId;
    NSString *_nonceStr;
    NSString *_timestamp;
    NSString *_package;
    NSString *_paySign;
    NSString *_signType;
    NSString *_stepInURL;
    NSString *_extKey;
}

@property(retain, nonatomic) NSString *extKey; // @synthesize extKey=_extKey;
@property(retain, nonatomic) NSString *stepInURL; // @synthesize stepInURL=_stepInURL;
@property(retain, nonatomic) NSString *signType; // @synthesize signType=_signType;
@property(retain, nonatomic) NSString *paySign; // @synthesize paySign=_paySign;
@property(retain, nonatomic) NSString *package; // @synthesize package=_package;
@property(retain, nonatomic) NSString *timestamp; // @synthesize timestamp=_timestamp;
@property(retain, nonatomic) NSString *nonceStr; // @synthesize nonceStr=_nonceStr;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (void).cxx_destruct;
- (void)dealloc;

@end


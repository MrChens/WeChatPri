//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCPayWordingItem : NSObject
{
    _Bool needShow;
    NSString *entryTip;
    NSString *title;
    NSString *desc;
    NSString *subTitle;
    NSString *subDesc;
}

@property(retain, nonatomic) NSString *subDesc; // @synthesize subDesc;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle;
@property(retain, nonatomic) NSString *desc; // @synthesize desc;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(nonatomic) _Bool needShow; // @synthesize needShow;
@property(retain, nonatomic) NSString *entryTip; // @synthesize entryTip;
- (void).cxx_destruct;
- (id)init;

@end


//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, WCProductImageInfo;

@interface WCProductSKUInfo : NSObject
{
    unsigned int wxPrice;
    unsigned int stock;
    NSString *skuID;
    NSArray *expressList;
    WCProductImageInfo *imageInfo;
}

@property(nonatomic) unsigned int stock; // @synthesize stock;
@property(nonatomic) unsigned int wxPrice; // @synthesize wxPrice;
@property(retain, nonatomic) WCProductImageInfo *imageInfo; // @synthesize imageInfo;
@property(retain, nonatomic) NSArray *expressList; // @synthesize expressList;
@property(retain, nonatomic) NSString *skuID; // @synthesize skuID;
- (void).cxx_destruct;
- (void)dealloc;

@end

